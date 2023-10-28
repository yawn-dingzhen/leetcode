class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int ysize=matrix[0].size();
        int xsize=matrix.size();
        vector<vector<int>>hash;
        for(int x=0;x<xsize;++x)
        {
            for(int y=0;y<ysize;++y)
            {
                if(matrix[x][y]==0)
                {
                    hash.push_back({x,y});
                }
            }
        }
        for(int i=0;i<hash.size();++i)
        {
            for(int x=0;x<xsize;++x)
            {
                matrix[x][hash[i][1]]=0;
            }
            for(int y=0;y<ysize;++y)
            {
                matrix[hash[i][0]][y]=0;
            }
        }
    }
};
