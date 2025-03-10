#include<bits/stdc++.h>
using namespace std;

int main()
{
    int edge;
    cout<<"how many edge you take:";
    cin>>edge;
    vector<int>adj[edge+1];
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=edge;i++)
    {
        cout<<"edge number "<<i<<" -> ";
        for(int vertex : adj[i])
        {
            cout<<vertex<<", ";
        }
        cout<<endl;
    }
}
