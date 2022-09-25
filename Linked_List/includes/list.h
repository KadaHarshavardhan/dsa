#ifndef HEADER_LIST_H
#define HEADER_LIST_H

typedef struct node{
    int data;
    struct node *next;
}sl_node;

sl_node *create(void);
void display(sl_node *);
sl_node *insert(sl_node *);
sl_node *delete(sl_node *);


#endif