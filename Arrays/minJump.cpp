#include<bits/stdc++.h>

using namespace std;

int minJump(int arr[], int size)
{
   if(size==1)
        return 0;

    if(arr[0] == 0)
        return -1;
    
    int jump=0; 
    int halt =0;
    int maxDist = INT_MIN;
    
    for(int i=0; i<size-1; i++)
    {
        if(arr[i]+i>=maxDist)
            maxDist = arr[i]+i;
        
        if(i == halt)
        {
            halt = maxDist;
            jump++;
            if(halt>=size-1)
                break;
        }
    } 
    if (halt>=size-1)
        return jump;
    else 
        return -1;

    
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
    cout<<minJump(arr,n);

    return 0;
}