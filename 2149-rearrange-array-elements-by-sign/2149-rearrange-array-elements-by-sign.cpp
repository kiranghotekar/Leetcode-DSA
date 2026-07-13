class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>nums1(nums.size());
        int positive = 0 ;
        int negative = 1 ;  
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]>0){

               nums1[positive]=nums[i];
               positive +=2 ; 
            }
            else {
                nums1[negative]=nums[i];
                negative +=2 ; 
            }
        
        }
        return nums1;
    }
};