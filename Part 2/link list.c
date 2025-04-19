#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *Next;
}Node;
int main()
{
     Node *a=NULL;
     Node *b=NULL;
     Node *c=NULL;
    a=( Node*)malloc (sizeof( Node));
    b=( Node*)malloc (sizeof( Node));
    c=( Node*)malloc (sizeof( Node));
    a->data=10;
    b->data=20;
    c->data=30;
    a->Next=b;
    b->Next=c;
    c->Next=NULL;
    while(a!=NULL)
    {
        printf("%d \n",a->data);
        a=a->Next;
    }
    return 0;
}
