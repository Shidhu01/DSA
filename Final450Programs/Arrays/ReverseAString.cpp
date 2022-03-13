#include<bits/stdc++.h>

using namespace std;

void reverseArray(char arr[], int start, int end)
{
    if(start >= end)
        return;
    else
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverseArray(arr, start+1, end-1);
    }
}


int main()
{
    char str[10];
    cin>>str;
    reverseArray(str, 0, strlen(str)-1);
    cout<<str;
    return 0;
}