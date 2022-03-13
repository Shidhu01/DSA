#include<bits/stdc++.h>

using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int val, count = 0;
    for (int i=0; i<n; i++)
    {
        val = k - arr[i];
        if(map[val])
        {
            count += map[val];
        }
        map[arr[i]]++;
    }
    return count;
}


int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<getPairsCount(arr, n, k);

}