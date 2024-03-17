cmake_minimum_required(VERSION 3.10)

project(libserialport)

add_definitions(-DLIBSERIALPORT_ATBUILD)

if (WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99 -Wall -Wextra -pedantic -Wmissing-prototypes -Wshadow ")
    set(CMAKE_EXE_LINKER_FLAGS --enable-auto-import)
else (_WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99 -Wall -Wextra -pedantic -Wmissing-prototypes -Wshadow")
endif (WIN32)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} ${CMAKE_CXX_FLAGS} -s -Os")

set(SOURCE_FILES serialport.c timing.c libserialport.h)
if (WIN32)
    set(SOURCE_FILES ${SOURCE_FILES} windows.c)
endif (WIN32)
if (UNIX)
    set(SOURCE_FILES ${SOURCE_FILES} linux.c linux_termios.c linux_termios.h)
endif ()
if (APPLE)
    set(SOURCE_FILES ${SOURCE_FILES} macosx.c)
endif ()
if (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")
    set(SOURCE_FILES ${SOURCE_FILES} freebsd.c)
endif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD")

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

if (WIN32)
    target_link_libraries(${PROJECT_NAME} cfgmgr32 SetupAPI)
endif ()

include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
