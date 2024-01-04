class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int hash[2002] = {0};
        for(int i = 0 ; i < arr.size() ; i++)
            hash[arr[i] + 1000]++;
        
        set<int> myset;
        for(int i = 0 ; i < 2002 ; i++)
        {
            if(hash[i] != 0)
            {
                if(myset.find(hash[i]) != myset.end())
                {
                    return false;
                }
                myset.insert(hash[i]);
            }
        }
        return true;
    }
};
