#include "string.h"

char* strncpy(char* dest, const char* src, size_t count) {
    char* ret = dest;
    while (*src != '\0' && count > 0) {
        *dest = *src;
        src++;
        dest++;
        count--;
    }
    while (count > 0) {
        *dest = '\0';
        dest++;
        count--;
    }
    return ret;
}
