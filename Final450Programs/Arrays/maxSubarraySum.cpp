#include<bits/stdc++.h>

using namespace std;

int kadensAlgorithm(int arr[], int size)
{
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0; i<size; i++)
    {
        currentSum = currentSum+arr[i];
        if(currentSum>maxSum)
        {
            maxSum = currentSum;
        }
        if(currentSum<0)     // 4 -5 4 6 -3 4 -1
        {
            currentSum =0;  // this skips 4 + (-5) part as sum is -1 but now maxSum is 4 as max(4, -1) is 4
        }
    }
    return maxSum;

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

    cout<<kadensAlgorithm(arr, n);

    return 0;
}