class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>pre(n,0) ;
        vector<int>suf(n,0) ;
        vector<int>ans(n,0) ;
        pre[0] = 1 ;
        int p = nums[0] ;

        for(int i = 1 ; i < n ; i++){
            pre[i] = p ;
            p*= nums[i] ;
        }

        suf[n-1] = 1 ;
        int s = nums[n-1] ;
        for(int i = n - 2 ; i >= 0 ; i--){
            suf[i] = s ;
            s*= nums[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            ans[i] = pre[i]*suf[i] ;

        }

        return ans  ;

    }
};
