
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
unsigned int findfact(unsigned int a){
    if (a == 0)
        return 1;
    return a*findfact(a-1);
}

int nCrModM(int n, int r, int m) {
    // Code here
    int top=findfact(n);
    int bottom=findfact(n-r)*findfact(r);
    int ncr=top/bottom;
    return ncr%m;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, r, m;
		cin >> n >> r >> m;
		Solution obj;
		int ans = obj.nCrModM(n, r, m);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends