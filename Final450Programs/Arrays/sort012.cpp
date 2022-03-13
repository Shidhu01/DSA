#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

void sort012(int arr[], int size)
{
    int low=0, mid=0, high=size-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        
    }
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

    sort012(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}