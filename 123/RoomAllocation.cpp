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
	    int rooms = 0;
	    for(int i=0; i<n; i++){
	        rooms += v[i]/2;
	        if(v[i]%2 != 0) rooms += 1;
	    }
	    cout<<rooms<<endl;
	}
return 0;
}