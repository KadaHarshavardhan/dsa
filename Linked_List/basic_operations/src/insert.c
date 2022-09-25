#include <stdio.h>
#include "../../includes/list.h"

sl_node *insert(sl_node *head){
    if(head == NULL){
        head = create();
    }else if(head->next == NULL){
        head->next = create();
    }else{
        sl_node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
       temp->next = create();
    }
    return head;
}