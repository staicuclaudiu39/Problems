#ifndef LIST_FUNC_H_INCLUDED
#define LIST_FUNC_H_INCLUDED

struct list
{
    int value;
    struct list* next;
};

typedef struct list Node;
void addAtBeginning (Node**head, int value);
void print(Node* head);
void addAtEnd (Node**head, int v);
int get_Number (Node* head);

#endif // LIST_FUNC_H_INCLUDED
