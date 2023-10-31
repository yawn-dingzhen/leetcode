class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n=matrix[0].size()-1;
        int m=0;
        while(n>=0&&m<matrix.size())
        {
            if(matrix[m][n]>target)
            {
                n--;
            }
            else if(matrix[m][n]<target)
            {
                m++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
