void insertafter(struct node* prev_node, int new_data)
// {
//     /*checking condition prev_node is null*/
//     if(prev_node==Null){
//         printf("prev_node can't be a Null");
//         return;
//     }
    
//     /*allocating new_node*/
//     struct node* new_node =(struct node*) malloc(sizeof(struct node));

//     /*put in data*/
//     new_node->data=new_data;
//     /*make the new_node to next to the prev_node */
//     new_node->next=prev_node->next;
//     /*pointing prev_node as next new_node*/
//     prev_node->next=new_node;

// }