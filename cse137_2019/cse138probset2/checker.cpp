#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pi acos(-1)


int main()
{
	
    int n,k,l,i,j=1,m,T,s,t;
    cin>>n>>T>>t>>s>>m;
    if(n<1||n>100000||T<1||T>240||t<1||t>1000||s<1||s>n||m<1||m>100000)
    {
    	cout<<"invalid n\n";
    	return 1;
    }
    int a[n+5],b[n+5],c[n+5];
    map<int,int>mp;
    for(i=1;i<=m;i++)
    {
    	cin>>k>>l>>m;
    	if(m<1||m>1000)
    	{
    		cout<<"wrong time\n";
    		return 1;
    	}
    	if(k&&l&&k!=l&&(mp[k]!=l||mp[l]!=k)&&k<=n&&k>0&&l>=1&&l<=n) 
    	{
    		a[j]=k,b[j]=l;j++;
    		mp[k]=l,mp[l]=k;
    	}
    	else
    	{
    		cout<<"for i = "<<i<<" ";
    		cout<<"Worng input, can not have duplicate u and v , u or v or m out of bound\n";
    		return 1;
    	}
    }
    cout<<"Every thing ok!!!!\n";


    return 0;
}