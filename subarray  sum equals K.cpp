class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
   unordered_map<int,int>mp;
   mp[0]=1;
   int presum=0;
   int cnt=0;
   for(int i=0;i<n;i++){
    presum+=nums[i];
    int rem=presum-k;
    if(mp.find(rem)!=mp.end()){
        cnt+=mp[rem];
        mp[presum]++;
    }
    else{
        mp[presum]++;
    }
   }
   
   return cnt;

    }
};
