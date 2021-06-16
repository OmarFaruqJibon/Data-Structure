#include<stdio.h>
#include <stdlib.h>

#define ML 100
typedef int ElemType;
typedef struct list
{
    ElemType list[ML];
    int size;
}sqList;

sqList *create(int n)  //create sequential list
{
    sqList *p;
    p = (sqList*)malloc(sizeof(sqList));
    p->size = 0;
    int i;
    printf("Please insert the elements: ");
    for(i = 0;i<n;i++){
        scanf("%d",&p->list[i]);
        p->size++;
    }
    return p;
}

void display(sqList *p)  //display list
{
    int i;
    for(i = 0;i<p->size;i++)
        printf("%d\t",p->list[i]);
    printf("\n");
}

int locateElem(sqList *p, ElemType x)  //locate an element
{
    int i;
    for(i=0;i< p->size; i++){
        if(p->list[i]==x){
            printf("The location of %d is %d \n",x,i);
        }
    }
    printf("\n");
    return 0;
}

int insertElem(sqList *p, int position, ElemType value )  //insert new element
{
    int i;
    if(position>p->size || position<0){
        return 0;
    }else{
        for(i = p->size-1; i>=position; i--)
            p->list[i+1] = p->list[i];
            p->list[i+1] = value;
            p->size++;
            return 1;
    }
}

int deleteElem(sqList *p, int d)  //delete element
{
    int i,j;
    for(i=0;i<p->size;i++)
        if(d==p->list[i])
            break;
        for(j=i;j<p->size;j++)
            p->list[j] = p->list[j+1];
            p->size--;
            return 1;
}

int main()
{
    sqList *head;
    int n,x,position,value,dele;

    printf("Please Enter the size of the list: ");   //create a list
    scanf("%d",&n);
    head = create(n);
    printf("List create finished.\n");
    display(head);

    printf("Please enter a value for location: ");  // locate a element of the list
    scanf("%d",&x);
    locateElem(head,x);

    printf("Please enter location and value for insert: ");  //insert new element in the list
    scanf("%d%d",&position,&value);
    insertElem(head,position,value);
    display(head);

    printf("Please enter the value for delete: ");  //delete element from list
    scanf("%d",&dele);
    deleteElem(head,dele);
    display(head);

    return 0;
}


