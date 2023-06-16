#include<iostream>
using namespace std;

void bubble_sort(int ara[], int n);

int main()
{
    int ara[]={64, 34, 25, 12, 22, 11, 90};
    int n=7,i;
    bubble_sort(ara, n);
    for(i=0;i<n;i++)
    {
        cout<< ara[i]<< " ";
    }
    cout<< endl;

    return 0;
}

void bubble_sort(int ara[], int n)
{
    int i,j,flag,temp;

    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
                flag++;
            }
        }
        if(flag==0)
            break;
    }
}
