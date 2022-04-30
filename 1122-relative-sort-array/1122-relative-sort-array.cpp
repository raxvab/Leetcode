class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    map<int,int> m;
        
        for(int i:arr1)
        {
            m[i]++;
            
        }
      //  arr1.erase();
        vector<int>v;
      for(auto i: arr2){
          int var=m[i];
            while(var--){
                v.push_back(i);
            }
          m[i]=0;
            
        }
    
     for(auto x:m)
     {
            if(x.second!=0){
                int c=x.second;
                while(c--)
                v.push_back(x.first);
           
            }
     }
 return v;}
};