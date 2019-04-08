//
//  stack.c
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 4/7/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#include "stack.h"
/*
 This function pushes an element on the stack
 */
void push_stack(int value, stack *theStack){
    struct linked_list_node *node = (struct linked_list_node *) malloc(sizeof(struct linked_list_node));
    node -> data = value;
    if(theStack -> head == NULL){
        theStack -> head = node;
        return;
    }else{
        node -> next = theStack  -> head;
        theStack -> head = node;
        
    }
    
    
}
/*
 this method pops the top element off of the stack and returns the value.
 */
int pop_stack(stack *theStack){
    if(theStack -> head == NULL){
        return 0;
    }
    
    if(theStack -> head -> next == NULL){
        int value = theStack -> head -> data;
        theStack -> head = NULL;
        return value;
        
    }
    

        int value = theStack -> head -> data;
        theStack -> head = theStack -> head -> next;
        
        return value;
    
    
   
}
/*
 This function just returns the value of the top element of the stack
 */
int top_stack(stack *theStack){
    if(theStack -> head!= NULL){
        return theStack -> head -> data;
    }
    return 0;
}

/*
 This function returns if the stack is empty or not
 */
int is_empty_stack(stack *theStack){
    if(theStack -> head == NULL){
        return 0;
    }
    return 1;
}
