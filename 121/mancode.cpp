// https://www.codechef.com/problems/MANCODE?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	        cout<<n/2 + (n%2!=0)<<" ";
	        cout<<n/3 + (n%3!=0)<<endl;
	    }
return 0; 
}