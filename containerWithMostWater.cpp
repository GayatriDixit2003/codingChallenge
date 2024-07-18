class Solution {
public:
    int maxArea(vector<int>& height) {
        //better approach
      int maxi=INT_MIN;
      int left=0;
      int right=height.size()-1;

      while(left<right){
        int area=(right-left)*min(height[left],height[right]);
         maxi=max(maxi,area);
        if(height[left]<=height[right]) left++;
        else{
            right--;
         }
        
        }
        return maxi;
    }
};
