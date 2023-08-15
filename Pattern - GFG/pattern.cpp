//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        int topSpace=n-1;
        int topStar=1;
        int bottomSpace=0;
        int bottomStar=n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=topSpace;j++)cout<<" ";
            for(int k=1;k<=topStar;k++)cout<<"* ";
            cout<<endl;
            topStar++;
            topSpace--;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=bottomSpace;j++)cout<<" ";
            for(int k=1;k<=bottomStar;k++)cout<<"* ";
            cout<<endl;
            bottomSpace++;
            bottomStar--;
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends