// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> v;
        
        int lo=0;
        int hi= n-1;
        for(int i=lo;i<=hi;i++)
        if(a[i]==key)v.push_back(i),i=hi+1;
          for(int i=hi;i>=lo;i--)
        if(a[i]==key)v.push_back(i),i=-1;
        if(v.empty())
        return {-1,-1};
        return v;
    }
  
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends