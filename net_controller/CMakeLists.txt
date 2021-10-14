cmake_minimum_required(VERSION 3.21.2)
project(net_controller)

set(${PROJECT_NAME}_SOURCES
    # impl
    impl/net_controller_impl.cpp
)

set(${PROJECT_NAME}_DIRS
    ${CMAKE_SOURCE_DIR}/net_controller
)

set(${PROJECT_NAME}_PRIVATE_COMPILE_OPTIONS)
if(MSVC)
    list(APPEND ${${PROJECT_NAME}_PRIVATE_COMPILE_OPTIONS}
        /W4
        /WX
    )
endif()

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_DIRS})
target_compile_options(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_PRIVATE_COMPILE_OPTIONS})