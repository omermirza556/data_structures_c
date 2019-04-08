//
//  linkedList.h
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 3/18/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#ifndef linkedList_h
#define linkedList_h

#include <stdio.h>
#include <stdlib.h>
struct linked_list_node{
    int data;
    int key;
    struct linked_list_node *next;
    
};

struct linked_list{
    struct linked_list_node *head;
};
int insert(struct linked_list *list, int value, int key);
int is_in_list(struct linked_list *list, int key);
int find(struct linked_list *list, int key);
int remove_node(struct linked_list *list, int key);
void print_list(struct linked_list *list);
int * return_array (struct linked_list *list);
//CREATE ARRAY?!
#endif /* linkedList_h */
