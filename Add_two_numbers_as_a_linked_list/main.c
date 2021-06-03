#include <stdio.h>
#include <stdlib.h>
#include "list_func.h"

int main()
{
    int n1, n2;
    Node* head1;
    Node* head2;
    head2=NULL;
    head1=NULL;
    printf("Introduceti cele 2 numere: ");
    scanf("%d%d", &n1, &n2);

    while (n1!=0)
    {

        addAtEnd(&head1, n1%10);
        n1/=10;
    }

    while (n2!=0)
    {
        addAtEnd(&head2, n2%10);
        n2/=10;
    }

    n1=get_Number(head1);
    n2=get_Number(head2);


    int n3;
    Node* result;
    result=NULL;
    n3=n1+n2;

    while (n3!=0)
    {
        addAtEnd(&result, n3%10);
        n3=n3/10;
    }

    print (result);

    return 0;
}
