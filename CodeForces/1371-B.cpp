/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll sumDiv(ll n, ll r){
	ll ans=0;
	for(int i=1; i<=sqrt(n); i++){
		if(i>r){
			break;
		}
		if(n%i==0){
			if(i==(n/i)) ans+=i;
			else {
				if((n/i) <= r) ans += (i+(n/i));
				else ans += i;
			}
		}
	}
	return ans;
}

ll numOfDiv(ll n, ll r){
	ll ans=0;
	for(int i=1; i<=sqrt(n); i++){
		if(i>r){
			break;
		}
		if(n%i==0){
			if(i==(n/i)) ans++;
			else {
				if((n/i) <= r) ans += 2;
				else ans += 1;
			}
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	ll n, r;
    	cin >> n >> r;
    	ll n1, n2;
    	
    	ll ans=0;
    	
    	if(r>n){
    		n2 = r-n-1;
    		ll sum = n2*(n2+1)/2;
    		ans += sum;
		}
		
		cout << ans << endl; ///  1
		
		n1 = min(r,n);
		
		ll sum = n1*(n1+1)/2 ;
		cout << sum << endl; // 2
		
		ll sumOfDiv = sumDiv(n,n1);
		cout << sumOfDiv<< endl; //3
		
		ll divs= numOfDiv(n,n1);
		cout << divs<<endl;  // 4
		
		cout <<"ans = "<<ans << "divs = "<<divs<<" sum of divs ="<<sumOfDiv<<endl;
		
		ans += sum;
//		ans -= sumOfDiv;
//		ans += divs;
		cout << ans << endl;
    	
	}
    
}

