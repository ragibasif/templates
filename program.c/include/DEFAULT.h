/**
 * @file DEFAULT.h
 * @brief One-line description of the header's purpose
 *
 * @author [Ragib Asif](https://github.com/ragibasif)
 * @date YYYY-MM-DD
 * @version 1.0.0
 * @copyright MIT License
 */

#ifndef __DEFAULT_H__
#define __DEFAULT_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/******************************************************************************/
/*                                                                    VERSION */
/******************************************************************************/

/* --- Version Information --- */
#define DEFAULT_VERSION_MAJOR 1 /**< Major version (API-breaking changes) */
#define DEFAULT_VERSION_MINOR                                                  \
    0 /**< Minor version (backwards-compatible additions) */
#define DEFAULT_VERSION_PATCH 0 /**< Patch version (bug fixes) */

/* String representation of version */
#define DEFAULT_VERSION_STRING "1.0.0"

/* Version comparison macros (useful for dependency checks) */
#define DEFAULT_VERSION_CHECK(major, minor, patch)                             \
    ((major) < DEFAULT_VERSION_MAJOR ||                                        \
     ((major) == DEFAULT_VERSION_MAJOR && (minor) < DEFAULT_VERSION_MINOR) ||  \
     ((major) == DEFAULT_VERSION_MAJOR && (minor) == DEFAULT_VERSION_MINOR &&  \
      (patch) <= DEFAULT_VERSION_PATCH))

/******************************************************************************/
/*                                                                   INCLUDES */
/******************************************************************************/

/******************************************************************************/
/*                                                                     MACROS */
/******************************************************************************/

/**
 * @brief Brief description of the macro's purpose
 *
 * Detailed description including any special considerations.
 *
 * @param x Description of macro parameter (if applicable)
 */
#define MY_MACRO(x) ((x) * 2)

/******************************************************************************/
/*                                                                   TYPEDEFS */
/******************************************************************************/

/**
 * @brief Brief description of the type
 *
 * Detailed description of what this type represents and how it should be used.
 */
typedef struct {
    int member1;   /**< Description of member1 */
    float member2; /**< Description of member2 */
} my_struct_t;

/******************************************************************************/
/*                                                                      ENUMS */
/******************************************************************************/

/**
 * @brief Brief description of the enum's purpose
 *
 * Detailed description of when and how to use these values.
 */
typedef enum {
    VALUE1, /**< Description of VALUE1 */
    VALUE2, /**< Description of VALUE2 */
    VALUE3  /**< Description of VALUE3 */
} my_enum_t;

/******************************************************************************/
/*                                                                    STRUCTS */
/******************************************************************************/

/******************************************************************************/
/*                                                                        API */
/******************************************************************************/

/**
 * @brief Brief one-line description of the function
 *
 * Detailed description of the function's purpose and behavior.
 *
 * @param param1 Description of first parameter
 * @param param2 Description of second parameter
 * @return Description of return value
 * @note Any important notes about usage
 * @warning Any critical warnings about the function
 * @see Related functions or resources
 * @example
 *   // Example usage
 *   int result = my_function(1, 2);
 */
int my_function(int param1, int param2);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __DEFAULT_H__

/******************************************************************************/
/*                                                                     AUTHOR */
/******************************************************************************/

/**
 * Author:              Ragib Asif
 * Email:               ragib.asif30@myhunter.cuny.edu
 * GitHub:              https://github.com/ragibasif
 * LinkedIn:            https://www.linkedin.com/in/ragibasif/
 */

/******************************************************************************/
/*                                                                DESCRIPTION */
/******************************************************************************/

/**
 * <This is a default C header file.>
 * Detailed description of the header file contents. This should explain:
 * - What functionality is declared in this header
 * - Any important concepts or usage patterns
 * - Relationships to other headers/files
 */

/******************************************************************************/
/*                                                                      USAGE */
/******************************************************************************/

/**
 * <Describe how to use this program.>
 */

/******************************************************************************/
/*                                                                      NOTES */
/******************************************************************************/

/**
 *  - <Notes go here.>
 *  - <TODO: Example 'todo'.>
 *  - <FIXME: Example 'fixme'.>
 */

/******************************************************************************/
/*                                                       MODIFICATION HISTORY */
/******************************************************************************/

/**
 *  - <All modification dates go here>
 */

/******************************************************************************/
/*                                                                 REFERENCES */
/******************************************************************************/

/**
 *  - <Any references go here.>
 */

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
/*                                                                    LICENSE */
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
