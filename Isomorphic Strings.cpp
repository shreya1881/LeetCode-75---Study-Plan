class Solution {
public:
    bool isIsomorphic(string s, string t) {
         unordered_map<char, char> charCount;
   
    // iterating over str1 and str2
    for (int i = 0; i < s.length(); i++)
    {
       
        // if str1[i] is a key in charCount
        if (charCount.count(s[i]))
        {
           
            // checking if the value in charCount for key
            // str1[i] is equal to str2[i]
            if (charCount[s[i]] != t[i]) {
                return false;
            }
        }
        // if str2[i] is not a value in charCount
        else {
            // checking if str2[i] is already a value in
            // charCount
            vector<char> values;
            for (auto it : charCount) {
                values.push_back(it.second);
            }
            if (find(values.begin(), values.end(), t[i])
                != values.end()) {
                return false;
            }
            else {
                charCount[s[i]] = t[i];
            }
        }
    }
    return true;
    }
};
