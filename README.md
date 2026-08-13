# DSA in C

A C library implementing fundamental data structures from scratch.

## Goals

- Learn pointers and dynamic memory
- Implement data structures manually
- Understand algorithm complexity
- Write clean, modular C code
- Build reusable implementations

## Data Structures

- [ ] Dynamic Array
- [ ] Singly Linked List
- [ ] Doubly Linked List
- [ ] Circular Linked List
- [x] Stack
- [x] Queue
- [x] Circular Queue
- [ ] Binary Search Tree
- [ ] AVL Tree
- [ ] Heap
- [ ] Hash Table
- [ ] Graph
- [ ] Trie


---

### ✅ Stack (Array Implementation)

#### Operations

- Initialize
- Push
- Pop
- Peek
- Display
- Size
- Clear
- isEmpty
- isFull

#### Time Complexity

| Operation | Complexity |
|----------|------------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| Size | O(1) |
| Display | O(n) |
| isEmpty | O(1) |
| isFull | O(1) |
| Clear | O(1) |

#### Features

- Fixed-size array implementation
- Modular implementation using header and source files
- Dynamic memory allocation
- Interactive demo program
- Handles stack overflow and underflow

#### Concepts Learned

- Header files and source file organization
- Header guards
- Passing structures by pointer
- Dynamic memory allocation
- Stack overflow and underflow
- Time complexity analysis


---

### ✅ Queue (Linear Array Implementation)

#### Operations

- Initialize
- Enqueue
- Dequeue
- Peek
- Display
- Size
- Clear
- isEmpty
- isFull

#### Time Complexity

| Operation | Complexity |
|----------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |
| Size | O(1) |
| Display | O(n) |
| isEmpty | O(1) |
| isFull | O(1) |
| Clear | O(1) |

#### Features

- Array-based linear queue implementation
- Dynamic memory allocation
- Modular implementation using header and source files
- Interactive demo program
- Handles queue overflow and underflow

#### Concepts Learned

- FIFO (First In, First Out)
- Front and rear pointers
- Dynamic memory allocation
- Queue overflow and underflow
- Modular C programming
- Time complexity analysis


---

### ✅ Circular Queue

#### Operations

- Initialize
- Enqueue
- Dequeue
- Peek
- Display
- Size
- Clear
- isEmpty
- isFull

#### Time Complexity

| Operation | Complexity |
|----------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |
| Size | O(1) |
| Display | O(n) |
| isEmpty | O(1) |
| isFull | O(1) |
| Clear | O(1) |

#### Features

- Dynamically allocated array
- User-defined queue capacity
- Circular indexing using modulo (`%`)
- Reuses previously occupied array positions
- Handles queue overflow and underflow
- Interactive demo program
- Modular implementation using header and source files

#### Concepts Learned

- Circular data structures
- Modulo arithmetic for circular indexing
- Front and rear pointer management
- Queue wrap-around
- Dynamic memory allocation
- Queue overflow and underflow
- Time complexity analysis