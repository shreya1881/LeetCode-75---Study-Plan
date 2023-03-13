class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = s.length();
        int b = t.length();
        int i=0,j=0;
        int count=0;
        while(i<b && j<a){
            if(t[i]!=s[j]){
                i++;
            }
            else{
                count++;
                i++;
                j++;
            }
        }
        if(count==a)
        return true;
        else return false;
    }
};
