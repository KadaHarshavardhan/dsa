#include <stdio.h>
#include "../../includes/list.h"

int main(void){
    printf("Single linked list operations\n");
    int choice = 0;
    sl_node *head = NULL;
    while(1){
        printf("Enter your choice\n \
        1. Insert\n \
        2. Delete\n \
        3. Display\n \
        4. Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                head = insert(head);
                break;
            case 2:
                head = delete(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                return 0;
            default:
                printf("Wrong choice! try again\n");
                break;
        }
    }
}