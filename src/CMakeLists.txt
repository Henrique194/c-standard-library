add_subdirectory("string")

set(SOURCE_FILES main.c)

if(WIN32)
    add_executable(${PACKAGE_TARNAME} WIN32 ${SOURCE_FILES})
else()
    add_executable(${PACKAGE_TARNAME} ${SOURCE_FILES})
endif()

target_include_directories(${PACKAGE_TARNAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_BINARY_DIR}
)
target_link_libraries(${PACKAGE_TARNAME} string)

if(MSVC)
    set_target_properties(${PACKAGE_TARNAME} PROPERTIES
        LINK_FLAGS
        "/MANIFEST:NO"
    )
endif()
