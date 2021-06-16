#include<stdio.h>
#define max 10
typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

Node *createNode(int data, Node *next)
{
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Error! Linked list creating failed.");
        exit(1);
    }

    newNode ->data = data;
    newNode ->next = next;

    return newNode;
}


int main()
{
    Node *head;
    int i;

    head = createNode(10,NULL);
    head = createNode(20,NULL);
    head = createNode(40,NULL);

    printf("Linked List is %d\n",*head);

    for(i=0;i<5;i++){
        scanf("%d",&head);
        head->next =
    }
    for(i=0;i<5;i++){
        printf("Linked List is %d\n",*head);
    }

    //printf("Next item address: %d\n",head ->next);

    return 0;
}
