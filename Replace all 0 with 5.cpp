//Given a number N. The task is to complete the function convertFive() which replaces all zeros in the number with 5 and returns the number.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    string s = to_string(n);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            s[i]='5';
        }
    }
    n = stoi(s);
    return n;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends
