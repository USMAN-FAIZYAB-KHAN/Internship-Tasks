# Internship-Tasks

## Task 1: Simple Calculator
- Build a Calculator in C++
- Compile/run using g++

## Task 2: Pointers and Dynamic Memory
- Store and display the value and address of an integer variable.
- Create a pointer to pointer and display all levels of indirection.
- Dynamically allocate an array of integers (size entered by user).
- Fill the array with user input using pointer arithmetic.
- Display the array elements and their memory addresses.
- Free the allocated memory using `delete[]`.

## Task 3: Bank Management System (OOP)
- Implement a small program that demonstrates all major OOP concepts.

### Requirements
1. **Create a base class Account**
    * Data members: `accountNumber`, `balance`
    * Functions: `deposit()`, `withdraw()`, `displayBalance()`
2. **Encapsulation**
    * Make data members private.
    * Access them via public functions.
3. **Inheritance**
    * Create derived classes: `SavingsAccount` and `CurrentAccount`.
    * Each has its own version of `withdraw()` (e.g., apply limits or charges).
4. **Polymorphism**
    * Use a `virtual void withdraw()` in the base class.
    * Override it in derived classes.
5. **Abstraction**
    * Use a pointer of type `Account*` to refer to derived objects.
6. **Object Creation**
    * Create multiple account objects and use them to deposit, withdraw, and display balances.
