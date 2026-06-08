


This is a macOS-compatible version of the original library from ProgrammingAdvices.

Why this version exists

The original library relies on Microsoft’s proprietary feature:

__declspec(property)

which is supported by Microsoft Visual Studio but is not supported by Apple Clang or GCC. Because of this, the original code cannot be compiled on macOS without modifications.

Changes Made

* Removed all usages of __declspec(property).
* Replaced Visual Studio–specific constructs with Standard C++.
* Preserved the original function names and behavior as much as possible.
* Fixed several issues discovered during the migration process.
* Tested with Apple Clang on macOS.

Compatibility

Compiler	Supported
Apple Clang (macOS)	✅
GCC (Linux)	✅
Clang	✅
Microsoft Visual Studio	⚠️ Not tested

Notes

This project was created to allow students using macOS to follow the ProgrammingAdvices course materials without requiring Visual Studio or Windows-specific language extensions.

The core functionality and API of the original library have been kept intact whenever possible.

Original Author

Original library and course materials by Mohammed Abu-Hadhoud (ProgrammingAdvices).

This repository contains a portability adaptation for Standard C++ environments.

⸻

If your version actually works only on macOS and you don’t want to claim Linux support, change the Compatibility section to:
