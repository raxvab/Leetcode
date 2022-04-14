class Solution {
public:
    
    int evalRPN(vector<string>& t) {
        stack<int>s;
       // stack<string>so;
        
        for(int i=0;i<t.size();i++)
        {
          if(t[i]=="+" or t[i]=="-" or t[i]=="*" or t[i]=="/")
          
          {
              
               int x = s.top(); 
            s.pop();
                int y = s.top();
            s.pop();
                
                if(t[i]=="+")        
                    s.push(x+y);
                else if(t[i]=="-")   
                    s.push(y-x);
                else if(t[i]=="*")   
                    s.push(x*y);
                else                
                    s.push(y/x);
                
            }
        else{
                s.push( stoi(t[i]) );
        }
            }  
              
              /* so.push(t[i]);
            else
                 sn.push(stoi(t[i]));
            
        }
        while(!so.empty())
        {
            int x=sn.top();
                sn.pop();
                int y=sn.top();
                sn.pop();
            
                        if(so.top()=="+")
                        sn.push(x+y),so.pop();
                      else if(so.top()=="-")
                      sn.push(x-y),so.pop();
                      else if(so.top()=="*")
                        sn.push(x*y),so.pop();
                      else
                      sn.push(x/y),so.pop();
        }        
        
        return sn.top();*/
    
        return s.top();
        
        
    }
};