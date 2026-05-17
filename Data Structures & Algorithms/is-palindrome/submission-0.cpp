class Solution {
public:
    bool isPalindrome(string s) {
        string full="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                full+=tolower(s[i]);
            }
        }
        int i=0;
        int j=full.length()-1;

        while(i<j){
            if(full[i]!=full[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
