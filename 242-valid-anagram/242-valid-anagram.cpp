class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            int k=s[i]-'a';
            arr[k]++;
        }
        int check[26]={0};
        for(int i=0;i<t.length();i++){
            int k=t[i]-'a';
            check[k]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=check[i]){
                return false;
            }
        }
        return true;
    }
};