//GEEKFORGEEK JOB-A-THON
#include<iostream>
using namespace std;
int main(){
	int count=0,count_x=0;
	for(int i=1;i<=1000;i++){
		if (i%3==0 && i%5==0 )
			count++;
		if(i%3 == 0 || i%5==0){
			count_x++;
		}
	}
	cout << count+count_x;
}
//SECOND QUESTION

//N=8,S="11001100" 
//OUTPUT - YES
//Flipping 3rd and 4th coin together and 7th 
//and 8th coin together will do the task

//N=8,S="10010100"
//OUTPUT - NO
// It is not possible to make the gold 
// colored side of every coin facing up


#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    string flipCoins(int N, string s){
        // Your code goes here
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
                count++;
        }
        if(count%2==0){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
int main(){
    int T;
    cin >> T;
    while(T--){
        int n; 
        cin >> n ; 
        string s; 
        cin >> s; 
        Solution obj;
        string ans = obj.flipCoins(n , s);
        cout << ans << "\n";
    }
}
 