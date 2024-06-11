"""Wrapper around the chrono.vehicle.ARTcar class which matches the ART-1 platform.

It derives contains the veh.ARTcar and all the sensors associated with the physical
platform.
"""

# Standard Imports
from pathlib import Path

# Chrono Imports
import pychrono as chrono
import pychrono.vehicle as veh
import pychrono.sensor as sens


class ART1(veh.ARTcar):
    def __init__(self, init_loc: chrono.ChVector3d, init_rot: chrono.ChQuaterniond):
        super().__init__()
        self.SetContactMethod(chrono.ChContactMethod_NSC)
        self.SetChassisCollisionType(veh.CollisionType_NONE)
        self.SetChassisFixed(False)
        self.SetTireType(veh.TireModelType_TMEASY)
        self.SetInitPosition(chrono.ChCoordsysd(init_loc, init_rot))
        self.SetTireStepSize(1e-3)
        super().Initialize()

        chassis_body = self.GetChassisBody()

        self.driver = veh.ChDriver(self.GetVehicle())

        self._sensors = []
        sensor_path = Path(__file__).parent.parent / "data" / "art-1" / "sensors"

        camera_pos = chrono.ChVector3d(0.204, 0, 0.10018)
        camera_rot = chrono.ChQuaterniond()
        camera_rot.SetFromAngleAxis(0.1, chrono.ChVector3d(0.,1.,0.))
        camera_pose = chrono.ChFramed(camera_pos, camera_rot)        
        
        lidar_pos = chrono.ChVector3d(0.0, 0, 0.3)
        lidar_rot = chrono.ChQuaterniond()
        lidar_pose = chrono.ChFramed(camera_pos, camera_rot)


        self.cam = sens.CastToChCameraSensor(
            sens.Sensor.CreateFromJSON(
                str(sensor_path / "camera.json"), chassis_body, camera_pose
            )
        )

        offset_pose = chrono.ChFramed()
        self.acc = sens.CastToChAccelerometerSensor(
            sens.Sensor.CreateFromJSON(
                str(sensor_path / "accelerometer.json"), chassis_body, offset_pose
            )
        )
        self.gyro = sens.CastToChGyroscopeSensor(
            sens.Sensor.CreateFromJSON(
                str(sensor_path / "gyroscope.json"), chassis_body, offset_pose
            )
        )
        self.mag = sens.CastToChMagnetometerSensor(
            sens.Sensor.CreateFromJSON(
                str(sensor_path / "magnetometer.json"), chassis_body, offset_pose
            )
        )
        self.gps = sens.CastToChGPSSensor(
            sens.Sensor.CreateFromJSON(
                str(sensor_path / "gps.json"), chassis_body, offset_pose
            )
        )
        self.lidar = sens.CastToChLidarSensor(
            sens.Sensor.CreateFromJSON(
                str(sensor_path / "lidar.json"), chassis_body, lidar_pose
            )
        )

        self._sensors.append(self.cam)
        self._sensors.append(self.acc)
        self._sensors.append(self.gyro)
        self._sensors.append(self.mag)
        self._sensors.append(self.gps)
        self._sensors.append(self.lidar)

    def Initialize(self, sensor_manager: sens.ChSensorManager):
        self.SetChassisVisualizationType(veh.VisualizationType_PRIMITIVES)
        self.SetSuspensionVisualizationType(veh.VisualizationType_PRIMITIVES)
        self.SetSteeringVisualizationType(veh.VisualizationType_PRIMITIVES)
        self.SetWheelVisualizationType(veh.VisualizationType_MESH)
        self.SetTireVisualizationType(veh.VisualizationType_MESH)

        for sensor in self._sensors:
            sensor_manager.AddSensor(sensor)
        sensor_manager.Update()
