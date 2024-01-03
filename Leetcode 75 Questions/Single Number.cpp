class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // taking XOR of all numbers,,, only single one remain
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
            ans = ans^nums[i];

        return ans;
    }
};
