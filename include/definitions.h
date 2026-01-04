#ifndef __COMMON_H__
#define __COMMON_H__


#include <Arduino.h>


/// MACROS
/// ====================================================
#define LEN(x) ((sizeof(x) / sizeof(0 [x])) / ((size_t)(!(sizeof(x) % sizeof(0 [x]))))) // complex but safe macro for the length


#include "autoversion.h"


#endif // ! __COMMON_H__