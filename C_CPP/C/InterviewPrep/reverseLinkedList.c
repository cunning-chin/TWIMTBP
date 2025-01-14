#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* createNode (int nodeData) {

  //Allocate mem to new Node.
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  new_node->data = nodeData;
  new_node->next = NULL;
  return new_node;

}

struct Node* reverseList(struct Node* head) {

  //Three pointers: curr, prev, next
  struct Node *curr=head, *prev=NULL, *next;

  //1 -> 2 -> 3 -> 4
  while (curr != NULL){
    next = curr->next;
    curr->next = prev;

    prev = curr;
    curr = next;
  }
  return prev;
}

void printList(struct Node* node){
  while(node != NULL) {
    printf("%0x\n", node->data);
    node = node->next;
  }
}

int main() {

  struct Node* head = createNode(0xAA);
  head->next = createNode(0xBB);
  head->next->next = createNode(0xCC);
  head->next->next->next = createNode(0xDD);
  head->next->next->next->next = createNode(0xEE);

  printf("Given List:\n");
  printList(head);

  head = reverseList(head);
  printf("Reversed List:\n");
  printList(head);

  return 0;
}
