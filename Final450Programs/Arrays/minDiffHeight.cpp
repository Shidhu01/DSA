#include<bits/stdc++.h>

using namespace std;

int minDiffHeight(int arr[], int size, int k)
{
    sort(arr, arr+size);
    int minimum = arr[0];
    int maximum = arr[size-1];
    int result = maximum - minimum;
    for (int i=0; i<size; i++)
    {
        maximum = max(arr[i]+k, arr[size-1]-k);
        minimum = min(arr[i+1]-k, arr[0]+k);
        if(minimum < 0)
            continue;
        result = min(result, maximum-minimum);
    }

    return result;
}


int main()
{

    int n,k;
    cin>>k;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<minDiffHeight(arr, n, k);

    return 0;
}