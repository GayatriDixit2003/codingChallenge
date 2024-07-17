class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicateNumber=-1;
       
        unordered_map<int,int>mpp;
        for(int it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second>1){
                duplicateNumber=it.first;
               
                
            }
        }
        return duplicateNumber;
    }
};
