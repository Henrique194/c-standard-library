add_library(string STATIC
    strcpy.c
    strlen.c
)

target_include_directories(string PUBLIC "./include")
