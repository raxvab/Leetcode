class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string > v;
        string st="";
        int mx = INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
               { v.push_back(st);
                int x =st.size();
                mx = max(x,mx);
                st = "";}
            else st += s[i];
        }
        if(st.size()>0){
            int x =st.size();
                mx = max(x,mx);
            v.push_back(st);
            st = "";
            
        }
        
        vector<string> v1;
        for(int i=0;i<mx;i++)
        {
           
            string temp="";
            for(auto j:v)
            {
                if(i<j.size())
                    temp+=j[i];
                else
                    temp+=' '; 
            }            
v1.push_back(temp) ;       
        }
            
           
            for(int i=0;i<v1.size();i++)
            {
                int flag=0;
                string temp="";
                for(int j=v1[i].size()-1;j>=0;j--)
                {
                    if(v1[i][j]==' '&& flag==0)
                        continue;
                        else
                        {
                            temp=v1[i][j]+temp;flag=1;
                        }
                    
                }    
                v1[i]=temp;
                
            }
            
            

    
        
        return v1;
    }
};