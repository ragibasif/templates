/*
 * File: main.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * Entry point to the program.
 *
 */

#include "../libs/internal_debug.h"

int main(int argc, char **argv) {

    dbg("hello");
    int *a = malloc(1);
    free(a);
    a = NULL;

    forge_run(); // internal_debug.h

    return 0;
}
