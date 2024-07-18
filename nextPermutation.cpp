//User function Template for C++

class Solution {
  public:
  void solve(vector<int>& freq,vector<int> &arr,vector<int> &temp,  set<vector<int>>&ans,int n){
      if(temp.size()==n){
          ans.insert(temp);
          return;
      }
      
      for(int i=0;i<n;i++){
          if(freq[i]==0){
               temp.push_back(arr[i]);
              freq[i]=1;
              solve(freq,arr,temp,ans,n);
               freq[i]=0;
              temp.pop_back();
             
             
          }
      }
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
       vector<int>freq(n,0);
       vector<int>temp;
       set<vector<int>>ans;
       
       solve(freq,arr,temp,ans,n);
       vector<vector<int>>result(ans.begin(),ans.end());
       return result;
    }
};
