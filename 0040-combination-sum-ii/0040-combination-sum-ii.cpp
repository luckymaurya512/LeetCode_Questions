class Solution {
    public:
    void f(vector<int>&candidates, int target, int start, vector<int>&temp, vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(i>start && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target) break;
            temp.push_back(candidates[i]);
            f(candidates, target-candidates[i], i+1, temp, ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>temp;
        vector<vector<int>>ans;
        sort(candidates.begin(), candidates.end());
        f(candidates, target, 0, temp, ans);
        return ans;
    }
};