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
    
    int n,k;
    cin >> n >> k;
    
    int fwd = 1;
    int bkd = 1 + k;
    
    int cnt = 0;
    
    int part = 1;
    
    while( cnt != k ){
    	
    	if(part%2){
    		cout << fwd <<" ";
    		fwd++;
		}
		else{
			cout << bkd << " ";
			bkd--;
		}
		part++;
		cnt++;
    	
	}
	
//	cout<<endl;
//	cout <<part;
	
	if(part%2)
	for(int i=fwd; i<=bkd; i++){
		cout << i <<" ";
	}
	else{
		for(int i=bkd; i>=fwd; i--){
			cout << i <<" ";
		}
	}
	for(int i=2+k; i<=n; i++){
		cout << i<<" ";
	}
	cout <<endl;
    
}

