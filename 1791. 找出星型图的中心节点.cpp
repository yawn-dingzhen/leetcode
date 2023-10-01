class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<int> hash(n + 1);
        for (auto edge : edges) {
            if (++hash[edge[0]] > 1)
             return edge[0];
            if (++hash[edge[1]] > 1)
             return edge[1];
        }
        return 0;
    }
};
