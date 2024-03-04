#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

#include "random-array.h"

#define RANDOM_ARRAY_SIZE 10

struct Node {
    int value;
    struct Node* node;
};


void print_linked_list(struct Node* node) {
    struct Node* index;
    index = node;
    printf("%d" , index->node == NULL);
    while(index->node == NULL) {
        printf("%d\n" , index->value);
        index = index->node;
    }

    printf("%d\n" , index->value);
}


int main() {

   

    struct Node node_1 , node_2 , node_3;
    node_1.value = 10;
    node_1.node = node_2.node;

    node_2.value = 20;
    node_2.node = node_3.node;

    node_2.value = 30;
    node_2.node = NULL;    


    print_linked_list(&node_1);


    return 0;
}