#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class DFS{
    private:
    void dfs(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &ans){
         vis[node]=1;
         ans.push_back(node);
         for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ans);
            }
         }
    }
    public:
    vector<int> dfs(int v,vector<vector<int>> &adj){
        vector<int> vis(v,0);
        vector<int> ans;
        dfs(0,adj,vis,ans);
        return ans;
    }
};

int main(){
    int v = 5;
    vector<vector<int>>adj = {{1,2,3},{0},{0,4},{0},{2}};
    
    DFS obj;
    vector<int> ans = obj.dfs(v,adj);
    for(int x:ans){
        cout<<x<<" ";
    }   
    return 0;
}