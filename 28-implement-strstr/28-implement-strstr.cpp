class Solution {
public:
    int strStr(string haystack, string needle) {
      if(!needle.size())
          return 0;
        
        int k=1;
        for(int i=0;i<haystack.size();++i)
        {   
            if(haystack[i]==needle[0]){
               
            //while(haystack[i+k]==needle[k]and k<needle.size())
              for (k = 1; k < needle.size(); ++k)
                   if (haystack[i + k] == needle[k])
                cout<<haystack[i +k]<<" "<<needle[k]<<"\n";//, k++;
                else break;
            if(k==needle.size())
                return i;
                
                }
          //  k=0;
        
        }
        return -1;
    }
};