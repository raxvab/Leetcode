class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        int n = ops.size();
        
        vector<int> arr;
        
        for (int i=0; i<n; i++){
            
            if (ops[i] == "D"){
                
                arr.push_back(arr[arr.size()-1]*2);
                
            }
            
            else if (ops[i] == "C"){
                
                arr.pop_back();
                
            }
            
            else if (ops[i]=="+"){
                
                arr.push_back(arr[arr.size()-1]+arr[arr.size()-2]);
                
            }
            
            else {
                
                int element = stoi(ops[i]);
                arr.push_back(element);
                
            }
            
        }
        
        int sum = 0;
        
        for (int i =0; i<arr.size(); i++){
            
            sum = sum + arr[i];
            
        }
        
        return sum;
        
    }
};