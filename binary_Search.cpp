#include <iostream>
using namespace std;
int binary(int arr[],int size,int key)    //larray sorted in assending order
{
    int mid,start=0,end=size-1;
    mid=start/2+end/2;
    while(end>=start) {
        if(key==arr[mid])return mid;
        if(key>arr[mid])
            start=mid+1;
        else end=mid-1;

        mid=start/2+end/2;
    }
    return -1;
}
int main()
{
    int arr[5]= {1,2,3,4,5};
    cout<<binary(arr,5,6);
}
