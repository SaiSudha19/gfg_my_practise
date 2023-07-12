//Given an array arr of N integers, the task is to check whether the frequency of the elements in the array is unique or not. Or in other words, there are no two distinct numbers in array with equal frequency. If all the frequency is unique then return true, else return false.




//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>ans;
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i-1]==ans[i])
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends
