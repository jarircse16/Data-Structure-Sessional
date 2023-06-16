#include<stdio.h>
#include<stdlib.h>

int info[10]={1,6,2,7,3,8,4,9,5,10};
int link[10]={2,3,4,5,6,7,8,9,1,-1};
int start= 0;

int search_list(int item)
{
    int loc, ptr= start;
    while(ptr!=-1)
    {
        if(item>info[ptr])
        {
            ptr= link[ptr];
        }
        else if(item==info[ptr])
        {
            loc=ptr;
            return loc;
            break;
        }
        else
        {
            loc= -1;
            return loc;
        }
    }
}

int main()
{
    int item, location;
    printf("Enter item : ");
    scanf("%d",&item);

    location= search_list(item);
    printf("Location : %d\n",location);
    return 0;
}
