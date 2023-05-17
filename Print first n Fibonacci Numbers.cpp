//Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        if(n==1) return {1};
        vector<long long>p;
        p.push_back(1);
        p.push_back(1);
        for(long i=2;i<n;i++)
        {
         long long a=p[i-1]+ p[i-2];
         p.push_back(a);
        }
        return p;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends
