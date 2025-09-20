# NASM DevKit Guide

This document explains how to start your own project with the DevKit.

## 0. Requirements

* CMake version 3.20 or newer
* NASM version 2.15 or newer
* A C/C++ toolchain
  * Windows: Visual Studio 2019/2022 (Build Tools or full VS), or LLVM/MinGW with Ninja
  * Linux / macOS: gcc or clang, with make or ninja
* Git (optional, but recommended)

All tools should be installed and accessible from your shell (`PATH`).

## 1. Create a project

You can begin in three ways:

* **Use the GitHub template**: Click **"Use this template"** on the DevKit repo and create a new project directly.

* **Download a ZIP**: Download source code & extract anywhere.

* **Clone and detach**:

  ```bash
  git clone https://github.com/anar-bastanov/nasm-devkit.git MyApp
  cd MyApp
  rm -rf .git
  # Do not run `git init` yet
  ```

## 2. Set project name

Run the bootstrap script to configure project and executable names:

* **Windows (PowerShell)**

  ```powershell
  ./tools/bootstrap.ps1 -Project MyApp
  ./tools/bootstrap.ps1 -Project MyApp -Executable myapp-cli
  ```

* **Linux / macOS**

  ```bash
  ./tools/bootstrap.sh MyApp
  ./tools/bootstrap.sh MyApp myapp-cli  # custom executable name
  ```

This updates the placeholders in `CMakeLists.txt`:

```cmake
set(PROJECT_NAME_VAR "MyApp")
set(EXECUTABLE_NAME_VAR "myapp-cli")
```

## 3. Build

```bash
cmake -S . -B build
cmake --build build --config Debug
```

**Build types**

* **Debug** (default): debug symbols, no optimizations
* **Release**: full optimizations, stripped binary
* **RelWithDebInfo**: optimized but keeps debug info
* **MinSizeRel**: optimized for size

Binaries are placed in `build/bin/<CONFIG>/`, for example:

```bash
./build/bin/Debug/myapp-cli
```

## 4. Initialize Git

> Run this **after** your first build; else, you will commit all library source files, not just the ones you use.

```bash
git init
git add .
git commit -m "Bootstrap project."
```

## 5. Add your code

In `/src/` you will find two starting files:

* **`main.nasm`:** the reserved runtime entrypoint. It sets up the environment, collects arguments, and transfers control to your program.

  * This file must remain named `main.nasm`.
  * You normally do not edit it unless you are customizing the runtime itself.

* **`program.nasm`:** your program’s entrypoint. This is where your own code begins.

  * You may rename or expand this file as your project grows.
  * Keep your headers and symbols consistent if you rename it.

Headers can be placed anywhere, but by default live in `src/include/`.

## 6. Manage dependencies

Declare dependencies in `src/dependencies.list`:

```
anrc
argparse
styling
```

* Each library lives under `/lib/<name>/`.
* Libraries may declare their own `dependencies.list`.
* You can remove or add libraries freely.

> [!WARNING]
> **Libraries are incomplete.**
>
> The libraries under `lib/` are a work in progress and currently lack documentation, expect changes in future updates.

## 7. Next steps

* Follow [CALLING\_CONVENTION.md](CALLING_CONVENTION.md) for the `__anrc64` spec.
* Keep `/devkit/` and the root `NOTICE` file intact.
* Add your own project README, LICENSE, and .gitignore at the repository root.
