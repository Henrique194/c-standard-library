#include "string.h"

char* strrchr(const char* str, int ch) {
    const char c = (char) ch;
    const char* s = str + strlen(str);
    while (s >= str) {
        if (*s == c) {
            return (char*) s;
        }
        s--;
    }
    return NULL;
}
