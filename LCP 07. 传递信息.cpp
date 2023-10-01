class Solution {
public:
    int num=0;
    void dfs(vector<vector<int>>&edges,int n,int index,int k,int step)
    {
        if(step==k)
        {
            if(index==n-1)
            {
                num++;
            }
           return; 
        }        
        for(auto edg:edges[index])
        {
            dfs(edges,n,edg,k,step+1);
        }
    }

    int numWays(int n, vector<vector<int>>& relation, int k)
     {
        vector<vector<int>>edges(n);
        for(auto &edge:relation)
        {
            int start=edge[0],end=edge[1];
            edges[start].push_back(end);
        }
        dfs(edges,n,0,k,0);
        return num;
    }
};
