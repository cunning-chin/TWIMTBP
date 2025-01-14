#include <stdio.h>
#include <stdlib.h>

//Struct Node which has data & pointer to next node.
typedef struct Node {
    int data;
    struct Node* next;
} Node;

//Allocate memory to new Node.
//Data is updated.
//Returns pointer to the next Node.
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

//Prints each node value.
void printList(Node* node) {
    struct Node* temp = node;
    do {
        printf("node.data: %d node.next: %p \n", node-> data, node->next);
        node = node->next;
    } while (temp != node);
}

int main() {
    
    //Create 4 Nodes.
    Node* node1 = createNode(3);
    Node* node2 = createNode(5);
    Node* node3 = createNode(13);
    Node* node4 = createNode(2);

    //Link nodes.
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node1;

    printList(node1);

    // Free the memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
