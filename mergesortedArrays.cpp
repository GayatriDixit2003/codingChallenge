class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int>temp(n+m);
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                temp[k]=nums1[i];
                i++;
                k++;
            }
            else{
                temp[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<m){
            temp[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n){
            temp[k]=nums2[j];
            j++;
            k++;
        }
        for(int i=0;i<n+m;i++){
            nums1[i]=temp[i];
        }
      
    }
};
