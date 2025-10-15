# ezlib

**ezlib** is a lightweight C++ library providing basic utility types and helpers, designed to simplify common programming tasks. Its main focus is on providing easy-to-use data types like `string_t`, a base string implementation, with a clean and minimal interface.  

> ⚠️ **Note:** This library is still under development. New features are actively being added.

---

## Features

### `ez::string_t`
A base string class with dynamic memory management.  
- Stores and manages a dynamically allocated C-style string.
- Provides read and write access to the string value.
- Automatically manages memory cleanup.

#### Basic Usage:
```cpp
#include "ezlib.hh"

int main() {
    char text[] = "Hello, ezlib!";
    ez::string_t myString(text);

    // Read current value
    const char* current = myString.rdvalue();

    // Update the string
    char newText[] = "New string content";
    char* updated = myString.value(newText);

    return 0;
}
````

### Utilities

The library provides basic string helpers in the `ez::helper` namespace:

* `strlen(const char*)` — compute string length.
* `strwrite(const char*, char*)` — write a string into a target pointer.
* `strcpy(const char*, char*, int max_iterations)` — copy string with optional max length.

### Constants and Flags

* `ez::backend::STRING` — internal string type identifier.
* `ez::flag::MAX_ITERATION_AUTO` — special flag for automatic iteration limits.
* `ez::flag::NOSTRING` — empty string constant.

---

## Structure

```
ezlib/
├── ezlib.hh          # Main library header
├── eztypes/
│   ├── ezstring.hh   # String type header
│   └── ezstring.cc   # String type implementation
├── libo/
│   └── ezstring.o    # Compiled object file
├── makelib/
│   └── recipe        # Build recipe for the library
├── test/
│   ├── recipe        # Test build recipe
│   └── test.cc       # Example tests
├── LICENSE           # MIT License
└── README.md         # This file
```
```
---

## Building

You can build the library using the provided `makelib/recipe` and test examples with `test/recipe`.
The library does not yet include prebuilt binaries; object files can be linked directly into your project.

---

## License

**ezlib** is licensed under the MIT License. See [LICENSE](./LICENSE) for more information.

---

## Contributing

This project is under active development. Contributions, feature requests, and bug reports are welcome.

* New features are being added regularly.
* Please ensure proper memory management when using `string_t`.
* Tests are encouraged when modifying or adding functionality.

---

## Contact

Created by **ghgltggamer**, 2025.
For questions or contributions, reach out through the project repository.