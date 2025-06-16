#!/bin/sh
#
# File: template.sh
# Author: Ragib Asif
# Email: ragib.asif30@myhunter.cuny.edu
# GitHub: https://github.com/ragibasif
# LinkedIn: https://www.linkedin.com/in/ragibasif/
# SPDX-License-Identifier: MIT
# Copyright (c) 2025 Ragib Asif
# Version 1.0.0
#
# Provides a template to build shell scripts.
#

# set -Ceuvx
set -n

RED='\033[0;91m'
GREEN='\033[92m'
YELLOW='\033[93m'
MAGENTA='\033[95m'
BOLD='\033[1m'
RESET='\033[0m' # No Color
FILE="${BOLD}${MAGENTA}$(eval basename "$0")${RESET}"
echo "${FILE}"

echo "Hello, World!"

exit 0
