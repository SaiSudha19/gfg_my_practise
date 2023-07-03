//Given an array arr[] of n positive integers. The task is to find the maximum of j - i subjected to the constraint of arr[i] <= arr[j].


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> left(n), right(n);
    left[0] = 0;
    for (int i = 1; i < n; i++) {
        left[i] = (arr[i] < arr[left[i - 1]]) ? i : left[i - 1];
    }
    right[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = (arr[i] > arr[right[i + 1]]) ? i : right[i + 1];
    }

    int Diff = 0;
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (arr[left[i]] <= arr[right[j]]) {
            Diff = max(Diff, j - i);
            j++;
        } else {
            i++;
        }
    }

    return Diff;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
