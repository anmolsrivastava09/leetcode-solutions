class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        	map<int, int>mp;
 	mp[0]=1;
 	int count=0;
 	int prefixsum=0;
 	for(auto num: nums) {
 		prefixsum+=num;
 		int x= prefixsum-k;
 		if(mp.find(x)!=mp.end()) {
 			count+=mp[x];
		 }
		 mp[prefixsum]++;
	 }
     return count;
    }
};