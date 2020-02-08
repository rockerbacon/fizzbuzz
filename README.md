## Introduction

This is an implementation of a solution for the FizzBuzz problem. The FizzBuzz problem consists on outputing numbers within a range while obeying the following rules:
- Output "Fizz" whenever the number is a multiple of 3;
- Output "Buzz" whenever the number is a multiple of 5;
- Output "FizzBuzz" whenever the number is a multiple of both 3 and 5;
- Output the actual number in any other case;

This project uses the Assertions C++ Framework. All documentation on the ideas behind Assertions are available [its wiki](https://github.com/rockerbacon/assertions/wiki). Note: Assertions is developed and tested in an Ubuntu-based Linux distro and is not guaranteed to work in other systems.

## Building and Running
The main file can be built with:

```
./build.sh target src/main/main.cpp
```

The compiled binary will be available in the directory `build/release/bin`

If you just want to run the project use:

```
./run.sh src/main/main.cpp
```

## Running Tests
Tests can be run with the command:

```
./test.sh
```
