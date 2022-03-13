#include<bits/stdc++.h>

using namespace std;

int doUnion30testCasePassesd(int a[], int sizeA, int b[], int sizeB)
{
    unordered_map <int,int> map;
    int count=0;
    for(int i=0; i<sizeA; i++)
    {
        map[a[i]]++;
        count++;
    }
    for(int i=0; i<sizeB; i++)
    {
        if (map[b[i]]>0)
            continue;
        count++;
    }
    return count;
}

int doIntersection(int a[], int n, int b[], int m)
{
    int count=0;
    unordered_map <int, int> map;
    for(int i=0; i<n; i++)
    {
        if(map[a[i]]==0)
            map[a[i]]++;
    }
    for(int i=0; i<m; i++)
    {
        if(map[b[i]]>0)
            count++;
    }
    return count;
}


int doUnion(int a[], int sizeA, int b[], int sizeB)
{
    unordered_map <int,int> map;
    for(int i=0; i<sizeA; i++)
    {
        map[a[i]]++;
    }
    for(int i=0; i<sizeB; i++)
    {
        map[b[i]]++;
    }
    return map.size();
}

int main()
{
    int n;
    int m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    cout<<doUnion(a, n, b, m)<<"\n";
    cout<<doIntersection(a, n, b, m);

    return 0;
}