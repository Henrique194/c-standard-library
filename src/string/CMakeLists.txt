add_library(string STATIC
    strcmp.c
    strcpy.c
    strlen.c
    strncpy.c
)

target_include_directories(string PUBLIC "./include")
