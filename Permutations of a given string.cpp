//Given a string S. The task is to print all unique permutations of the given string in lexicographically sorted order.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v;
            sort(S.begin(),S.end());
            string str=S;
            v.push_back(str);
            while(true){
                std::next_permutation(str.begin(),str.end());
                if (str==S) break;
                v.push_back(str);
                
            }
            return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
