class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
       
        int n=nums.size();
vector<long long int> v(n);
       v[0]=nums[0];
        for(int i=1;i<n;i++)
        {
          v[i]=nums[i]+v[i-1];
        }
long long int m=INT_MAX;
        int ind=0;
        for(int i=0;i<n;i++)
        {
     
            if(i!=n-1)
            {
               
                  if(m>abs((v[i]/(i+1))-((v[n-1]-v[i])/(n-i-1))))
                 {  m=abs((v[i]/(i+1))-((v[n-1]-v[i])/(n-i-1)));
                   ind=i;}
       
            }
            else if(m>(v[i]/(i+1)))
                   {
                    m=v[i]/(i+1);
                    ind =i;
                }
          
        
        }
        
       
     //  cout<<m;
        return ind;
    }
};