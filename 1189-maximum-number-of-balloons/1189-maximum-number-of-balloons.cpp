class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s={"balloon"};
      int b=0,a=0,l=0,o=0,n=0;
       int random=0;
        int count=0;
        for(auto i:text)
       i=='a'?a++:(i=='b'?b++:(i=='l'?l++:(i=='o'?o++:(i=='n'?n++:random++))));
      
       // cout<<a<<b<<l<<o<<n<<random;
        return min ( {b , a,l/2 , o/2 ,n}  ) ;
        
    }
};