#include<stdio.h>
#include<stdlib.h>
// void push(struct Node** head_ref, int new_data)

// {
//     // allocate new node
//     struct Node*  new_node=(struct Node*) malloc(sizeof(struct Node));

//     // Put data in the list
//     new_node->data = new_node;

//     // Make new node as head
//     new_node->next = (*head_ref);

//     // move the head node to point the new node 
//     (*head_ref) = new_node; 


// }
void push(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    /* 2. put in the data  */
    new_node->data  = new_data;
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
  
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;
}