#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class Solution{
    public:
    vector<int> bfs(int v, vector<vector<int>> adj){
        vector<int> vis(v,0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        vector<int> bfs;     
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
             for(auto it:adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=1;
                }
             }
        }
        return bfs;
    }

};

int main()
{
    int v = 5;
    vector<vector<int>>adj = {{1,2,3},{0},{0,4},{0},{2}};
    Solution obj;
    vector<int> ans = obj.bfs(v,adj);
    for(int x:ans){
        cout<<ans[x]<<" ";
    }

    return 0;
}