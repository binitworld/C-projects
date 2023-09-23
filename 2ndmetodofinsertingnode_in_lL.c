#include<stdio.h>
#include<stdlib.h>

void insertafter(struct node* prev_node, int new_data)
{
    /*checking condition prev_node is null*/
    if(prev_node==Null){
        printf("prev_node can't be a Null");
        return;
    }
    
    /*allocating new_node*/
    struct node* new_node =(struct node*) malloc(sizeof(struct node));

    /*put in data*/
    new_node->data=new_data;
    /*make the new_node to next to the prev_node */
    new_node->next=prev_node->next;
    /*pointing prev_node as next new_node*/
    prev_node->next=new_node;

}


/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter(struct Node* prev_node, int new_data)
{
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}

	/* 2. allocate new node */
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	/* 3. put in the data */
	new_node->data = new_data;

	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next;

	/* 5. move the next of prev_node as new_node */
	prev_node->next = new_node;
}
