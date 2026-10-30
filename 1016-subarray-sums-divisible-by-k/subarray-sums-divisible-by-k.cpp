class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    
 	int n= nums.size();

 	map<int, int>mp;
 	mp[0]=1;
 	int count=0;
 	int prefixsum=0;
 	for(int i=0;i<n;i++) {
 		prefixsum+=nums[i];
 		int rem= prefixsum%k;
 		if(rem<0)
 		rem+=k;
 		if(mp.find(rem)!=mp.end()) {
 			count+=mp[rem];
		 }
		 mp[rem]++;
	 }
	 return count;
    }
};