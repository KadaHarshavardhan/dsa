set(LIBRARY_NAME _basic_operations)

project(${LIBRARY_NAME} VERSION 1.0.0 DESCRIPTION "${LIBRARY_NAME}")


set(LIB_HEADERS
    "${CMAKE_SOURCE_DIR}/Linked_List/includes/list.h" 
    ../../includes/list.h 
)

set(LIB_SOURCE_DIR ${CMAKE_SOURCE_DIR}/Linked_List/basic_operations/src)

message(STATUS "CMAKE_SOURCE_DIR:${CMAKE_SOURCE_DIR}")

set(LIB_SOURCES
    ${LIB_SOURCE_DIR}/delete.c
    ${LIB_SOURCE_DIR}/display.c
    ${LIB_SOURCE_DIR}/insert.c
)

add_library(${LIBRARY_NAME} SHARED ${LIB_SOURCES})

set_target_properties(${LIBRARY_NAME} PROPERTIES
  PUBLIC_HEADER "${LIB_HEADERS}" 
)