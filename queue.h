//
//  queue.h
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 4/7/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include "linkedList.h"

typedef struct queue{
    struct linked_list_node *head;
    
}queue;

void push_queue(int value, queue *theQueue);
int pop_queue(queue *theQueue);
int last_queue(queue *theQueue);
int is_empty_queue(queue *theQueue);
#endif /* queue_h */
