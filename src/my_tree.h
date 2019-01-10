#include "list_implementation/my_list.h"

struct tree_node {
    void *data;
    List children;
};

typedef struct tree_node TreeNode;
typedef TreeNode* Tree;

void initialize_tree(Tree*);

void add_new_node(TreeNode*, const void*, size_t);
void* remove_node(TreeNode*, size_t);

void inorder(Tree, size_t, void (*func)(TreeNode*, size_t));
void preorder(Tree, size_t, void (*func)(TreeNode*, size_t));
void postorder(Tree, size_t, void (*func)(TreeNode*, size_t));
