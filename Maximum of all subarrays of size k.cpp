//Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
    int maxElement(int *arr,int st,int end){
        int maxi = arr[st];
        for(int i = st+1;i<end+1;i++) {
           maxi = max(maxi,arr[i]);
        }
        return maxi;
    }
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        int maxi = arr[0];
        vector<int> ans;
        for(int i=1;i<k;i++){
            maxi = max(maxi,arr[i]);
        }
        ans.push_back(maxi);
        for(int i=k;i<n;i++){
            if(maxi!=arr[i-k]){
                maxi = max(maxi,arr[i]);
            }
            else{
                maxi = maxElement(arr,i-k+1,i);
            }
            ans.push_back(maxi);
        }
        return ans;
}
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
