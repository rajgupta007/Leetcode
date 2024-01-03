class Solution {
public:
// Using two pointers
    int maxArea(vector<int>& heights) {
        int start = 0 , end = heights.size()-1;
        int maxA = 0;
        while(start < end)
        {
            int store = min(heights[start], heights[end])*(end - start);
            //cout << store <<"-- "; 
            maxA = max(maxA , store);

            if(heights[start] < heights[end])start++;
            else end--;
        }
        return maxA;
    }
};
