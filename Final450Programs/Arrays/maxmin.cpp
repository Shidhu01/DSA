#include <bits/stdc++.h>
using namespace std;

void funcMaxMin(vector <int> arr, int size)
{
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout<<max<<" "<<min;
}

  
int main()
{
    vector <int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    funcMaxMin(arr, arr.size());
}
