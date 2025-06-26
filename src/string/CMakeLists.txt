add_library(string STATIC
    strlen.c
)

target_include_directories(string PUBLIC "./include")
