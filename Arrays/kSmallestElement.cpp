#include<bits/stdc++.h>

using namespace std;

int kSmallestElement(int arr[], int size, int key)
{
    sort(arr, arr+size);
    return arr[key-1];
}

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    cout<<kSmallestElement(arr, n, k);

    return 0;
}