#include<bits/stdc++.h>

using namespace std;


int merge1(int arr[], int temp[], int left, int mid, int right)
{
    int inverse = 0;
    int i=left;
    int j=mid;
    int k=left;
    while((i<=mid-1) and (j<=right))
    {
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            inverse += (mid -i);
        }
    }
    while(i <= mid-1)
    {
        temp[k++] = arr[i++];
    }
    while(j <= right)
    {
        temp[k++] = arr[j++];
    }
    for(int m=left; m<=right; m++)
    {
        arr[m] = temp[m];
    }
    return inverse;
}


int merge_sort(int arr[], int temp[], int left, int right)
{
    int inverse =0;
    int mid;
    if(left < right) 
    {
        mid = (left+right)/2;
        inverse += merge_sort(arr, temp, left, mid);
        inverse += merge_sort(arr, temp, mid+1, right);
        inverse += merge1(arr, temp, left, mid+1, right);

    }
    return inverse;
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

    int temp[n];
    cout<<merge_sort(arr, temp, 0, n-1);

}