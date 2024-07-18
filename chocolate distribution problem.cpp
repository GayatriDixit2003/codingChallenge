class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin(),a.end());
        //run a loop for number of windows
        long long int mini  =INT_MAX;
        int i=0;
        int j= m-1;
        while(j<n){
            long long int dif = a[j]-a[i];
            mini= min(dif,mini);
            i++,j++;
        }
        return mini;
        
        
    
    
    }   
};
