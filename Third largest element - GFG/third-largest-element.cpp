// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int nums[], int n)
    {
        if(n<3)
        return -1;
        long second=LONG_MIN;
        long first =LONG_MIN;
        long third=LONG_MIN;
        for(int i=0;i<n;i++)
            {
                int j=nums[i];
                if(first==j||second==j||j==third)
                    continue;
                if(j>first)
                    {third=second;
                     second=first;
                     first=j;
                    }
                else if(j>second )
                   {   third=second;second=j;
                 
                   }
                else if(j>third) 
                    third =j;
                
            }
     

        return third==LONG_MIN?first:third;
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
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends