#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# File: main.py
# Author: Ragib Asif
# Email: ragib.asif30@myhunter.cuny.edu
# GitHub: https://github.com/ragibasif
# LinkedIn: https://www.linkedin.com/in/ragibasif/
# SPDX-License-Identifier: MIT
# Copyright (c) 2025 Ragib Asif
# Version 1.0.0
#
# Provides a template to build Python scripts.
#

# Standard Library Imports
import argparse
import logging
import os
import sys

# Third-Party Imports
# import numpy as np
# import pandas as pd

# Constants
DEFAULT_VALUE = "default"

# Configure logging
logging.basicConfig(
    level=logging.INFO,
    format="%(asctime)s - %(levelname)s - %(message)s",
    handlers=[logging.FileHandler("script.log"), logging.StreamHandler()],
)
logger = logging.getLogger(__name__)


def main(args: argparse.Namespace) -> int:
    """
    Main function that runs the script logic.

    Args:
        args: Command line arguments parsed by argparse.

    Returns:
        int: Exit code (0 for success, non-zero for errors)
    """
    try:
        logger.info("Starting script execution")

        # Your script logic here
        logger.info(f"Received argument: {args.input_value}")

        logger.info("Script completed successfully")
        return 0

    except Exception as e:
        logger.error(f"An error occurred: {str(e)}", exc_info=True)
        return 1


def parse_arguments() -> argparse.Namespace:
    """
    Parse command line arguments.

    Returns:
        argparse.Namespace: Parsed command line arguments
    """
    parser = argparse.ArgumentParser(description="Description of what the script does.")

    parser.add_argument(
        "-i",
        "--input",
        dest="input_value",
        type=str,
        default=DEFAULT_VALUE,
        help="Input value for the script",
    )

    parser.add_argument(
        "-v", "--verbose", action="store_true", help="Enable verbose logging"
    )

    return parser.parse_args()


if __name__ == "__main__":
    args = parse_arguments()

    if args.verbose:
        logger.setLevel(logging.DEBUG)

    sys.exit(main(args))
