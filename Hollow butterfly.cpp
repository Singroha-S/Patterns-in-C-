#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
               {
                   cout<<"*";
                }
            else
                {
                    cout<<" ";
                }
        }
        for(j=i+1;j<=2*n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=2*n;j++)
        {
            if(j==2*n-i+1 || j==2*n)
            {
                cout<<"*";
            }
            else
                {
                    cout<<" ";
                }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
               {
                   cout<<"*";
                }
            else
                {
                    cout<<" ";
                }
        }
        for(j=i+1;j<=2*n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=2*n;j++)
        {
            if(j==2*n-i+1 || j==2*n)
            {
                cout<<"*";
            }
            else
                {
                    cout<<" ";
                }
        }
        cout<<endl;
    }

    return 0;
}

