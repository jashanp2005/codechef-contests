#define ll unsigned long long int
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll sum = n*(n+(ll)1);
	    sum = sum/(ll)2;
	    sum = sum - (ll)1;
	    sum = sum + n;
	    cout<<sum<<endl;
	}

}