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


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int list=matrix[0].size();

        int up=0;
        int down=row-1;
        while(up<down)
        {
            int mid=up+(down-up)/2;
            if(matrix[mid][list-1]<target)
            {
                up=mid+1;
            }
            else
            {
                down=mid;
            }
        }

        int left=0;
        int right=list-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(matrix[up][mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }

        if(matrix[up][left]==target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
