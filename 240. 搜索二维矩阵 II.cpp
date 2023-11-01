// 巧法
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int list=matrix[0].size()-1;
        while(list>=0&&row<matrix.size())
        {
            if(matrix[row][list]<target)
            {
                row++;
            }
            else if(matrix[row][list]>target)
            {
                list--;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};


// 二分法
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int list=matrix[0].size();
        int n=0;
        while(n<row)
        {
            int left=0;
            int right=list-1;
                if(matrix[n][0]<=target&&matrix[n][list-1]>=target)
                {
                    while(left<=right)
                    {
                        int mid=left+(right-left)/2;
                        if(matrix[n][mid]<target)
                        {
                            left=mid+1;
                        }
                        else if(matrix[n][mid]>target)
                        {
                            right=mid-1;
                        }
                        else
                        {
                            return true;
                        }
                    }
                }
            n++;
        }
        return false;
    }
};
