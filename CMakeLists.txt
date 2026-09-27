cmake_minimum_required(VERSION 3.20)
project(VehicleTelemetrySimulator VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(can_frame INTERFACE)

target_include_directories(can_frame INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

add_executable(vts
	src/main.cpp
)

target_link_libraries(vts PRIVATE
	can_frame
)
