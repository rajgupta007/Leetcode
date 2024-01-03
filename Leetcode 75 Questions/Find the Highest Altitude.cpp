class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = gain[0];
        int n = gain.size();
        int sum = gain[0];

        for(int i = 1 ; i < n ; i++)
        {
            sum += gain[i];
            cout << sum <<" ";
            maxi = max(maxi , sum);
        }
        return maxi > 0 ? maxi : 0;

    }
};
