//Given a temperature in celsius C. You have to convert it in Fahrenheit.
 

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    double celciusToFahrenheit(int C){
        //code here
         return ((C * 9.0 / 5.0) + 32.0);
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
        cout <<setprecision(2)<<fixed<< ob.celciusToFahrenheit(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
