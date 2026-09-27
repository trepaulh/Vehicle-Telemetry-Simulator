# Vehicle Telemetry Simulator (VTS)

Vehicle Telemetry Simulator (VTS) is a C++ application that simulates the electronic systems and telemetry network of a vehicle

Simulated ECUs and sensors generate vehicle data such as engine RPM, vehicle speed, throttle position, coolant temperature, fuel level, wheel speed, and GPS information. These components communicate through a simulated CAN bus.

A telemetry service receives the CAN messages, decodes them, maintains the current vehicle state, detects communication faults/timeouts, and exposes the information to a dashboard/logger.

This project will eventually support fault injection, automated testing, data logging, replay, and potentially real CAN hardware.