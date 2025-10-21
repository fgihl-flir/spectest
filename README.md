# spectest

A simple Zephyr RTOS application with a hello world shell command.

## Description

This is a freestanding Zephyr application that demonstrates:
- Basic Zephyr application setup
- Shell integration
- A custom `hello` command that responds with "world"

## Requirements

- Zephyr SDK installed
- West build tool
- CMake 3.20.0 or higher

## Building

To build the application for a specific board (e.g., qemu_x86):

```bash
west build -b qemu_x86
```

Or for native_posix:

```bash
west build -b native_posix
```

## Running

After building, run the application:

For QEMU:
```bash
west build -t run
```

For native_posix:
```bash
./build/zephyr/zephyr.exe
```

## Using the Shell

Once the application is running, you'll see a shell prompt. Type:

```
hello
```

The application will respond with:
```
world
```

## Project Structure

- `CMakeLists.txt` - Build configuration
- `prj.conf` - Zephyr project configuration (enables shell)
- `src/main.c` - Main application with shell command implementation