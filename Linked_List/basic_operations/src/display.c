#include <stdio.h>
#include "../../includes/list.h"

void display(sl_node *head){
    if(head == NULL){
        printf("No elements to display\n");
    }else if(head->next == NULL){
        printf("%d\n", head->data);
    }else{
        sl_node *temp = head;
        while(temp != NULL){
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    return;
}