class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int j=1;
        if(n%2==0)
        {for(int i=0;i<n/2;i++)
       { v.push_back(j);
       v.push_back(-j);
       j++;}
       }
        else
        {for(int i=0;i<n/2;i++)
       { v.push_back(j);
       v.push_back(-j);
       j++;
       }
            v.push_back(0);
        }
       
         
        return v;
    }
};