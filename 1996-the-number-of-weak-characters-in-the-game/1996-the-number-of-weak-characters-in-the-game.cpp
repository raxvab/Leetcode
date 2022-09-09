class Solution {

// static bool mycomp(vector<int>& A, vector<int>& B)
// {
//     //if first element of first 
//     //row<first element of second row
//     if (A[0] < B[0])
//         return true; //no swap
//     //other wise swap the rows
//     return false;
// }
//   public:
//     int numberOfWeakCharacters(vector<vector<int>>& props) {
//        sort(props.begin(), props.end(), mycomp);
// //        std::sort(props.begin(), props.end(), [this](vector<int> a, vector<int> b){
// //              return (compareFun(a,b));
// // });
      
//       vector<int > a,b;
//       int count=0;
//      for( auto i: props)
//         a.push_back(i[0]), b.push_back(i[1]);
//       std::vector<int>::iterator upper1;
//       for( int i=0;i<a.size();i++){
  
//     upper1 = upper_bound(a.begin(), a.end(),a[i] );
//       if( upper1!=a.end())
//       {
//         int ind=upper1-a.begin();
//         if( b[ind]>b[i])
//           count++;
//       }
        
      // }   
//       for( auto i: props)
//      cout<<i[0]<<" "<<i[1]<<endl;
      
//       cout<<endl<<endl;
//       for( auto i: a)
//         cout<<i<<" ";
      
//       cout<<endl;
//       for( auto j: b)
//         cout<<j<<" ";
      
      public:
     //handling the edge case while sorting
     static bool comp(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
     }
     int numberOfWeakCharacters(vector<vector<int>> &properties)
     {
          sort(properties.begin(), properties.end(), comp); //sorting the array
       int mtn = INT_MIN;                    
         
 int ans = 0;

          for (int i = properties.size() - 1; i >= 0; i--)
          {
               if (properties[i][1] < mtn) // if the second parameter is also less increase the ans
                    ans++;
               mtn = max(mtn, properties[i][1]);
          }
          return ans;
    }
};