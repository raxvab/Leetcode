class Solution {
public:
      int longestPalindrome(string s) {
        
      map<char,int> a;

  
        for ( auto i:s) 
            a[i] ++;


int ans=0;
                    bool flag=false;

for(auto i:a)
{
    if(i.second%2==1)
    {
        flag=true;
        break;
    }
}
          for(auto i:a)
          {
              ans+=((i.second)/2)*2;
          }
          
     if(flag)
         ans+=1;
        return ans;
    }
   

};