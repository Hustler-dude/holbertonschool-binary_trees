# Binary Trees

Implementation of binary tree operations in C.

## Data Structure

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Files

| File | Description |
|------|-------------|
| `binary_trees.h` | Header file with struct definitions and prototypes |
| `0-binary_tree_node.c` | Create a binary tree node |
