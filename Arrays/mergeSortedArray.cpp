#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int n, int b[], int m)
{
    int i=0, j=0, k=n-1;
    while(i<k & j<m)
    {
        if(a[i]>b[j])
        {
            swap(b[j], a[k]);
            k--;
            j++;
        }
        i++;
    }
    sort(a,a+n);
    sort(b,b+m);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }

}


void mergeWith2Pointer(int a[], int n, int b[], int m)
{

    for(int i=0;i<n;i++)
    {
        if(a[i]>b[0])
        {
            swap(a[i], b[0]);
            sort(b,b+m);
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
}

int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
 
void mergeGapmethod(int* arr1, int* arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}


int main()
{
    int n;
    int m;
    cin>>n>>m;
    int a[n], b[m];
    for (int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    mergeWith2Pointer(a,n,b,m);

    return 0;
}