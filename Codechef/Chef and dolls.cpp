#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;;i++)
        {
            int d=0;
            for(int j=0;j<n;j++ )
            {
                if(a[j]==i)
                {
                    d++;
                }
            }
            if(d%2==0)
            {
                continue;
            }
            else
            {
            
                cout<<i<<endl;
            break;
            }

        }
    }
