//Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’ under modulo ‘m’.

//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int modInverse(int A, int M)
    {
           for (int X = 1; X < M; X++)
           {
               if (((A % M) * (X % M)) % M == 1)
               return X;
           }
           return -1;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}
// } Driver Code Ends
