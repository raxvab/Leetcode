// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
void reverse(string& str)
{
    int n = str.length();
  
    
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
    int PalinArray(int a[], int n)
    {
        int ans=0;
    for(int i=0;i<n;i++)
    {
        string s = to_string(a[i]);
        string r = s;
        reverse(s);
        if(s==r)
        ans++;
    }
    
if(ans==n)
return 1;

return 0;
// else 0;
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
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends