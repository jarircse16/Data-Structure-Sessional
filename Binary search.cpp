#include<iostream>
using namespace std;

int binarySearch(int ara[], int n, int data)
{
    int l, r, mid;
    l=0;
    r= n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==ara[mid])
        {
            return mid;
        }
        else if(data<ara[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int ara[]={1,5,7,9,15,16,20,25,29,30,35,40};
    int data, n=12, result;

    cin>> data;
    result = binarySearch(ara, n, data);
    cout<< result<< endl;
    return 0;
}
