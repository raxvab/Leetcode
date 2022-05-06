class Solution {
public:
    int minimumSwap(string s1, string s2) {
        
        if(s1.length()!=s2.length())
            return -1;
        
            int x1=0,y1=0,x2=0,y2=0;
        
        for(auto i:s1)
           { if(i=='x')
                x1++;
        else y1++;}
         for(auto i:s2)
          {  if(i=='x')
                x2++;
        else y2++;}
       
        if((x1+x2)%2==1||(y1+y2)%2==1)
            return -1;
        
      ///////////////////////////////  
        int c1=0,c2=0;
        for(int i=0;i<s1.length();i++)
            if(s1[i]==s2[i])
                continue;
        else if(s1[i]=='x'&&s2[i]=='y')
            c1++;
         else if(s1[i]=='y'&&s2[i]=='x')
            c2++;
        
     int res=c1/2 + c2/2;
        if(c1%2!=0)
        {
            res+=2;
        }
        return res;
        
        
        
        
    }
};