class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size() ;
        int n2 = s2.size() ;
        sort(s1.begin() , s1.end()) ;
        if( n1 > n2 ){
            return false ;
        }

        int l = 0 ;
        int r = n1 - 1 ;

        while( r < n2){
            string m = s2.substr(l , n1);
            sort(m.begin() , m.end()) ;
            if( s1 == m ){
                return true ;
            }
            l++ ;
            r++ ;
            
            

            
        }
        

        return false ;
        
    }
};
