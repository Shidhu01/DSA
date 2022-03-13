#include<bits/stdc++.h>

using namespace std;

void clockwiseRotate(int arr[], int size)
{
    int key = size-2;
    int lastEle = arr[size-1];
    while(key>=0)
    {
        arr[key+1] = arr[key];
        key--;
    }
    arr[0] = lastEle;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    clockwiseRotate(arr, n);
        for (int i=0; i<n; i++)
    {       
        cout<<arr[i]<<" ";
    }
   

    return 0;
}