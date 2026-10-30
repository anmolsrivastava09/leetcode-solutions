class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int n= nums.size();
       if(k<=1)
       return 0;
       int c=0;
       int i=0;
       int product=1;
        for(int j=0;j<n;j++) {
            product= product*nums[j];
            while(product>=k) {
                product=product/nums[i];
                i++;
            }
            c= c+ (j-i+1);
        }

       return c;
    }
};