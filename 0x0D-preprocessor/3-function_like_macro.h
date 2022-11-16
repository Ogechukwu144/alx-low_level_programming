#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/* Other ways to write these macros are */
/* _FUNCTION_LIKE_MACRO_H and _FUNCTION_LIKE_MACRO_ */

#define ABS(x) ((x) < (0) ? (x) * (-1) : (x))
/* or #define ABS(x) (((x) >= 0) ? (x) : -(x)) */

#endif
