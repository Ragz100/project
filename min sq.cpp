#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int a1=a[n-1]-a[0];
        int b1=b[n-1]-b[0];
        a1=max(a1,b1);
        cout<<a1*a1<<endl;
    }
}
