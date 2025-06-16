/*
 * File: macros.h
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * Commonly used convenience macros.
 *
 */

#ifndef __MACROS_H__
#define __MACROS_H__

#define MOD(a, b) ((a) % (b) + (b)) % (b)

#define PI 3.14159265358979323846f
#define ABS(val) ((val) < 0) ? -(val) : (val)
#define AREA(l, w) (l * w)
#define AVERAGE(val1, val2) (((double)(val1) + (val2)) / 2.0)
#define BIT_CHK(bit, reg) ((reg >> (bit)) & 1)
#define BIT_CLR(value, bit) ((value) &= ~(1L << (bit)))
#define BIT_LSB(reg) ((reg) & 1)
#define BIT_SET(value, bit) ((value) |= (1L << (bit)))
#define CIRCUMFERENCE(radius) (PI * radious * radious) // circle circumference
#define IN_RANGE(x, lo, hi) (((x > lo) && (x < hi)) || (x == lo) || (x == hi))
#define IS_EVEN(x) !BIT_LSB(x)
#define IS_ODD(x) (x & 1)

#define MAX(a, b)                                                              \
    ({                                                                         \
        __typeof__(a) _a = (a);                                                \
        __typeof__(b) _b = (b);                                                \
        _a > _b ? _a : _b;                                                     \
    })

#define MIN(a, b)                                                              \
    ({                                                                         \
        __typeof__(a) _a = (a);                                                \
        __typeof__(b) _b = (b);                                                \
        _a < _b ? _a : _b;                                                     \
    })

#define PERCENT(val, per) ((val) * (per) / 100.0)
#define RAND_INT(min, max) ((rand() % (int)(((max) + 1) - (min))) + (min))
#define SIZE(x) (sizeof(x) / sizeof(x[0]))
#define SUM(a, b) (a + b)
#define XOR_SWAP(a, b)                                                         \
    do {                                                                       \
        (a) ^= (b);                                                            \
        (b) ^= (a);                                                            \
        (a) ^= (b);                                                            \
    } while (0)

#define PRINT_CHAR(x) printf("%c", x) // print char
#define PRINT_STR(x) printf("%s", x)  // print string of characters

// integer
#define INPUT_INT(x) scanf("%d", &x)     // int
#define INPUT_SHORT(x) scanf("%hd", &x)  // short int
#define INPUT_LINT(x) scanf("%ld", &x)   // lont int
#define INPUT_LLINT(x) scanf("%lld", &x) // long long int
#define INPUT_OCT(x) scanf("%o", &x)     // octal
#define INPUT_HEX(x) scanf("%x", &x)     // hexadecimal
#define INPUT_UINT(x) scanf("%u", &x)    // unsigned int

#define PRINT_INT(x) printf("%d", x)     // int
#define PRINT_SHORT(x) printf("%hd", x)  // short int
#define PRINT_LINT(x) printf("%ld", x)   // long int
#define PRINT_LLINT(x) printf("%lld", x) // long long int
#define PRINT_OCT(x) printf("%o", x)     // octal without leading zeros
#define PRINT_HEX(x) printf("%x", x)     // hexadecimal
#define PRINT_UINT(x) printf("%u", x)    // unsigned int

// floating point
#define INPUT_FLOAT(x) scanf("%f", &x)    // float
#define INPUT_DOUBLE(x) scanf("%lf", &x)  // double
#define INPUT_LDOUBLE(x) scanf("%Lf", &x) // long double
#define INPUT_FLOATEXP(x) scanf("%e", &x) // floating point exponent

#define PRINT_FLOAT(x) printf("%f", x)    // float
#define PRINT_DOUBLE(x) printf("%lf", x)  // double
#define PRINT_LDOUBLE(x) printf("%Lf", x) // long double
#define PRINT_FLOATEXP(x) printf("%e", x) // floating point exponent

// rounded integer division:

#define FLOOR_DIV(x, y) ((x) / (y))
#define CEIL_DIV(x, y) FLOOR_DIV((x) + (y - 1), y)
#define ROUND_DIV(x, y) FLOOR_DIV((x) + (y) / 2, y)

#define OFFSETOF(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))

#define SWAP(a, b)                                                             \
    do {                                                                       \
        __typeof__(a) _a = (a);                                                \
        __typeof__(b) _b = (b);                                                \
        _a < _b ? _a : _b;                                                     \
        (a) = _b;                                                              \
        (b) = _a;                                                              \
    } while (0)

#define STR(x) #x

typedef unsigned char BYTE; // name BYTE for one-byte numbers

// press any key (linux & ms windows)
#define PRESSKEY                                                               \
    printf("\n\t Press any key to continue...");                               \
    while (1) {                                                                \
        if (getc(stdin)) {                                                     \
            break;                                                             \
        }                                                                      \
    }

#endif // __MACROS_H__
