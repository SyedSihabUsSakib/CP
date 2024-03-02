#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
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
            if(!visited[i]){
                visited[i]=1;
                q.push(i);
                dist[i]=dist[u]+1;
            }
        }
    }
}

void dfs(int start)
{
    if(visited[start])return;
    visited[start]=1;
    cout<<start<<endl;
    for(auto i:adj[start])
    {
        dfs(i);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
   //dfs(1);
   cout<<endl<<"distances"<<endl;
   for(auto i:dist)
   {
       cout<<i.first<<" "<<i.second<<endl;
   }
}
