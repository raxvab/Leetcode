// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}


// } Driver Code Ends


vector<vector<int>> transpose(int a[][M], int n)
{
vector<vector<int>>v;
     int r = n;
    int c = sizeof(a[0])/sizeof(a[0][0]);
    
   for(int i=0;i<c;i++)
   {vector<int>v1;
       for(int j=0;j<r;j++)
       {
          v1.push_back(a[j][i]);
       }
       v.push_back(v1);
   }
   return v;
}
