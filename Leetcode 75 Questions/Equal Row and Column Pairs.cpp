class Solution {
public:
    bool isSame(vector<int> a1 ,vector<vector<int>>& grid, int j, int n)
    {

        for(int i = 0 ; i < n ; i++)
            if(a1[i] != grid[i][j])return false;
        return true;
    }
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;

        for(int i = 0 ; i < n ; i++)
        {
            auto a1 = grid[i];
            for(int j = 0 ; j < n ; j++)
            {
                if(isSame(a1 , grid , j,n))
                    ans++;
            }
        }
        return ans;
    }
};
