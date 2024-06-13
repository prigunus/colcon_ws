from setuptools import find_packages, setup

package_name = 'my_pkg'

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
    maintainer='kcm',
    maintainer_email='kcm@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mpub = my_pkg.simple_message_pub:main',
            'myinterfacepub = my_pkg.simple_myinterface_pub:main',
            'myinterfaceusb = my_pkg.simple_myinterface_sub:main',

        ],
    },
)
