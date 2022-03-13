#include<bits/stdc++.h>

using namespace std;

int findDuplicateONspace(int arr[], int size)
{
    unordered_map <int, int> frequency;
    for (int i=0; i<size; i++)
    {
        frequency[arr[i]]++;
        if(frequency[arr[i]]>1)
            return arr[i];
    }
    return -1;
}


int findDuplicateO1space(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[arr[i]%size]+=size;
    }

    for(int i=0; i<size; i++)
    {
        if(arr[i]/size > 1)
            return i;
    }
    return -1;
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
    cout<<findDuplicateO1space(arr, n);

    return 0;
}