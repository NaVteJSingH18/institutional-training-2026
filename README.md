# Summer Training Program Notes

This repository contains organized notes, exercises, and assignments from the Summer Training Program in C and C++ programming.

---

## 📅 Course Outline & Notes

### [Day 01: C Basics, Loops & Scope](day_01)
Introduction to C programming syntax, execution flow control, loops, and variable scopes.
- [hello_world.c](day_01/hello_world.c) - The classic first C program printing "Hello World".
- [for_loop_basics.c](day_01/for_loop_basics.c) - Demonstration of a simple `for` loop counting from 0 to 10.
- [continue_statement.c](day_01/continue_statement.c) - Using the `continue` keyword to skip specific iterations in loops.
- [goto_loop.c](day_01/goto_loop.c) - Using `goto` to create iterative jumps and loops.
- [variable_shadowing.c](day_01/variable_shadowing.c) - Illustrating block-level scope variable shadowing.

### [Day 02: Datatypes & Functions](day_02)
Basics of variable types, functions, declarations, and calling conventions.
- [data_types.c](day_02/data_types.c) - Reviewing sizes and properties of standard data types.
- [functions.c](day_02/functions.c) - Creating and using functions with parameter passing.

### [Day 03: Storage Classes & Linkage](day_03)
Understanding C storage classes (`extern`, `static`, `register`, `auto`) and memory allocation visibility.
- [external.c](day_03/external.c) - Using the `extern` keyword to reference variables and functions from another translation unit.
- [external_helper.c](day_03/external_helper.c) - Helper file defining variables and functions for linkage testing.
- [register.c](day_03/register.c) - Working with `register` variables for fast CPU cache storage.
- [static.c](day_03/static.c) - Preserving variables between function calls using `static`.
- [string_basics.c](day_03/string_basics.c) - Introduction to char arrays and string declarations.
- [undefined_behavior.c](day_03/undefined_behavior.c) - Safe handling of constructs that can lead to undefined compiler behavior.

### [Day 04: Conditions & Control Decisions](day_04)
Working with conditional statement execution and switches.
- [calculator.c](day_04/calculator.c) - A simple interactive calculator using `switch-case` statements.
- [conditional.c](day_04/conditional.c) - Branching control logic with `if-else` blocks.
- [vowel_consonant_check.c](day_04/vowel_consonant_check.c) - Classifying alphanumeric entries into vowels or consonants.

### [Day 05: Loops, Jumps, and Nested Patterns](day_05)
Deep dive into algorithms, nested loop patterns, and iterative vs recursive flow.
- [print_alphabets.c](day_05/print_alphabets.c) - Printing A-Z using character conversions in a loop.
- [print_even_numbers.c](day_05/print_even_numbers.c) - Modulo-based check to output even numbers.
- [fibonacci_goto.c](day_05/fibonacci_goto.c) - Generating Fibonacci terms using `goto` jumps.
- [fibonacci_iterative.c](day_05/fibonacci_iterative.c) - Traditional iterative calculation of the Fibonacci series.
- [fibonacci_recursive.c](day_05/fibonacci_recursive.c) - Classic recursive formulation for Fibonacci terms.
- [goto.c](day_05/goto.c) / [goto_end.c](day_05/goto_end.c) - Advanced jump sequences and cleanup behaviors.
- **Star & Number Patterns**:
  - [pattern_1.c](day_05/pattern_1.c) / [pattern_2.c](day_05/pattern_2.c) / [pattern_3.c](day_05/pattern_3.c)
  - [hollow_pattern_1.c](day_05/hollow_pattern_1.c) / [hollow_pattern_2.c](day_05/hollow_pattern_2.c) / [hollow_pattern_3.c](day_05/hollow_pattern_3.c)
- [ternary_operator.c](day_05/ternary_operator.c) - Utilizing inline conditional expressions.

### [Day 06: Mathematics & Loop Applications](day_06)
- [odd_numbers_descending.c](day_06/odd_numbers_descending.c) - Counting down odd values.
- [number_pyramid.c](day_06/number_pyramid.c) - Formatting a numeric symmetrical pyramid pattern.
- [quadratic_roots.c](day_06/quadratic_roots.c) - Computing the roots of a quadratic equation.

