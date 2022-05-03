// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	set<int>s;
		while(A<=B){
		    s.insert(A);
		    A++;
		}
		for(int i=0;i<n;i++){
		    if(s.count(arr[i]))
		        s.erase(arr[i]);
		}
		
		return s.empty();
	}


		 

};
	

// { Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}






  // } Driver Code Ends