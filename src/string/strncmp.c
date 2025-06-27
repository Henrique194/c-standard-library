#include "string.h"

int strncmp(const char* lhs, const char* rhs, size_t count) {
    while (*lhs == *rhs && count > 0) {
        if (*lhs == '\0') {
            break;
        }
        lhs++;
        rhs++;
        count--;
    }
    if (count == 0) {
        return 0;
    }
    return (unsigned char) *lhs - (unsigned char) *rhs;
}
