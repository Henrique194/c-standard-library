#include "string.h"

char* strncat(char* dest, const char* src, size_t count) {
    char* ret = dest;
    if (count <= 0) {
        return ret;
    }
    dest += strlen(dest);
    while (*src != '\0' && count > 0) {
        *dest = *src;
        dest++;
        src++;
        count--;
    }
    *dest = '\0';
    return ret;
}
