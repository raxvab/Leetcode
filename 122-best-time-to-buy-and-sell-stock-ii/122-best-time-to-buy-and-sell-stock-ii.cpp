class Solution {
public:
    int maxProfit(vector<int>& p)
    {
       
         
        int m=p[0];
        int prof=INT_MIN;
        int sum=0;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]>p[i-1])
                sum+=p[i]-p[i-1];
//                       m=min(m,p[i]);

//              if(p[i]<=prof)
//                 {sum+=prof;prof-=p[i];m=p[i];
//            }
//            prof=max(prof,p[i]-m);
//             //sum+=prof;
            cout<<sum<<"*"<<i<<" ";
            
    }

        
        return sum;
    }
};