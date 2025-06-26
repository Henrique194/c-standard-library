#include "string.h"

int strcmp(const char* lhs, const char* rhs) {
    while (*lhs == *rhs) {
        if (*lhs == '\0') {
            break;
        }
        lhs++;
        rhs++;
    }
    return (unsigned char) *lhs - (unsigned char) *rhs;
}
