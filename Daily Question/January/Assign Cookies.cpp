class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());

        int i = 0 , j = 0 , ans = 0;
        int g_size = g.size() , s_size = s.size();
        while(i < g_size && j < s_size)
        {
            if(g[i] <= s[j])
            {
                ans++;  i++;  j++;
            }else
            {
                j++;
            }
        }
        return ans;
    }
};
