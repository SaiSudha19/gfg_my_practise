//Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans ;
            int n = s.length() ;
            int size = (1 << n) ;
            for(int i=1; i<size; i++){
                string res = "" ;
                for(int j=0; j<n; j++){
                     if((1<<j)&i)
                      res += s[j] ;
                }
                ans.push_back(res) ;
            }
            sort(ans.begin(), ans.end()) ;
            return ans ;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
