cmake_minimum_required(VERSION 3.10)

project(NominaEmpleado)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
        main.cpp
        Empleado.cpp
        Junior.cpp
        Senior.cpp
        LiderTecnico.cpp
        Tester.cpp
        Sistema.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/proyecto)

add_executable(nomina ${SOURCES})
