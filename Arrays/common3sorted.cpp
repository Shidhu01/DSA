#include<bits/stdc++.h>

using namespace std;

vector <int> commonElementsWithMap(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> arr;
    unordered_map <int, int> m1,m2,m3;
    for(int i=0;i<n1; i++)
        m1[A[i]]++;
    for(int i=0;i<n2; i++)
        m2[B[i]]++;
    for(int i=0;i<n3; i++)
        m3[C[i]]++;
    
    for (int i = 0; i < n1; i++)
    {
        if(m1[A[i]] && m2[A[i]] && m3[A[i]])
        {
            arr.push_back(A[i]);
            m1[A[i]] = 0;
        }
    }
    
    return arr;
}

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> arr;
    int i=0, j=0, k=0, l=0;
    while(i<n1 && j<n2 && k<n3)
    {
        if((A[i] == B[j]) && (B[j] == C[k]))
        {
            if(l == 0)
            {
                arr.push_back(A[i]);
                l++;
            }
            else if(arr[l-1] != A[i])
            {
                arr.push_back(A[i]);
                l++;
            }
            i++;j++;k++;
        }
        else if(A[i] < B[j])
        {
            i++;
        }
        else if(B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    if(arr.size() == 0)
    {
        arr.push_back(-1);
        return arr;
    }
    else
        return arr;
}


int main()
{
    int n,m,o;
    cin>>n>>m>>o;
    int a1[n], a2[m], a3[o];
    for(int i=0; i<n; i++)
        cin>>a1[i];
    for(int i=0; i<m; i++)
        cin>>a2[i];
    for(int i=0; i<o; i++)
        cin>>a3[i];

    vector<int> temp = commonElements(a1, a2, a3, n, m, o);
    
    for(int i=0; i<temp.size(); i++)
        cout<<temp[i]<<" ";

    return 0;
}