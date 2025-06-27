add_library(string STATIC
    strcat.c
    strchr.c
    strcmp.c
    strcpy.c
    strlen.c
    strncat.c
    strncmp.c
    strncpy.c
)

target_include_directories(string PUBLIC "./include")
