class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0 , i;
        string residue ;
        for(i=0; i<s.size(); i++){
            if(k==count){
                break;
            }
            else{
                residue += s[i];
                if(s[i]==' '){
                    count++;
                }
            }
        }
        if(s[i-1]==' '){
            residue.pop_back();
        }
        return residue;
    }
};