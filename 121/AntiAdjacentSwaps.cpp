// https://www.codechef.com/problems/ANADSW

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n, 0);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    if(n > 3) cout<<"YES"<<endl;
	    else{
	        if(n == 1) cout<<"YES"<<endl;
	        else if(n == 2){
	            if(arr[1] < arr[0]){
	                cout<<"NO"<<endl;
	            }
	            else{
	                cout<<"YES"<<endl;
	            }
	        }
	        else{
	            if(arr[0] <= arr[1] && arr[1] <= arr[2]) 
	            cout<<"YES"<<endl;
	            else{
	                swap(arr[0], arr[2]);
	                if(arr[0] <= arr[1] && arr[1] <= arr[2]) 
	                cout<<"YES"<<endl;
	                else cout<<"NO"<<endl;
	            }
	        }
	    }
	}
	return 0;
}