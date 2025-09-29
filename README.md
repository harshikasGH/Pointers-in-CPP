# Pointers in C++

## AIM
To understand and implement pointers in C++, exploring their behavior, arithmetic, and applications in memory manipulation and data access.

---

## THEORY

### What Are Pointers?
A pointer is a variable that stores the memory address of another variable. It allows indirect access and manipulation of data, enabling dynamic memory management and efficient data handling.

- Declared using `*` (e.g., `int *ptr`)
- Initialized with address using `&` (e.g., `ptr = &a`)
- Dereferenced using `*ptr` to access the value

### Pointer Arithmetic
Pointers can be incremented or decremented to traverse memory, especially useful with arrays.

- `ptr++` moves to the next memory block based on data type size
- Subtracting pointers gives the number of elements between them

---

## Common Operations

| Operation           | Description |
|---------------------|-------------|
| Dereferencing       | Accessing the value at the pointed address |
| Address Access      | Using `&` to get the memory location |
| Pointer Arithmetic  | Incrementing or comparing pointer positions |
| Swapping Values     | Using pointers to exchange data in-place |
| Array Traversal     | Iterating using pointers instead of indices |

---

## Best Practices and Optimization Tips
Always initialize pointers before use to avoid undefined behavior.  
Use pointer arithmetic carefully, respecting memory boundaries.  
Prefer smart pointers (`std::unique_ptr`, `std::shared_ptr`) in modern C++ for safety.  
Avoid dangling pointers—ensure memory is valid before access.  
Use pointers for efficient in-place operations like swapping or reversing.  

---

## Algorithms

### Reverse an Array Using Pointers
1. Declare array `arr[] = {1, 2, 3, 4, 5}`
2. Set `start = arr`, `end = arr + size - 1`
3. While `start < end`:
   - Swap `*start` and `*end`
   - Increment `start`, decrement `end`
4. Print reversed array

---

### Reverse a String Using Pointers
1. Input string using `cin.getline()`
2. Calculate length using `strlen()`
3. Set pointer to last character
4. While pointer ≥ start of string:
   - Print `*ptr`
   - Decrement pointer

---

### Pointer Arithmetic Across Data Types
1. Declare variables of types `int`, `float`, `char`, `bool`
2. Assign pointers to each
3. Print pointer before and after increment
4. Observe memory jump based on data type size

---

### Value Difference vs Pointer Distance
1. Declare array `arr[] = {10, 20, 30, 40, 50}`
2. Set `ptr1 = &arr[4]`, `ptr2 = &arr[1]`
3. Calculate `*ptr1 - *ptr2` → value difference
4. Calculate `ptr1 - ptr2` → index difference
5. Print both

---

## CONCLUSION
Pointers in C++ allow direct memory manipulation, enabling efficient and flexible programming. Understanding their basics—dereferencing, arithmetic, and safe usage—forms a foundation for advanced concepts like dynamic allocation, data structures, and system-level coding.
