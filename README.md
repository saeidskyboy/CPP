# C++ Practices & DevOps Basics

This repository contains small, basic C++ programs written for practice. The goal is to learn fundamental C++ concepts and gain familiarity with manual compilation and execution using shell scripts, which is a foundational skill relevant to DevOps workflows.

The programs are intentionally simple, focusing on core language features, input/output, and basic algorithms.

## Repository Contents

-   `compile.sh`: A simple Bash script to compile and run one of the C++ source files using `clang++`.
-   `main.cpp`: A C++ program that calculates sales tax and net income based on a fixed sales amount.
-   `math.cpp`: A C++ program that calculates the area of a circle, prompting the user for the radius.
-   `reading_from_cli.cpp`: A C++ program that converts a temperature from Fahrenheit to Celsius, prompting the user for the temperature in Fahrenheit.

## Prerequisites

To build and run the code in this repository, you will need:

1.  A C++ compiler installed (like `clang++` or `g++`). The `compile.sh` script is configured to use `clang++` with the C++20 standard.
2.  A Unix-like terminal environment (Linux, macOS, WSL on Windows, etc.).

## How to Build and Run

The `compile.sh` script simplifies the build and run process for one of the C++ files at a time.

1.  **Clone the Repository:**
    If you haven't already, clone this repository to your local machine:
    ```bash
    git clone https://github.com/saeidskyboy/CPP.git
    cd CCP
    ```

2.  **Make the Script Executable:**
    Ensure the `compile.sh` script has execute permissions:
    ```bash
    chmod +x compile.sh
    ```

3.  **Choose Which File to Compile:**
    The `compile.sh` script is currently set up to compile `math.cpp` (as seen in your provided script). To compile a different file (like `main.cpp` or `reading_from_cli.cpp`), you need to edit the `compile.sh` script and change the filename in the `clang++` line and potentially the `./` execution line.

    For example, to compile `main.cpp`, the `compile.sh` should look like this:
    ```bash
    #!/bin/bash
    clang++ -std=c++20 main.cpp -o main
    ./main
    ```
    To compile `reading_from_cli.cpp`, it should look like this:
    ```bash
    #!/bin/bash
    clang++ -std=c++20 reading_from_cli.cpp -o main
    ./main
    ```
    (Note: Each script will overwrite the previous `main` executable).

4.  **Run the Script:**
    Execute the `compile.sh` script from your terminal:
    ```bash
    ./compile.sh
    ```

    -   If compilation is successful, the script will create an executable named `main` and then run it.
    -   Programs that require user input (`math.cpp`, `reading_from_cli.cpp`) will pause after running `./main` and wait for you to type in the required values.
    -   If compilation fails, `clang++` will report errors in the terminal.

## Learning Focus

This repository serves as a practical exercise in:

-   Writing basic C++ programs.
-   Using a C++ compiler (`clang++`).
-   Understanding the manual compilation process (`.cpp` -> executable).
-   Creating simple shell scripts (`.sh`) to automate build and execution steps.
-   Exploring command-line input/output in C++.

It demonstrates fundamental steps that are abstracted away by more complex build systems but are essential to understand for debugging, scripting, and more advanced build automation in a DevOps context.

## License

[Optional: Choose a license, e.g., MIT License, or state no license]
[Example for MIT License: See the LICENSE file for details]
[Example for no explicit license: All Rights Reserved]

---

Feel free to explore the code and the build script!