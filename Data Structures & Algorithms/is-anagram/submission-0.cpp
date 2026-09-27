class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size() ;
        if(s.size() != t.size()){
            return false ;
        }
        unordered_map<char,int>mp ;
        for( auto ch : s ){
            mp[ch]++ ;
        }

        for(char ch : t ){
            mp[ch]-- ;
            if(mp[ch] < 0){
                return false ;
            }
        }
        return true ;
        
    }
};
