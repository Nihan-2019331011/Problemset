#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,i;
    cin>>n;
    map<ll,ll>mp;
    for(i=1 ; i<=n ; i++)
    {
        ll x1, x2;
        cin>>x1>>x2;
        if(x1>x2) swap(x1,x2);
        mp[x1]++;
        mp[x2]=mp[x2];
        mp[x2+1]--;
    }
    ll total=0,sum=0,y;
    for(auto x : mp)
    {

        sum += x.second;
        if(sum>total)
        {
            total = sum;
            y = x.first;
        }
    }
    cout<<y<<" "<<total<<endl;
    return 0;
}