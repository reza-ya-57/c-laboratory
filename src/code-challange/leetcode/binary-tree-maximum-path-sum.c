#include <stdio.h>
#include <stdlib.h>

#include "linked-list.h"


#define NODE_COUNT 7

// Definition for a binary tree node.
typedef struct treeNode {
    int val;
    struct treeNode* left;
    struct treeNode* right;
} TreeNode;


// functions definition
TreeNode* createTree(int* nodes , int nodes_size);
int maxPathSum(TreeNode* root);
void printNode(TreeNode* node);

int main() {
    // int nodes[NODE_COUNT] = { -10 , 9 , 20 , 0 , 0 , 15 , 7 };
    IntLinkedListNode* linkedList = createLinkedList(100);
    
    addToIntLinkedListNode(linkedList , 4);
    addToIntLinkedListNode(linkedList , 6);
    addToIntLinkedListNode(linkedList , 8);
    addToIntLinkedListNode(linkedList , 10);
    addToIntLinkedListNode(linkedList , 12);
    int getIndex = getFromIndexIntLinkedListNode(linkedList , 6);
    printf("getIndex: %d\n" , getIndex);

    printIntLinkedListNode(linkedList);

    
    return 0;
}


int maxPathSum(TreeNode* root) {
    return 0;
}

// example: int nodes[] = [-10,9,20,0,0,15,7]
 TreeNode* createTree(int* nodes , int nodes_size) {
    TreeNode* root = malloc(sizeof(TreeNode));
    return root;
}


void printNode(TreeNode* node) {
    // printf("root: {\n\t val: %d\n\t left->val: %d\n\t right->val: %d   \n}" , node->val , node->left->val , node->right->val);
    printf("  %d \n /  \\ \n%d    %d" , node->val , node->left->val , node->right->val);
}