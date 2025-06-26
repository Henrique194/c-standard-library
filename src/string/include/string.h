#ifndef STRING_H
#define STRING_H

#ifndef NULL
#ifdef __cplusplus
#ifndef _WIN64
#define NULL 0
#else
#define NULL 0LL
#endif /* W64 */
#else
#define NULL ((void*) 0)
#endif
#endif

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int size_t;
#endif


/**
 * Returns the length of the given null-terminated byte string, that is, the
 * number of characters in a character array whose first element is pointed to
 * by str up to and not including the first null character.
 *
 * @param str - pointer to the null-terminated byte string to be examined
 * @return The length of the null-terminated byte string \p str .
 */
size_t strlen(const char* str);

#endif
