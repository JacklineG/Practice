#include <stdio.h>
#include<stdlib.h>
typedef struct node *nodePtr;

struct node {
int val;
nodePtr next;
};

typedef struct node node;

int main (int argc, const char * argv[]) {
// we need to access the list by setting a pointer to the first element
nodePtr first = NULL;

// curntly the list doenst contain any element add element to the list
first->data = 61;

first->next  = malloc (sizeof (node));
first->next->next = NULL;
first->data = 62;
print("Hello World!\n");

return 0;
