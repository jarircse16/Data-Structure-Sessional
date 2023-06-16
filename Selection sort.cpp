#include<iostream>
using namespace std;

void selection_sort(int ara[], int n)
{
    int i,j,min_index,temp;
    for(i=0;i<n-1;i++)
    {
        min_index= i;
        for(j=i+1;j<n;j++)
        {
            if(ara[j]<ara[min_index])
            {
                min_index= j;
            }
        }
        if(min_index!=i)
        {
            temp=ara[i];
            ara[i]=ara[min_index];
            ara[min_index]=temp;
        }
    }
}

int main()
{
    int ara[]={7,4,10,8,3,1};
    int n=6,i;
    selection_sort(ara,n);
    for(i=0;i<n;i++)
    {
        cout<< ara[i]<<" ";
    }
    cout<< endl;
    return 0;
}
