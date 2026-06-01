class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1,mid=0;
        while(l<=h){
            mid=(l+h)/2;
            if(target==nums[mid]){
                return true;
            }
                       else if (nums[mid]==nums[l]  &&  nums[mid]==nums[h]){
                l=l+1;
                h=h-1;
            }
           else if(nums[mid]>=nums[l]){
                if(target>=nums[l] && target<=nums[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }

           
            else{
            if(nums[mid]<=nums[h]){
                if(target>=nums[mid]  &&  target<=nums[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
            }
           
        }
        return false;
    }
};