<div align="center">

# 🦄 DEFAULT

</div>

<details open="open">
<summary>Table of Contents</summary>

- [🦄 DEFAULT](#-DEFAULT)
  - [🧠 About](#-about)
  - [📁 Directory Structure](#-directory-structure)
  - [🛠️ Usage](#️-usage)
    - [💻 Installation](#-installation)
    - [🔧 Build the project](#-build-the-project)
    - [🧹 Clean build files](#-clean-build-files)
    - [🏃 Run the executable](#-run-the-executable)
  - [🧪 Running Tests](#-running-tests)
  - [📄 Dependencies](#-dependencies)
  - [📚 Documentation](#-documentation)
  - [🙌 Contributing](#-contributing)
  - [🪪 License](#-license)
  - [📋 Acknowledgements](#-acknowledgements)

</details>

## 🧠 About

{{DESCRIPTION}}

It's written in standard C (C99) and uses GNU Make for building. The goal of this project is to [insert goal or motivation, e.g., build a simple CLI tool, implement data structures from scratch, etc.].

## 📁 Directory Structure

```bash
DEFAULT/
├── src/            # Source files
├── include/        # Header files
├── build/          # Build artifacts (created after make)
├── tests/          # Test files
├── Makefile        # Build system
└── README.md       # This file
```

## 🛠️ Usage

### 💻 Installation

Clone the repository.

```bash
git clone git@github.com:ragibasif/DEFAULT.git
```

Make sure you have `gcc` and `make` installed.

### 🔧 Build the project

```bash
make
```

### 🏃 Run the executable

```bash
./build/DEFAULT
```

### 🧹 Clean build files

```bash
make clean
```

> The executable will be built inside the `build/` directory.

## 🧪 Running Tests

To build and run test files:

```bash
make test
./build/test_example
```

Or you can manually compile and run test files like:

```bash
gcc -Iinclude tests/test_example.c src/DEFAULT.c -o test_example
./test_example
```

## 📄 Dependencies

This project uses:

- C99 Standard
- GNU Make
- (Optional) Any libraries you're using (e.g., `glib`, `SDL2`, etc.)

## 📚 Documentation

- All headers are documented in the `include/` folder.
- Inline comments are included in the source files.
- [Optional] Use `doxygen` if you plan to generate documentation.

## 🙌 Contributing

1. Fork the repository
2. Create a new branch (`git checkout -b feature/feature-name`)
3. Make your changes and commit (`git commit -am 'Add new feature'`)
4. Push to your fork (`git push origin feature/feature-name`)
5. Open a pull request

## 🪪 License

This project is licensed under the **MIT license**. See the [LICENSE](LICENSE) file for details.

## 📑 Acknowledgements
