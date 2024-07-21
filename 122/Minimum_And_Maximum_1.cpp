#define ll unsigned long long int
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    
	    ll tmp = n/2;
	    ll ans = tmp*(tmp+1);
	    if(n%2 == 0) cout<<ans<<endl;
	    else cout<<ans + tmp+1<<endl;
	}

}