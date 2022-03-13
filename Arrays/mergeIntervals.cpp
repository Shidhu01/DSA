#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &v)
{
    vector<vector<int>> resultIntervals;
    vector<int> tempIntervals;
    sort(v.begin(), v.end());

    tempIntervals = v[0];

    for(auto it: v)
    {
        if(tempIntervals[1] >= it[0])
        {
            tempIntervals[1] = max(tempIntervals[1], it[1]);
        }
        else
        {
            resultIntervals.push_back(tempIntervals);
            tempIntervals = it;
        }
    }
    resultIntervals.push_back(tempIntervals);

    return resultIntervals;
}


vector<vector<int>> mergeIntervalsSpaceO1(vector<vector<int>> &v)
{
    int idx =0;
    int i=1;
    sort(v.begin(), v.end());
    for(i=1; i<v.size(); ++i)
    {
        if(v[idx][1] >= v[i][0])
        {
            v[idx][1] = max(v[idx][1], v[i][1]);
        }
        else
        {
            idx++;
            v[idx] = v[i];
        }
    }
    v.resize(idx+1);
    return v;
}



int main()
{
    vector<vector<int>> vec;
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        vector<int> temp;
        for(int j=0; j<2; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }

    vector<vector<int>> ans = mergeIntervalsSpaceO1(vec);

    for(int i=0; i<ans.size() ;i++)
    {
        cout<<"[";
        for(int j=0; j<2; j++)
        {
            cout<<ans[i][j];
            if(j != 2-1)
                cout<<",";
        }
        cout<<"] ";
    }

}