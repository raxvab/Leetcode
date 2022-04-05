class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,ans1=0,ind=0,lm=-1;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            ans1=max(ans1, min(height[i],height[j])*(j-i));
            
            if(height[i]<height[j])
                i++;
            else
              j--;
        }
//         for(int i=0;i<height.size();i++)
//         { int curr=height[i];
//             if(lm<height[i])
//                 lm=curr,ind=i;
//             else{
//                 int r=i-ind;
            
//             if(r*curr>ans)
//                 ans=r*curr;
//             }
         
            
//         }
        return ans1;
    }
};