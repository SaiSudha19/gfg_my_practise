//Given an array A[] consisting of 0’s and 1’s. A flip operation is one in which you turn 1 into 0 and a 0 into 1. You have to do at most one “Flip” operation of any subarray. Formally, select a range (l, r) in the array A[], such that (0 ≤ l ≤ r < n) holds and flip the elements in this range to get the maximum ones in the final array. You can possibly make zero operations to get the answer.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int onesCount = 0, sum = 0, maxSum = 0;
        //Using Kadane's algorithm to find maximum subarray sum
        //Treating 1 as -1 and 0 as 1 as we want more no. of zeroes than ones so that when we flip, we will get more no. of ones than zeroes
        for(int i=0;i<n;++i) {
            if(a[i] == 1) {
                ++onesCount;
                sum += -1;
            }
            else {
                sum += 1;
            }
            maxSum = max(maxSum, sum);
            if(sum < 0) {
                sum = 0;
            }
        }
        return onesCount + maxSum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends
