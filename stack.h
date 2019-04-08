//
//  stack.h
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 4/7/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include "linkedList.h"


typedef struct stack{
    struct linked_list_node *head;
}stack;

void push_stack(int value, stack *theStack);
int pop_stack(stack *theStack);
int top_stack(stack *theStack);
int is_empty_stack(stack *theStack);
#endif /* stack_h */
