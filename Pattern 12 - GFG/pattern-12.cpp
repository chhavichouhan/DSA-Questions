//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space=n*2-2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)cout<<j<<" ";
            for(int k=1;k<=space;k++)cout<<" ";
            for(int k=1;k<=space;k++)cout<<" ";
            for(int j=i;j>=1;j--)cout<<j<<" ";
            space-=2;
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends