class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1,high=0,mid=0,ans=0;
          for(int i=0;i<n;i++){
            high=max(high,nums[i]);
          }
          while(low<=high){
            int sum=0;
            mid=(low+high)/2;
             for(int i=0;i<n;i++){
                sum+=(nums[i]/mid);
                if(nums[i]%mid){
                    sum++;
                }
             }
             if(sum<=threshold){
                ans=mid;
                high=mid-1;
             }
             else{low=mid+1;}
          }
    return ans;
    }
};