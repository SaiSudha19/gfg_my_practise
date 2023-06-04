/*Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.
It is guaranteed that the given equation is valid, and there are no leading zeros.*/


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
              int i=s.size()-1;
            string ans;
            while(i>=0){
                if(s[i]=='+'||s[i]== '-'||s[i]== '*'|| s[i]== '/'){
                    ans+=s[i];
                    i--;
                    continue;
                }
                string add="";
                while( i>=0 && !(s[i]=='+'||s[i]== '-'||s[i]== '*'|| s[i]== '/')){
                    add=s[i]+add;
                    i--;
                }
                ans+=add;
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
