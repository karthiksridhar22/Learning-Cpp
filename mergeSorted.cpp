class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1; 
        int p = m + n -1; 
        while(i >= 0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[p] = nums1[i];
                i = i-1;
            }
            else{
                nums1[p] = nums2[j];
                j = j-1;
            }
            p = p-1;
        }

        while(i >= 0){
            return;
        }

        while(j >= 0){
            nums1[p] = nums2[j];
            j = j-1;
            p = p-1;
        }
    }
};