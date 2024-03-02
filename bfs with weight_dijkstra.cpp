#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj[100];
map<int,bool>visited;
map<int,int>dist;
void bfs(int start)
{
    visited[start]=1;
    queue<int>q;
    q.push(start);
    dist[start]=0;
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<" ";
        q.pop();
        for(auto i:adj[u])
        {
            if(!visited[i.first]){
                visited[i.first]=1;
                q.push(i.first);
                dist[i.first]=dist[u]+i.second;
            }
        }
    }
}
void dijkstra(int start)
{
    //visited[start]=1;
    queue<int>q;
    q.push(start);
    dist[start]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto i:adj[u])
        {
            if(i.second+dist[u]<dist[i.first]){
                dist[i.first]=i.second+dist[u];
                q.push(i.first);
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
   // bfs(1);
   //dfs(1);
   for(int i=1;i<=n;i++)
   {
       dist[i]=1e9+7;
   }
   dijkstra(1);
   cout<<endl<<"distances"<<endl;
   for(auto i:dist)
   {
       cout<<i.first<<" "<<i.second<<endl;
   }
}

