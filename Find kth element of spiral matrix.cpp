//Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained while traversing the matrix spirally. You need to complete the method findK which takes four arguments the first argument is the matrix A and the next two arguments will be n and m denoting the size of the matrix A and then the forth argument is an integer k. The function will return the kth element obtained while traversing the matrix spirally.



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int top=0;
 	   int bottom=n-1;
 	   int left=0;
 	   int right=m-1;
 	     int cnt=0;
 	   while(top<=bottom && left<=right)
 	   {
 	     
 	       for(int i=left;i<=right;i++)
 	       {
 	           cnt++;
 	           if(cnt==k)
 	           {
 	                return a[top][i];
 	           }
 	       }
 	       top++;
 	       
 	       for(int i=top ;i<=bottom ;i++)
 	       {
 	           cnt++;
 	           if(cnt==k)
 	           {
 	               return a[i][right];
 	           }
 	         
 	       }
 	         right--;
 	       
 	       
 	       if(top<=bottom){
 	       for(int i=right;i>=left;i--)
 	       {
 	           cnt++;
 	           if(cnt==k)
 	           {
 	               return a[bottom][i];
 	           }
 	       }
 	       bottom--;
 	       }
 	       
 	       if(left<=right){
 	       for(int i=bottom;i>=top;i--)
 	       {
 	           cnt++;
 	           if(cnt==k)
 	           {
 	               return a[i][left];
 	           }
 	       }
 	       left++;
 	       }
 	   }
 		return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends
