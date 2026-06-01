class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }
    unordered_map<char,int>mpc;
    unordered_map<char,int>mpt;

    for(int i=0; i< s.size();i++){
        mpc[s[i]]++;
    }
    for(int i=0; i< t.size();i++){
        mpt[t[i]]++;
    }
    if(mpc==mpt){
        return true;
    }else{
        return false;
    }
}
};
