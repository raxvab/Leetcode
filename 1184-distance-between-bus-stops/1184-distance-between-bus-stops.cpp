class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int s, int d) {
        int a=0,b=0,c=0;
        int sum=accumulate(distance.begin(),distance.end(),0);
 if(s>d)
     swap(s,d); 
 a=accumulate(distance.begin()+s,distance.begin()+d,0);
       
 
      
        return min(a,sum-a);
    }
};