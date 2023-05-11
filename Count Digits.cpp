/*Given a number N. Count the number of digits in N which evenly divides N.*/
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        int a,count=0;
        int x=n;
        while(n!=0)
        {
            a=n%10;
            if(a!=0)
            {
                if(x%a==0)
                count++;
            }
            n=n/10;
        }
        return count;
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
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
