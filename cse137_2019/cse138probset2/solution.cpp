#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define output(x) cout << x << endl
#define print(x) cout << #x << " = " << x << endl
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

vector<pair<int,int>>adj[100005];
int cost[100005],inf=2e9,n,m,s,T,t;

void dijkstra()
{
    cost[s]=t;
    priority_queue<pair<int,int>>q;
    q.push({-t,s});
    while(!q.empty())
    {
        auto p = q.top();
        q.pop();
        int u = p.second;
        for(auto now : adj[u])
        {
            int v=now.first,w=now.second;
            if(cost[u]+w<cost[v])
            {
                cost[v] = cost[u]+w;
                q.push({-cost[v],v});
            }
        }
    }
}

int main()
{
    
        int u,v,w,i,j,cnt=0;
        cin>>n>>T>>t>>s>>m;
        for(i=1;i<=m;i++)
        {
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        for(i=0;i<=n;i++)
            cost[i]=inf;
        dijkstra();
        for(i=1;i<=n;i++)
        {
            //cout<<"i = "<<i<<" cost "<<cost[i]<<endl;
            if(cost[i]<=T) cnt++; 
        }cout<<cnt<<endl;

    return 0;
}