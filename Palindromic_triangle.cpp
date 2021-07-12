#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=i,j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(;j<=n;j++)
        {
            cout<<a<<" ";
            a--;
        }
        a=2;
        for(;j<=n+i-1;j++)
        {
            cout<<a<<" ";
            a++;
        }
        for(;j<=2*n-i;j++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
