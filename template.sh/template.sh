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

set -Ceuvx
# set -n

RED='\x1b[31m'
GREEN='\x1b[32m'
YELLOW='\x1b[33m'
BLUE='\x1b[34m'
MAGENTA='\x1b[35m'
CYAN='\x1b[36m'
DEFAULT='\x1b[39m'
BOLD='\x1b[1m'
RESET='\x1b[0m' # No Color

FILE="${BOLD}${MAGENTA}$(eval basename "$0")${RESET}"

echo "${FILE}"
echo "${BLUE}${BOLD}[INFO]${RESET} ${BLUE}Starting script execution.${RESET}"

echo "Hello, World!"

echo "${RED}${BOLD}[ERROR]${RESET} ${RED}Critical failure: File not found.${RESET}"
echo "${RED}${BOLD}[ERROR]${RESET} ${RED}Invalid input. Aborting.${RESET}"
echo "${RED}${BOLD}[ERROR]${RESET} ${RED}Command failed with exit code $?.${RESET}"

echo "${YELLOW}${BOLD}[WARNING]${RESET} ${YELLOW}This operation may take a long time.${RESET}"
echo "${YELLOW}${BOLD}[WARNING]${RESET} ${YELLOW}Running as root is not recommended.${RESET}"
echo "${YELLOW}${BOLD}[WARNING]${RESET} ${YELLOW}Directory already exists - skipping.${RESET}"

echo "${GREEN}${BOLD}[SUCCESS]${RESET} ${GREEN}Operation completed successfully.${RESET}"
echo "${GREEN}${BOLD}[SUCCESS]${RESET} ${GREEN}File created: ${FILE}${RESET}"
echo "${GREEN}${BOLD}[SUCCESS]${RESET} ${GREEN}All tests passed!${RESET}"

echo "${BLUE}${BOLD}[INFO]${RESET} ${BLUE}Processing file: ${FILE}${RESET}"
echo "${CYAN}${BOLD}[DEBUG]${RESET} ${CYAN}Variable value: ${SOME_VAR}${RESET}"

if [ ! -f "/nonexistent/file" ]; then
    echo "${RED}${BOLD}[ERROR]${RESET} ${RED}File not found!${RESET}"
fi

echo "${YELLOW}${BOLD}[WARNING]${RESET} ${YELLOW}This is a sample warning.${RESET}"

echo "${GREEN}${BOLD}[SUCCESS]${RESET} ${GREEN}Script completed successfully!${RESET}"

exit 0
