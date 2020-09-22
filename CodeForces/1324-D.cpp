/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    
    for(int i=0; i<n; i++){
    	cin >> A[i];
	}
	for(int i=0; i<n; i++){
		cin >> B[i];
		A[i] = A[i]-B[i];
	}
	sort(A.begin(), A.end());
	
	ll ans = 0;
	
	for(int i=0; i<n; i++){
		
		auto it = A.begin();
		
		it = upper_bound(A.begin()+i+1 , A.end(), (-1*A[i]));
		if(it!=A.end()){
			int pos = it-A.begin();
			ans += (n-pos);
		}
	}
	
	cout<<ans<<endl;
    
}