### [Day 07: Conversion Algorithms](day_07)
Inter-conversion logic for numbers.
- [binary_to_decimal.c](day_07/binary_to_decimal.c) - Parsing binaries into integers.
- [decimal_to_binary.c](day_07/decimal_to_binary.c) - Converting base-10 decimals into base-2 structures.
- [decimal_to_roman.c](day_07/decimal_to_roman.c) - Encoding numerals into Roman characters.
- [roman_to_decimal.c](day_07/roman_to_decimal.c) - Decoding Roman representations.

### [Day 08: Arrays & String Operations](day_08)
Static collections and handling strings manually without or with standard libraries.
- [array_2d.c](day_08/array_2d.c) - Accessing and managing two-dimensional tables.
- [armstrong_number.c](day_08/armstrong_number.c) - Math checks for Narcissistic/Armstrong numbers.
- [fgets.c](day_08/fgets.c) - Safely scanning input buffer streams.
- **String Libraries (Custom Implementations/Explanations)**:
  - [string_concatenate.c](day_08/string_concatenate.c)
  - [string_compare.c](day_08/string_compare.c)
  - [string_copy.c](day_08/string_copy.c)
  - [string_length.c](day_08/string_length.c)

### [Day 09: Pointers & Parameters](day_09)
Manipulating addresses and reference semantics.
- [swap_pointers.c](day_09/swap_pointers.c) - Swapping variables using call-by-reference.
- [hcf_iterative.c](day_09/hcf_iterative.c) - Calculating Highest Common Factor (GCD) using a loop.
- [hcf_recursive.c](day_09/hcf_recursive.c) - Euclidean HCF algorithm via recursion.

### [Day 10: Const-Correctness & Array Analysis](day_10)
- [pointer_constness.c](day_10/pointer_constness.c) - Differentiating constant pointers vs pointers to constants.
- [element_frequency.c](day_10/element_frequency.c) - Counting duplicate element counts in a 1D array.

### [Day 11: C++ Basics & Constructors](day_11_cpp_basics)
Migrating to C++, classes, object instantiations, copy semantics, and memory profiling.
- [class_student_details.cpp](day_11_cpp_basics/class_student_details.cpp) - Implementing setters, getters, and data encapsulation.
- [copy_constructor_circle.cpp](day_11_cpp_basics/copy_constructor_circle.cpp) - Copy constructor logic with a `Circle` class.
- [copy_constructor_rectangle.cpp](day_11_cpp_basics/copy_constructor_rectangle.cpp) - Member assignment and verification with a `Rectangle` copy constructor.
- [class_size_student.cpp](day_11_cpp_basics/class_size_student.cpp) - Checking `sizeof(student)` objects inside memory alignment.

### [Day 12: C++ OOP & Overloading](day_12_cpp_oop)
- [bank_account.cpp](day_12_cpp_oop/bank_account.cpp) - Standard banking transactions using objects.
- [complex_operator_overloading.cpp](day_12_cpp_oop/complex_operator_overloading.cpp) - Basic structures for custom operator overloads (complex numbers addition).
- [function_overloading_inheritance.cpp](day_12_cpp_oop/function_overloading_inheritance.cpp) - Demonstrating method overloading and member function hiding in derived classes.

---

## 📝 Practice Assignments

### [Assignments Folder](assignment)

- **Assignment 1**:
  - [greater_of_two.c](assignment/greater_of_two.c) - Finds the maximum between two user inputs.
  - [greatest_of_three.c](assignment/greatest_of_three.c) - Logic for finding the largest of three numbers.
- **Assignment 2**:
  - [compound_interest.c](assignment/assignment2/compound_interest.c) - Computes Compound Interest (CI) using principle, rate, and time.
  - [subject_marks_stats.c](assignment/assignment2/subject_marks_stats.c) - Input subject marks, outputting aggregate statistics (total, average, percentage).
  - [equilateral_triangle_area.c](assignment/assignment2/equilateral_triangle_area.c) - Calculates geometric area based on side length input.
  - [reverse_characters.c](assignment/assignment2/reverse_characters.c) - Reverses strings and custom character sequences.