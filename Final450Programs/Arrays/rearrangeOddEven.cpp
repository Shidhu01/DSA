#include<bits/stdc++.h>

using namespace std;


void rotate(int arr[], int start, int end)
{
    int temp = arr[end];
    for(int i=end-1; i>=start; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[start] = temp;
}


void rearrange(int arr[], int size)
{
    int negSearch =0, posSearch=0, iter = 0;

    while(negSearch < size && posSearch < size and iter < size)
    {
        if(iter%2 == 0)
        {
            if(arr[iter] >= 0)
            {
                negSearch = iter;
                posSearch = iter;
                while(negSearch<size && arr[negSearch]>=0)
                    negSearch++;
                if(negSearch>=size)
                    break;
                else
                    rotate(arr, iter, negSearch);
            }
        }
        else
        {
            if(arr[iter]<0)
            {
                posSearch = iter;
                negSearch = iter;
                while(posSearch<size && arr[posSearch]<0)
                    posSearch++;
                if(posSearch>=size)
                    break;
                else
                    rotate(arr, iter, posSearch);
            }
        }
        iter++;
    }

    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    
    rearrange(arr, n);
}