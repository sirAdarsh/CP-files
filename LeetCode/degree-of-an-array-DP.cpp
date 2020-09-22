#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(vector<int> arr){
	int n = arr.size();
	
	if(n==1){
		return 1;
	}
	
	int maxOcc=1;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
		if(m[arr[i]] > maxOcc){
			maxOcc=m[arr[i]];
		}
	}
	
	int ans = INT_MAX;
	
	for(int i=0; i<n; i++){
		m.clear();
		int occ=0;
		int t=0;
		for(int j=i; j<n; j++){
			if(m.find(arr[j])!=m.end()){
				m[arr[j]]++;
				t = m[arr[j]];
			}
			else{
				m[arr[j]]++;
			}
			occ++;
			if(t==maxOcc){
				if(occ < ans){
					ans = occ;
				}
				break;
			}
		}
	}
	return ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> arr = {1,2,3,4};
    cout<<solve(arr);
    
}

