class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if(n==1){
            return 0;
        }
        int jump = 0;
        int farthest = 0;
        int end_of_range = 0;
        for(int i=0;i<n-1;i++){
            farthest = max(farthest, i+nums[i]);
            if(i==end_of_range){
                jump++;
                end_of_range = farthest;
                if(end_of_range >= n-1){
                    return jump;
                }
            }
        }
        return jump;
        
    }
};