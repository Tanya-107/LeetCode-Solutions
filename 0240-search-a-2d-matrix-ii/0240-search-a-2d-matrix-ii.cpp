class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
      int m=matrix[0].size();
      int r=0;
      int c=m-1;
      while(r<n && c>=0)
      {
        int mid=matrix[r][c];
        if(matrix[r][c]==target){
            return true;
        }
        else if(matrix[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
      }  
      return false;
    }
};