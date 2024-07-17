class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int n=arr.size();
       int minProfit=arr[0];
       int maxProfit=0;
       for(int i=1;i<n;i++){
        int currProfit=arr[i]-minProfit;
        maxProfit=max(maxProfit,currProfit);
        minProfit=min(minProfit,arr[i]);
       }
        
        return maxProfit;
    }
};
