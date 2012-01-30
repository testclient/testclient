cmake_minimum_required(VERSION 2.6)

project(testclient)

find_package(Qt4 COMPONENTS QtCore QtGui QtNetwork REQUIRED)
include(${QT_USE_FILE})

################################################################################
# GTest - http://code.google.com/p/googletest/
################################################################################
add_subdirectory(gtest)
enable_testing(true)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(testclient_HEADERS testclient.h log.h)
set(testclient_SOURCES testclient.cpp main.cpp log.cpp)
set(testclient_UIS testclient.ui)
set(testclient_RESOURCES testclient.qrc)

qt4_wrap_cpp(testclient_MOC ${testclient_HEADERS})
qt4_wrap_ui(testclient_UIS_H ${testclient_UIS})
qt4_add_resources(testclient_RESOURCES_CPP ${testclient_RESOURCES})

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(testclient
    ${testclient_SOURCES}
    ${testclient_MOC}
    ${testclient_UIS_H}
    ${testclient_RESOURCES_CPP}
)

target_link_libraries(testclient ${QT_LIBRARIES})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests log_test.cpp )
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main)
add_test( runUnitTests runUnitTests )
