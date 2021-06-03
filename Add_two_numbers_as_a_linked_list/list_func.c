#include "list_func.h"
#include <stdlib.h>
void addAtBeginning (Node**head, int value)
{
    Node* nou=(Node*)malloc(sizeof(Node));
    nou->value=value;
    nou->next=*head;
    *head=nou;
}

void print(Node* head)
{
    Node* headcopy;
    headcopy=head;
    while (headcopy!=NULL)
        {printf("%d ", headcopy->value);
        headcopy=headcopy->next;
        }
    printf("\n");
}

void addAtEnd (Node**head, int v)
{
    Node* aux=*head;
    Node* copy=*head;
    Node* nou=(Node*)malloc(sizeof(Node));
    nou->value=v;
    while (copy!=NULL)
    {
        aux=copy;
        copy=copy->next;
    }
    if (aux==NULL)
    {
        addAtBeginning(&*head, v);
    }
    else
    {
        aux->next=nou;
        nou->next=NULL;
    }

}

int get_Number (Node* head)
{
    int p=1;
    int nr=0;
    while (head!=NULL)
    {
        nr=nr+head->value*p;
        head=head->next;
        p=p*10;
    }
    return nr;

}
