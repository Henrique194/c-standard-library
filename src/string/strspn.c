#include "string.h"

size_t strspn(const char* dest, const char* src) {
    const char* s = dest;
    while (strchr(src, *s) != NULL) {
        s++;
    }
    return s - dest;
}
