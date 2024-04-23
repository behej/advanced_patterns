cmake_minimum_required(VERSION 3.19)
project(PolicyAdapter
        VERSION 1.0.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)            # Declare which C++ version to use. Can be 98, 11, 14, 17 (CMake >3.8), 20 (CMake >3.12)
set(CMAKE_CXX_STANDARD_REQUIRED ON)   # Requires C++ standard to be applied. CMake doesn't downgrade if no compatible compiler is found. (Default is OFF)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(PolicyAdapter 
                main.cpp
                # SmartPtr.cpp
                )
