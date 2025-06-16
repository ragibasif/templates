/*
 * File: program.h
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * Provides a template to build C programs.
 *
 */

#ifndef __PROGRAM_H__
#define __PROGRAM_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/* --- Version Information --- */
#define PROGRAM_VERSION_MAJOR 1 /**< Major version (API-breaking changes) */
#define PROGRAM_VERSION_MINOR                                                  \
    0 /**< Minor version (backwards-compatible additions) */
#define PROGRAM_VERSION_PATCH 0 /**< Patch version (bug fixes) */

/* String representation of version */
#define PROGRAM_VERSION_STRING "1.0.0"

/* Version comparison macros (useful for dependency checks) */
#define PROGRAM_VERSION_CHECK(major, minor, patch)                             \
    ((major) < PROGRAM_VERSION_MAJOR ||                                        \
     ((major) == PROGRAM_VERSION_MAJOR && (minor) < PROGRAM_VERSION_MINOR) ||  \
     ((major) == PROGRAM_VERSION_MAJOR && (minor) == PROGRAM_VERSION_MINOR &&  \
      (patch) <= PROGRAM_VERSION_PATCH))

#define MY_MACRO(x) ((x) * 2)

typedef struct {
    int member1;
    float member2;
} my_struct_t;

typedef enum { VALUE1, VALUE2, VALUE3 } my_enum_t;

int my_function(int param1, int param2);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __PROGRAM_H__

/******************************************************************************/
/*                                                        SEMANTIC VERSIONING */
/******************************************************************************/

/**
 * [Semantic Versioning 2.0.0](https://semver.org/)
 *
 * Given a version number MAJOR.MINOR.PATCH, increment the:
 * 1. MAJOR version when you make incompatible API changes
 * 2. MINOR version when you add functionality in a backward compatible manner
 * 3. PATCH version when you make backward compatible bug fixes
 *
 * Additional labels for pre-release and build metadata are available as
 * extensions to the MAJOR.MINOR.PATCH format.
 */

/******************************************************************************/
/*                                                                MIT LICENSE */
/******************************************************************************/

/**
 * [The MIT License](https://opensource.org/license/mit)
 *
 * Copyright (c) 2025 Ragib Asif
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
