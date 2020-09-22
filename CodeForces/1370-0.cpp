/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool isPrime(int n){
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	if(n==3 || n==2){
    		cout<<1<<endl;
		}
		else{
			while(isPrime(n)){
				n--;
			}
			cout<<n<<endl;
	    		int i=n-1;
	    		while( n%i ){
	    			i--;
				}
				cout<<n/i<<endl;
		}
    	
	}
    
}

