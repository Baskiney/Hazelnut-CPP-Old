cmake_minimum_required(VERSION 3.8)
project(Hazelnut)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES source/main.cpp source/constant/window_constants.cpp source/constant/window_constants.h)
add_executable(Hazelnut ${SOURCE_FILES})



set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

#GLM only included because no dll
find_package(GLM)
include_directories(${GLM_INCLUDE_DIR})

#SFML
find_package(SFML REQUIRED COMPONENTS network audio graphics window system)
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(Hazelnut ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})


#Some random libs looks useful
include(InstallRequiredSystemLibraries)

#GLM is only header linked no binaries