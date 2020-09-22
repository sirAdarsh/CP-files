#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
    	cin >> arr[i];
	}
	
	unordered_map<int,int> m;
	
	for(int i=1; i<=n; i++){
		m[i - arr[i]] += arr[i];
	}
	int max= 0;
	for(auto i : m){
		if(i.second>max){
			max=i.second;
		}
	}
    cout<<max<<endl;
}

