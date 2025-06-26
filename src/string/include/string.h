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
 * Copies the null-terminated byte string pointed to by \p src, including the
 * null terminator, to the character array whose first element is pointed to by
 * \p dest.
 *
 * The behavior is undefined if the \p dest array is not large enough. The
 * behavior is undefined if the strings overlap. The behavior is undefined if
 * either \p dest is not a pointer to a character array or \p src is not a
 * pointer to a null-terminated byte string.
 *
 * @param dest - pointer to the character array to write to
 * @param src - pointer to the null-terminated byte string to copy from
 * @return a copy of \p dest
 */
char* strcpy(char* dest, const char* src);

/**
 * Copies at most \p count characters of the character array pointed to by
 * \p src (including the terminating null character, but not any of the
 * characters that follow the null character) to character array pointed to by
 * \p dest.
 * If \p count is reached before the entire array \p src was copied, the
 * resulting character array is not null-terminated.
 * If, after copying the terminating null character from \p src, \p count is not
 * reached, additional null characters are written to \p dest until the total of
 * \p count characters have been written.
 *
 * The behavior is undefined if the character arrays overlap, if either \p dest
 * or \p src is not a pointer to a character array (including if \p dest or
 * \p src is a null pointer), if the size of the array pointed to by \p dest is
 * less than count, or if the size of the array pointed to by \p src is less
 * than count and it does not contain a null character.
 *
 * @param dest - pointer to the character array to copy to
 * @param src - pointer to the character array to copy from
 * @param count - maximum number of characters to copy
 * @return a copy of dest
 */
char* strncpy(char* dest, const char* src, size_t count);

/**
 * Returns the length of the given null-terminated byte string, that is, the
 * number of characters in a character array whose first element is pointed to
 * by str up to and not including the first null character.
 *
 * @param str - pointer to the null-terminated byte string to be examined
 * @return The length of the null-terminated byte string \p str .
 */
size_t strlen(const char* str);

/**
 * Compares two null-terminated byte strings lexicographically.
 *
 * The sign of the result is the sign of the difference between the values of
 * the first pair of characters (both interpreted as unsigned char) that differ
 * in the strings being compared.
 *
 * The behavior is undefined if \p lhs or \p rhs are not pointers to
 * null-terminated byte strings.
 *
 * @param lhs, rhs - pointers to the null-terminated byte strings to compare
 * @return Negative value if \p lhs appears before \p rhs in lexicographical
 *         order. Zero if \p lhs and \p rhs compare equal. Positive value if
 *         \p lhs appears after \p rhs in lexicographical order.
 */
int strcmp(const char* lhs, const char* rhs);

#endif
