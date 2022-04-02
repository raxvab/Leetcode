class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
    int n=a.size();    int l[n];
 
    l[0] = 1;
 
 
   
         for(int i=0;i<n;i++)
        {
    l[i] = 1;
           for(int j=0;j<i;j++)
        {
            if(a[j]<a[i] && l[i]<l[j]+1)
            l[i]=l[j]+1;
         
        }
            
        }
        
      
   
         return *max_element(l, l + n);
    }
};