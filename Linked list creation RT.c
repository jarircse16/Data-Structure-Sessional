#include<stdio.h>
#include<stdlib.h>
// create node
struct node
{
    char info;   //data
    struct node *link; // pointer
};

struct node *start = NULL;

void create_list()
{
    struct node *ptr= NULL, *newnode= NULL;
    char ch= 'H';
    int i;
    for(i=0; i<4;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->info= ch;
        newnode->link= NULL;

        if(start == NULL)
        {
            start = newnode;
            ptr = newnode;
        }
        else
        {
            ptr->link= newnode;
            ptr= newnode;
        }
        ch= ch+1;
    }
    ptr = NULL;
}

void traverse_list()
{
    struct node *ptr = start;
    printf("Current\t Info \t Next\n");
    while(ptr!=NULL)
    {
        printf("%x \t %c \t %x \n", ptr, ptr->info, ptr->link);
        ptr= ptr->link;
    }
}

int main()
{
    create_list();
    traverse_list();

    return 0;
}
