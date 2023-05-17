//Given an array arr[] of N integers arranged in a circular fashion. Your task is to find the maximum contiguous subarray sum.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int max_subarray(int arr[],int n)
    {
        int sum=0;
        int maxsum=arr[0];
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
            sum=0;
        }
        return maxsum;
    }
    int circularSubarraySum(int arr[], int num){
        int max_sub=max_subarray(arr,num);
        if(max_sub<0)
        return max_sub;
        int sum=0;
        for(int i=0;i<num;i++)
        {
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        int max_cir=max_subarray(arr,num)+sum;
        return max(max_cir,max_sub);
        // your code here
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
