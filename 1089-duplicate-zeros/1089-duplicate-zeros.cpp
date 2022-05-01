class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        if(a.size()>1){
    int j=a.size()-1;
        bool flag=false;
        
        for(int i=0;i<j;i++)
        {    if(a[i]==0)
                j--;
        if(i==j)
            flag=true;
        
        }
        int i=a.size()-1;
      while(i>=0){
        
              if(a[j]!=0)
            {
            a[i]=a[j];
          
                  i--;
                
            }
            
        else 
        { if(i==a.size()-1 and flag==false)
        {
            a[i]=0;
            i--;
            
        }
         else{
            a[i]=0;
           
            i--;
            a[i]=0;
            i--;
         }
        }
            j--;
           
}

    }
    }
};