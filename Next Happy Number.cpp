//For a given non-negative integer N, find the next smallest Happy Number. A number is called Happy if it leads to 1 after a sequence of steps. Wherein at each step the number is replaced by the sum of squares of its digits that is, if we start with Happy Number and keep replacing it with sum of squares of its digits, we reach 1 at some point.


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
bool solve(int n){
        if(n==1 || n==7)return true;
        if(n==2 || n==4 || n==8 || n==3 || n==9 || n==5 || n==6)return false;
        int sq_sum=0;
        while(n){
            int x=n%10;
            sq_sum+=(x*x);
            n/=10;
        }
        return solve(sq_sum);
    }
    int nextHappy(int n){
        // code here
        while(true){
            n++;
            if(solve(n))return n;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
