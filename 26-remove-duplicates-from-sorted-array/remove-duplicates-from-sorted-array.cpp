class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqe= 0;
        for(int i=1; i<nums.size();i++) {
            if(nums[i]!=nums[uniqe])
            uniqe++;
            nums[uniqe]= nums[i];
        }
        return uniqe+1;
    }
};