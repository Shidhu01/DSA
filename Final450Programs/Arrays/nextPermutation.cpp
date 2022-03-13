#include<bits/stdc++.h>

using namespace std;


vector<int> nextPermutation(vector<int> &nums)
{
    int idx = -1;
        
        for(int i=nums.size()-1; i>0; --i)
        {
            if(nums[i]>nums[i-1])
            {
                idx = i;
                break;
            }
        }
            
        if(idx == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for(int i=nums.size()-1; i>=idx; --i)
            {
                if(nums[i]>nums[idx-1])
                {
                    swap(nums[i], nums[idx-1]);
                    break;
                }
            }
            int start = idx;
            int end = nums.size()-1;
            while (start <= end)
            {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
        }
    return nums;
} 



int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    vector<int> result = nextPermutation(arr);
    for(auto it: result)
    {
        cout<<it<<" ";
    }
}