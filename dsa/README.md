# C++ Templates & STL (Standard Template Library) Exercises

This repository is organized to demonstrate C++ template programming and the Standard Template Library (STL) container classes.

## Directory Structure

The files have been structured into the following categories:

```
dsa/
├── templates/
│   ├── class_template_cal.cpp       - Class template implementation of a Calculator (handles division by zero)
│   ├── function_template_add.cpp    - Function template for adding values of different types
│   └── function_template_swap.cpp   - Function template for swapping variables in-place
├── stl_containers/
│   ├── vector.cpp                   - Sorting dynamic array using custom strict weak ordering comparator
│   ├── list.cpp                     - Comparison of std::list (doubly linked) and std::forward_list (singly linked)
│   ├── deque.cpp                    - Double-ended queue demonstration (push/pop front/back, index access)
│   ├── stack.cpp                    - LIFO (Last In First Out) queue container adapter
│   ├── queue.cpp                    - FIFO (First In First Out) queue container adapter
│   ├── set.cpp                      - Sorted set of unique elements with optimized iterator lookup
│   ├── unordered_set.cpp            - Hash-table based unique elements lookup
│   ├── map.cpp                      - Key-value mapping demonstrating insert vs index overwrite behavior
│   └── iterator.cpp                 - Correct usage of iterators and const_iterators without scope shadowing
└── README.md                        - This project documentation guide
```

## How to Compile & Run

To compile any file, open your terminal (PowerShell/Command Prompt) and run:

```powershell
# Example: Compiling the vector file
g++ -std=c++17 -Wall -Wextra stl_containers/vector.cpp -o vector.exe

# Running the compiled file
./vector.exe
```

*Note: Pre-compiled `.exe` binaries are machine-specific and have been cleaned up to maintain a clean codebase.*
