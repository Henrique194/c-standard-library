cmake_minimum_required(VERSION 3.20.6)
project("C Standard Library" VERSION 1.0.0 LANGUAGES C)
set(CMAKE_C_STANDARD 90)

set(PACKAGE_TARNAME "c-std-lib")

if(MSVC)
    add_definitions("/D_CRT_SECURE_NO_WARNINGS" "/D_CRT_SECURE_NO_DEPRECATE"
        "/D_CRT_NONSTDC_NO_DEPRECATE")
else()
    add_compile_options("-Wall" "-pedantic" "-nostdlib")
endif()

add_subdirectory("src")
