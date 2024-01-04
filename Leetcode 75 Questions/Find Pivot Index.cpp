class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum = 0, lsum = 0 , rsum = 0;
        for(auto i : nums)tsum += i;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            
            if(i != 0)
            {
                lsum = lsum + nums[i-1];
            }
            rsum = tsum - nums[i] - lsum;
            if(lsum == rsum)return i;
        }
        return -1;
    }
};
