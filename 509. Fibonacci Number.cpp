class Solution {
public:
    int fib(int n) {
       //  if(n==0)
       //      return 0;
       //  if(n==2||n==1)
       //      return 1;
       // int x =fib(n-1)+fib(n-2);
       //  return x;
        
        
        ////////////////////////////////
   /*     int s1=0,s2=1,ans=0;
        for(int i=2;i<=n;i++)
        {       ans=s1+s2;
        s1=s2,s2=ans;
    }
        if(n==0)
            return 0;
        else if(n==1||n==2)
            return 1;
        else
        return ans;*/
        
        ///////////////////
        // this one is fastest
    int a[31]={0};
        a[0]=0;
        a[1]=1;
        a[2]=1;
        
        for(int i=3;i<=30;i++)
        {  a[i]=a[i-1]+a[i-2];   
    }
        
        return a[n];
    }
};
