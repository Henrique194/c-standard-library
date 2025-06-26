add_library(string STATIC
    strcat.c
    strcmp.c
    strcpy.c
    strlen.c
    strncpy.c
)

target_include_directories(string PUBLIC "./include")
