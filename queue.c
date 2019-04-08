//
//  queue.c
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 4/7/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#include "queue.h"
/*
 This method pushes elements onto the QUEUE
 */
void push_queue(int value, queue *theQueue){
    
    struct linked_list_node *node = (struct linked_list_node *) malloc(sizeof(struct linked_list_node));
    node -> data = value;
    node -> next = NULL;
    if(theQueue -> head == NULL){
        theQueue -> head = node;
        return;
    }
        node -> next = theQueue  -> head;
        theQueue -> head = node;
        
    
    
}
/*
 This method pops an element off of the end of the Queue
 */
int pop_queue(queue *theQueue){
    if(theQueue -> head != NULL){
        if(theQueue -> head -> next == NULL){
            int value = theQueue -> head -> data;
            theQueue -> head = NULL;
            return value;
        }
        struct linked_list_node *iter = theQueue -> head;
        struct linked_list_node *prev = NULL;
        while(iter -> next != NULL){
            prev = iter;
            iter = iter -> next;
        }
        int value = iter -> data;
        prev -> next = NULL;
        return value;
    }
    
    return 0;
}

/*
 This method just returns the last element in the queue
 */
int last_queue(queue *theQueue){
    if(theQueue -> head != NULL){
        if(theQueue -> head -> next == NULL){
            int value = theQueue -> head -> data;
            return value;
        }
        struct linked_list_node *iter = theQueue -> head;
        while(iter -> next != NULL){
            iter = iter -> next;
        }
        int value = iter -> data;
        return value;
    }
    return 0;
}
int is_empty_queue(queue *theQueue){
    
    if(theQueue -> head == NULL){
        return 0;
    }
    return 1;
    
}
