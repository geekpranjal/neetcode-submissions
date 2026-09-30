class Solution {
public:
    static bool compare(pair<int,int>&a , pair<int,int>&b){
        return a.second > b.second  ;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        vector<int>ans ;
        for(auto num : nums){
            mp[num]++ ;
        }
        vector<pair<int,int>>v(mp.begin() , mp.end()) ;

        sort(v.begin() , v.end() , compare) ;

        for(int i = 0 ; i < k ; i++){
            ans.push_back(v[i].first) ;
        }

        return ans ;


        
    }
};
