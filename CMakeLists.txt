cmake_minimum_required(VERSION 3.0.0)
project(baby VERSION 0.1.0)
list(APPEND CMAKE_PREFIX_PATH "usr/include/python3.8")
include(CTest)
enable_testing()

find_package(Boost 1.71.0 COMPONENTS system filesystem REQUIRED)
find_package(PythonLibs)
include_directories(${Boost_INCLUDE_DIRS})
include_directories(${PYTHON_INCLUDE_PATH})

add_library(baby src/basis.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
