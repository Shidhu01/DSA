#include<bits/stdc++.h>

using namespace std;


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortNegFirst(int arr[], int size)
{
    int low=0, high=size-1;
    while(low<=high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else if(arr[low]>=0)
        {
            swap(arr[low], arr[high]);
            high--;
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sortNegFirst(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
    }
}