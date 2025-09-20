# NASM DevKit

**NASM DevKit** is a cross-platform template and development kit for building NASM projects with modern tooling. It gives you a ready-to-use workspace that just works, from build system to dependencies, libraries, and interop.

## Features

* **Project scaffold**: clean layout with `/src/`, `/lib/`, and build tools.
* **CMake integration**: cross-platform builds with sensible defaults.
* **Dependency system**: automatic resolution for include files.
* **Interop with C/C++**: add C or C++ sources directly, link seamlessly with NASM.
* **Unified calling convention**: `__anrc64` to avoid ABI confusion.
* **Bundled libraries**: starter NASM libraries for common functions.

## Why use it

* Start coding immediately after cloning.
* Skip CMake boilerplate and cross-platform quirks.
* Scale easily with a clean architecture.

## Documentation

* [Project guide](GUIDE.md) — how to clone, bootstrap, and build.
* [Calling convention](CALLING_CONVENTION.md) — the `__anrc64` specification.

## License

The DevKit uses a mixed license model (MIT, LGPL-3.0, CC BY 4.0)
See [devkit/LICENSE.md](LICENSE.md) for details.
