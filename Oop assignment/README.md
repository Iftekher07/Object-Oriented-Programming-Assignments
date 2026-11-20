# ICT 2106 – Object-Oriented Programming Lab
## Assignment: Exploring the Fundamentals of OOP

**Student Name:** Iftekher Islam  
**Student ID:** 25001  
**Assignment Type:** Individual  
**Language:** C++  
**Topics:** Classes, Objects, Access Modifiers, Constructors and Encapsulation

## Assignment Overview
This repository contains the solutions for the OOP lab assignment. The Task answers for the three concepts are written as comments inside the C++ programs. The two exercises are implemented as separate C++ programs.

## Repository Structure
```text
OOP-Fundamentals-Assignment/
├── Concepts/
│   ├── 01_Classes_and_Objects.cpp
│   ├── 02_Access_Modifiers.cpp
│   └── 03_Constructors.cpp
├── Exercises/
│   ├── 01_Student_Information_Management.cpp
│   └── 02_Bank_Account_Management.cpp
├── Report/
│   └── OOP-Fundamentals-Assignment.pdf
└── README.md
```

## Concepts Covered
1. **Classes and Objects:** A class is a blueprint, and an object is an instance of a class.
2. **Access Modifiers:** `public`, `private` and `protected` control access to class members.
3. **Constructors:** Constructors initialize objects when they are created.

## Exercises
- **Exercise 01 – Student Information Management:** Stores and displays information for three students.
- **Exercise 02 – Bank Account Management:** Demonstrates deposits, withdrawals, balance checking and encapsulation.

## How to Compile and Run
Open a terminal in the repository folder. For example:

```bash
g++ Concepts/01_Classes_and_Objects.cpp -o concept1
./concept1

g++ Concepts/02_Access_Modifiers.cpp -o concept2
./concept2

g++ Concepts/03_Constructors.cpp -o concept3
./concept3

g++ Exercises/01_Student_Information_Management.cpp -o exercise1
./exercise1

g++ Exercises/02_Bank_Account_Management.cpp -o exercise2
./exercise2
```

You need a C++ compiler such as GCC or MinGW to run the programs.

## Learning Outcomes
After completing this assignment, I practiced creating classes and objects, using access modifiers, writing constructors, and applying encapsulation in simple C++ programs.

---
**Note:** In `02_Access_Modifiers.cpp`, the direct private-member access line is kept commented out so that the program can compile. Uncomment it to observe the expected compilation error.
