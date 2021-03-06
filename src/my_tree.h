#include "list_implementation/my_list.h"

struct tree_node {
    void *data;
    List children;
};

typedef struct tree_node TreeNode;
typedef TreeNode* Tree;

void initialize_tree(Tree*);

void add_new_leftmost_child(Tree*, TreeNode*, const void*, size_t);
void add_new_rightmost_child(Tree*, TreeNode*, const void*, size_t);
void add_new_child_at_pos(Tree*, TreeNode*, int, const void*, size_t);

void* remove_leftmost_child(Tree*, TreeNode*, size_t);
void* remove_rightmost_child(Tree*, TreeNode*, size_t);
void* remove_child_from_pos(Tree*, TreeNode*, size_t);

void inorder(Tree, size_t, void (*func)(TreeNode*, size_t));
void preorder(Tree, size_t, void (*func)(TreeNode*, size_t));
void postorder(Tree, size_t, void (*func)(TreeNode*, size_t));
