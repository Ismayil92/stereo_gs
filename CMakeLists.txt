cmake_minimum_required(VERSION 3.10.2)
project(READ_CSI_CAMERA)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_AUTOMOC ON)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(OpenCV_DIR /opt/opencv/lib/cmake/opencv4)
find_package(OpenCV REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)


message(STATUS "OpenCV library status:")

message(STATUS "    config: ${OpenCV_DIR}")

message(STATUS "    version: ${OpenCV_VERSION}")

message(STATUS "    libraries: ${OpenCV_LIBS}")

message(STATUS "    include path: ${CMAKE_CURRENT_SOURCE_DIR}/include ${OpenCV_INCLUDE_DIRS}")




set(stcam_LIBS  
src/camera_config.cpp
src/disparity.cpp
src/main_window.cpp
include/camera_config.hpp
include/disparity.hpp
include/main_window.hpp
include/ui_main_window.hpp)

#set(CMAKE_PREFIX_PATH /usr/include/aarch-linux-gnu/qt5)
add_library(stcam_LIBRARY ${stcam_LIBS})
target_include_directories(stcam_LIBRARY PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}
  ${Qt5Widgets_INCLUDE_DIRS}
  ${Qt5Gui_INCLUDE_DIRS}
  ${Qt5Core_INCLUDE_DIRS}
)

# We need add -DQT_WIDGETS_LIB when using QtWidgets in Qt 5.
add_definitions(${Qt5Widgets_DEFINITIONS} ${Qt5Gui_DEFINITIONS})
# Executables fail to build with Qt 5 in the default configuration
# without -fPIE. We add that here.
set(CMAKE_CXX_FLAGS "${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")


# To find jsoncpp libraries
find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP jsoncpp)

add_executable(stereo_cam src/stereo_camera_display.cpp)
target_include_directories(stereo_cam PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}  
  ${JSONCPP_INCLUDE_DIRS}
)
target_link_libraries(stereo_cam stcam_LIBRARY ${OpenCV_LIBS} ${JSONCPP_LIBRARIES} ${Qt5Widgets_LIBRARIES})