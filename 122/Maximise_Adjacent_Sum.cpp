#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0; i<n; i++){
	        int tmp;
	        cin>>tmp;
	        v.push_back(tmp);
	    }
	    long long sum = 0;
	    sort(v.begin(), v.end());
	    for(int i=2; i<n; i++){
	        sum= sum + (long long)2*(long long)v[i];
	    }
	    sum += v[0] + v[1];
	    cout<<sum<<endl;
	}

}