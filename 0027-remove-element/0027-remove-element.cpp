class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>temp;
        int index=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
        
    }
};