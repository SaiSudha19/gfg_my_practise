//There are N bags with diamonds in them. The i'th of these bags contains A[i] diamonds. If you drop a bag with A[i] diamonds, it changes to A[i]/2 diamonds and you gain A[i] diamonds. Dropping a bag takes 1 minute. Find the maximum number of diamonds that you can take if you are given K minutes.


//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int arr[], int n, int k) {
        // code here
        priority_queue<int> qu;
        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            qu.push(arr[i]);
        }
        
        int i = 0;
        while(i<k)
        {
            int num = qu.top();
            
            qu.pop();
            ans+= num;
            int half = num/2;
            qu.push(half);
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
