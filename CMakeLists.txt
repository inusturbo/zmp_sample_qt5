cmake_minimum_required(VERSION 3.26)
project(zmp_control)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(zmp_control main.cpp
        ${CMAKE_SOURCE_DIR}/include/mainwindow.h
        mainwindow.cpp
        mainwindow.ui
)

add_library(HevCnt STATIC HevCnt.cpp)
add_library(GameControl STATIC GameControl.cpp)
add_library(RingBuffer STATIC RingBuffer.cpp)

find_library(libCANUSB NAMES CANUSB PATHS ${CMAKE_SOURCE_DIR}/lib)
find_library(libhevcontrol NAMES hevcontrol PATHS ${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(
        zmp_control
        HevCnt
        GameControl
        RingBuffer
        ${libCANUSB}
        ${libhevcontrol}
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)

