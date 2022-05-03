class Solution {
public:
    bool isValid(int i,int j,int m,int n)
    {
        return i>=0 && j>=0 && i<m && j<n;
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
       
        int kX=king[0],kY=king[1];
        int rows[8]={0,0,-1,1,1,-1,1,-1};
        int cols[8]={-1,+1,0,0,+1,-1,-1,+1};
        map<pair<int,int>,int>q;
        for(auto pts:queens)
        {
            q[{pts[0],pts[1]}]++;
        }
        vector<vector<int>>ans;
        for(int index=0;index<8;index++)        //searching in all possible directions;
        {
            int i=kX,j=kY;    
            
            while(isValid(i,j,8,8))
            {
                i+=rows[index];
                j+=cols[index];
                if(q.find({i,j})!=q.end())
                {
                    ans.push_back({i,j});
                    break;
                }
            }
        }
        return ans;
        
        
        
        
    }
};