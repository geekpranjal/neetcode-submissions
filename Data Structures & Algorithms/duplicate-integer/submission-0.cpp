class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        for(auto num : nums){
            mp[num]++ ;

            if(mp[num]== 2){
                return true ;
            }
        }
        return false ;


        
    }
};