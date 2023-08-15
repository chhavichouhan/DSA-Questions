//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space=n-1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)cout<<"*";
            for(int j=1;j<=space;j++)cout<<"  ";
            for(int j=1;j<=i;j++)cout<<"*";
            space--;
            cout<<endl;
        }
        space=1;
        for(int i=n-1;i>=1;i--)
        {
            for(int j=i;j>=1;j--)cout<<"*";
            for(int j=1;j<=space;j++)cout<<"  ";
            for(int j=i;j>=1;j--)cout<<"*";
            space++;
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