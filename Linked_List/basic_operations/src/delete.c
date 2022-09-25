#include <stdio.h>
#include <stdlib.h>
#include "../../includes/list.h"


sl_node *delete(sl_node *head){
    if(head == NULL){
        printf("List empty!\n");
    }else if(head->next == NULL){
        free(head);
        return NULL;
    }else{
        sl_node *temp = head;
        sl_node *prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    return head;
}