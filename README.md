<p align="center">
  <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# �� C - Binary Trees

## 📝 Project Description

This project is part of a low-level programming curriculum focused on understanding and implementing **binary trees** in C. You’ll explore tree data structures, how to traverse them, and their advantages over other structures like linked lists. You will also learn the distinctions between various types of binary trees such as **full**, **complete**, **perfect**, and **balanced** trees.

Through this hands-on project, you will build a solid foundation in non-linear data structures that are fundamental in many computer science domains, including search algorithms, sorting, and memory management.

---

## 🎯 Learning Objectives

By the end of this project, you should be able to clearly explain (without using Google):

- What is a **binary tree**
- The difference between a **binary tree** and a **Binary Search Tree (BST)**
- Time complexity benefits of using binary trees vs. linked lists
- Definitions of **depth**, **height**, and **size** of a binary tree
- Various **traversal methods**: pre-order, in-order, post-order, and level-order
- What constitutes a **full**, **complete**, **perfect**, and **balanced** binary tree

---

## 🛠 Project Requirements

- **Allowed editors**: `vi`, `vim`, `emacs`
- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: `gcc` with the flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All source files must **end with a new line**
- A `README.md` file is **mandatory** at the root of the project folder
- Code must follow **Betty style** guidelines, checked using:
  - `betty-style.pl`
  - `betty-doc.pl`
- No use of **global variables**
- Maximum of **5 functions per file**
- You may use the **C standard library**
- All **function prototypes** must be declared in `binary_trees.h`
- Ensure all header files are **include guarded**
- Do **not** push `main.c` test files; they will be ignored during evaluation

---

## 🌳 Data Structures

You must use the following structure for binary tree nodes:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;   /* Binary Search Tree */
typedef struct binary_tree_s avl_t;   /* AVL Tree */
typedef struct binary_tree_s heap_t;  /* Max Binary Heap */
```

 ## 👥 Authors
- [Boubouche1709](https://github.com/Boubouche1709)
