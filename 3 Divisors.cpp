//You are given a list of q queries and for every query, you are given an integer N.  The task is to find how many numbers(less than or equal to N) have number of divisors exactly equal to 3.

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
bool isPrime(long long n){
       if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
    }
    
    int count(long long n){
        int count = 0;
        for(long long i=2;i<=sqrt(N);i++){
            if(isPrime(i)) count++;
        }
        return count;
    }
    
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int>ans;
        
        for(int i=0;i<q;i++)
        {
           int b= count(query[i]);
           ans.push_back(b);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
