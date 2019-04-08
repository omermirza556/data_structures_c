//
//  main.c
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 3/18/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "stack.h"
#include "queue.h"


int main(int argc, const char * argv[]) {
    struct linked_list *theList = (struct linked_list *) malloc(sizeof(struct linked_list));
    
    insert(theList, 4, 4);
    insert(theList, 3, 3);
    insert(theList, 3, 3);
    insert(theList, 5, 5);
    insert(theList, 7, 7);
    insert(theList, 6, 6);
    insert(theList, 8, 8);
    
    
    print_list(theList);
    
    printf("\n\n");
    printf("%d\n", find(theList, 6));
    printf("\n\n");
    
    
    remove_node(theList, 8);
    
    //print_list(theList);
    
    int *array = return_array(theList);
    
    for(int i = 0; i < 5; i++){
        printf("%d\n", array[i]);
    }
    
    printf("******************************\n\n");
    stack *theStack = (stack *) malloc(sizeof(stack));
    push_stack(3, theStack);
    push_stack(4, theStack);
    push_stack(5, theStack);
    printf("%d\n", pop_stack(theStack));
    printf("%d\n", pop_stack(theStack));
    //printf("%d\n", pop_stack(theStack));
    printf("%d\n", top_stack(theStack));
    
    printf("%d\n", is_empty_stack(theStack));
    printf("******************************\n\n");
    queue *theQueue = (queue *) malloc (sizeof(queue));
    printf("%d\n", is_empty_queue(theQueue));
    push_queue(2, theQueue);
    push_queue(4, theQueue);
    push_queue(6, theQueue);
    
    printf("%d\n", theQueue -> head -> data);
    printf("%d\n", theQueue -> head -> next-> data);
    printf("%d\n", theQueue -> head -> next -> next -> data);
    
    struct linked_list_node *iter = theQueue -> head;
    
//    while (iter -> next != NULL) {
//        printf("%d\n", iter -> data);
//        iter = iter -> next;
//    }
    //printf("%d\n", iter -> data);
    
    //printf("%d\n", iter -> data);
    printf("%d\n", last_queue(theQueue));
    
    printf("%d\n", pop_queue(theQueue));
    printf("%d\n", last_queue(theQueue));
    printf("%d\n", is_empty_queue(theQueue));
    


    
    
    
    
    return 0;
}
