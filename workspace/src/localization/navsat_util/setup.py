from setuptools import find_packages, setup

package_name = 'navsat_util'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='bret',
    maintainer_email='bretwitt@hawaii.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        "console_scripts": ["datum_service = navsat_util.datum_node:main",
                            "heading_calib = navsat_util.heading_calibration:main",
                            "imu_offset = navsat_util.imu_offset:main"],
    },
)
