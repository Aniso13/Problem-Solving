class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int r=matrix.size()-1;

        while(l<r)
        {
            int mid = (l+r)/2;
            if(matrix[mid][0]==target)
            {
                return true;
            }
            else if(matrix[mid][0]<target && matrix[mid+1][0]>target)
            {
                l=mid;
                break;
            }
            else if(matrix[mid][0]<target)
            {
                l=mid+1;
            }
            else
                r=mid-1;
        }

        int l2=0;
        int r2= matrix[0].size()-1;
        while(l2<=r2)
        {
            int mid =(l2+r2)/2;
            if(matrix[l][mid]==target) 
                return true;
            else if(matrix[l][mid]>target)
                r2=mid-1;
            else
                l2=mid+1;
        }
        return false;
    }
};