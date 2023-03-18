class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, h=nums.size()-1;
        int mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(target==nums[mid])
                return mid;
            if(target<nums[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};
