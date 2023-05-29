/*
Given a dictionary of words where each word follows CamelCase notation, print all words (in lexicographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.

Example: GeeksForGeeks matches the pattern "GFG", because if we combine all the capital letters in GeeksForGeeks they become GFG.

CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include PowerPoint and Wikipedia, GeeksForGeeks, CodeBlocks, etc.
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> ans;
        for(int i=0;i<Dictionary.size();i++){
            int j=0;
            string s=Dictionary[i];
            for(int k=0;k<s.size();k++){
                if(isupper(s[k])){
                    if(j==Pattern.size()){
                        break;
                    }
                    if(s[k]==Pattern[j]){
                        j++;
                    }
                    else if(s[k]!=Pattern[j] && j!=Pattern.size()){
                        break;
                    }
                }
            }
            if(j==Pattern.size()){
                ans.push_back(s);
            }
        }
        if(ans.size()==0){
            ans.push_back("-1");
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
