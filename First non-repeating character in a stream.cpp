//Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> freq(26, 0);
        queue<char> que;
        string ans;
    
        for (int i = 0; i < A.size(); i++) {
            freq[A[i] - 'a']++;
        
            if (freq[A[i] - 'a'] <= 1)
                que.push(A[i]);
            
            int flag = 0;
        
            while (!que.empty()) {
                char x = que.front();
                if (freq[x-'a'] == 1) {
                    ans += x;
                    flag = 1;
                    break;
                } else {
                    que.pop();
                }
            }
        
            if (que.empty() && flag == 0)
                ans += '#';
        }
        
        return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
