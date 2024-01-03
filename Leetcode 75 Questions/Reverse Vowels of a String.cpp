class Solution {
public:
    bool isVowel(char ch)
    {
        set<char> vowel = {'a','e','i','o','u' , 'A', 'E' , 'I', 'O', 'U'};
        return vowel.find(ch) != vowel.end();        
        
    }
    string reverseVowels(string s) {
        int start = 0 , end = s.size()-1;

        while(start < end)
        {
            while(start < end && (!isVowel(s[start])))start++;

            while(start < end && (!isVowel(s[end])))end--;

            swap(s[start++], s[end--]);
        }
        return s;
    }
};
