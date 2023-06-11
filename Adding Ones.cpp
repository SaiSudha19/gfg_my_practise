//You start with an array A of size N. Initially all elements of the array A are zero. You will be given K positive integers. Let j be one of these integers, you have to add 1 to all A[i], where i ≥ j. Your task is to print the array A after all these K updates are done.


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int i = 0; i < k; i++)
            a[updates[i]-1]++;
        for(int i = 1; i < n; i++){
            a[i] += a[i - 1];
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n]={0}, updates[k]={0};
		for(int i = 0; i < k; i++)
		cin>>updates[i];
		Solution ob;
		ob.update(a, n, updates, k);
		
		for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
		
		cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
