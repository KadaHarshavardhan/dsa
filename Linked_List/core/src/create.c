#include <stdio.h>
#include "../../includes/list.h"
#include <stdlib.h>

sl_node *create(void){
    sl_node *new = (sl_node *)malloc(sizeof(sl_node));
    if(new == NULL){
        printf("Malloc failed\n");
    }else{
        printf("Enter some data:\n");
        scanf("%d", &new->data);
        new->next = NULL;
    }
    return new;
}