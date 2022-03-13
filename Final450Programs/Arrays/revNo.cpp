#include<iostream>

using namespace std;

int main()
{
    int n, revNo=0;
    cin>>n;
    while(n>0)
    {
        int d = n%10;
        revNo = revNo*10 + d;
        n = n/10;
    }
    cout<<revNo;

    return 0;
}