/*
Santa is still not married. He approaches a marriage bureau and asks them to hurry the process. The bureau checks the list of eligible girls of size N and hands it over to Santa. Santa being conscious about his marriage is determined to find a girl with maximum connections so that he can gather more information about her. Accordingly, he looks to figure out the maximum number of girls (from the list) who know each other to achieve the above purpose.

In order to finalize the girl, he needs to find the Kth prime. Where k = largest group of girls who know each other. Considering Santa's poor knowledge of Maths, he seeks Banta's help for the answer. Now you, a fan of Santa Banta Jokes, take this prestigious opportunity to solve the problem.

In case no of connections is zero, print "-1". Here the connection between girls is represented by a 2-D array g of dimension M*2, where M is the number of connections.

Note :
1. Suppose girl "a" knows girl "b" and girl "b" knows girl "c", then girl "a" also knows girl "c". Transitivity holds here.
2. Consider 1 as a composite number.
3. For precompute function given in the template you just have to complete it and use it wherever required, do not call it again and again, it is already being called by driver function before executing test cases. 
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    int prime[100001];
    
    bool isPrime(int n)
    {
        if(n==1)return false;
        if(n==2 or n==3)return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        
        return true;
    }
    
    int count= 0;
    void precompute(){
        for(int i=2;i<=1000000;i++)
        {
            if(isPrime(i))
            {
                count++;
                prime[count]= i;
            }
        }
        prime[1]=-1;
    }
    
    int dfs(int node,vector<bool> &vis,vector<vector<int>> &g)
    {
        vis[node]=true;
        
        int ans=0;
        for(auto it: g[node])
        {
            if(vis[it]==false)
            {
                ans+= 1+ dfs(it,vis,g);
            }
        }
        
        return ans;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        vector<bool> vis(n+1, false);
        
        int maxi = -1;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                int val =1 + dfs(i,vis,g);
                maxi= max(maxi,val);
            }
        }
        
        if(maxi==-1)return -1;
        
        return prime[maxi];
        
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends
