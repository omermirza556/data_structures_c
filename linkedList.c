//
//  linkedList.c
//  Lab_01_5_Omirza14
//
//  Created by Omer Mirza on 3/18/19.
//  Copyright © 2019 OmerMirza. All rights reserved.
//

#include "linkedList.h"
#include <stdlib.h>



/*
 This method inserts an element into the list
 */
int insert(struct linked_list *list, int value, int key){
    struct linked_list_node *temp, *iter, *prev;
    
    temp = (struct linked_list_node *) malloc(sizeof(struct linked_list_node));
    temp -> next = NULL;
    temp -> data = value;
    temp -> key = key;
    
    if(list ->head == NULL){
        list -> head = temp;
        return 1;
    }
        if(list ->head -> key > key){
            temp -> next = list -> head;
            list -> head = temp;
            return 1;
        }
        iter = list ->head;
        prev = NULL;
        while(iter -> next != NULL){
            if(iter -> key == key){
                return 0;
            }
            if(iter -> key > key){
                temp -> next = iter;
                prev -> next = temp;
                return 1;
            }
            prev = iter;
            iter = iter -> next;
        }
        if(iter -> key > key){
            temp -> next = iter;
            prev -> next = temp;
            return 1;
        }
        iter -> next = temp;
    
    return 0;
}

/*
 this method returns whether or not a selected key is within the list
 */
int is_in_list(struct linked_list *list, int key){
    
    struct linked_list_node *iter = list ->head;
    
    while(iter -> next != NULL){
        if(iter ->key == key){
            return 1;
        }
        iter = iter -> next;
    }
    
    if(iter -> key == key){
        return 1;
    }
    return 0;
}
/*
 This mehtod returns the value associated with the key
 */
int find(struct linked_list *list, int key){
    struct linked_list_node *iter = list -> head;
    
    while(iter ->next != NULL){
        if(iter -> key == key){
            return iter -> data;
        }
       // printf("%d\n", iter ->data);
        iter = iter -> next;
    }
    
    if(iter -> key == key){
        return iter -> data;
    }
    
    return 0;
}

/*
 This method removes an element in a list
 */
int remove_node(struct linked_list *list, int key){
    struct linked_list_node *iter, *prev;
    
    
    if(list -> head -> key == key){
        if(list -> head -> next != NULL ){
            list -> head = list -> head -> next;
            return 0;
        }else{
            list -> head = NULL;
            return 0;
        }
        
    }
    iter = list ->head;
    prev = NULL;
    
    while(iter -> next != NULL){
        if(iter -> key == key){
            prev -> next = iter -> next;
            return 1;
        }
        prev = iter;
        iter = iter -> next;
    }
    
    if(iter -> key == key){
        prev -> next = NULL;
        return 1;
    }
    
    
    return 0;
}
/*
 This method prints the elements in the list
 */
void print_list(struct linked_list *list){
    struct linked_list_node *iter = list -> head;
    
    while(iter ->next != NULL){
        printf("%d\n", iter ->data);
        iter = iter -> next;
    }
    printf("%d\n", iter ->data);
}


/*
 This method returns a pointer to the top of the array
 */

int * return_array (struct linked_list *list){
    int counter = 0;
    struct linked_list_node *iter = list -> head;
    
    while(iter ->next != NULL){
        counter ++;
        iter = iter -> next;
    }
    counter++;
    counter++;
    int array [counter];
    counter = 0;
    iter = list->head;
    while (iter ->next != NULL) {
        array[counter] = iter -> data;
        counter ++;
        iter = iter -> next;
    }
    
    array[counter] = iter -> data;
    //printf("%d\n", iter -> data);
    //counter ++;
    //iter = iter -> next;
    //array[counter] = iter ->data;
    
    
    
    
    return array;
}





