/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool Prime[100001];

void sieve(){
	
	memset(Prime, true, sizeof(Prime));
	
	for(int p=2; p*p<=100000; p++){
		
		if(Prime[p]){
			
			for(int i=p*p; i<=100000; i+=p){
				Prime[i]=false;
			}
			
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n1,n2;
    scanf("%lld %lld",&n1,&n2);
    sieve();
    vector<ll> list1;
    
    for(ll i=n1; i<=n2; i++){
    	if(Prime[i]){
    		list1.push_back(i);
		}
	}

	vector<ll> list2;
	
	for(ll i=0; i<(ll)list1.size(); i++){
		
		ll tmpNum=list1[i];
		
		for(ll j=0; j<(ll)list1.size(); j++){
			
			ll ttNum=tmpNum;
			
			if(j==i){
				continue;
			}
			else{
				if(list1[j]<9){
					ttNum*=10;
				}
				else{
					ttNum*=100;
				}
			}
			
			ll num = ttNum+list1[j];
			list2.push_back(num);
		}
		
	}
	
	set<ll> list3;
	
	for(auto i:list2){
		if(Prime[i]){
			list3.insert(i);
		}
	}
	
//	for(auto i : list3){
//		cout<<i<<" ";
//	}
	
	ll a,b;
	a = *(list3.begin());
	b = *(list3.rbegin());
	

	ll sz=list3.size();
	
	ll ans=0;
	
	ll fib[100001];
	
	fib[1]=a;
	fib[2]=b;
	for(ll i=3; i<=sz; i++){
		fib[i] = fib[i-1]+fib[i-2];
	}
	printf("%lld",fib[sz]);

}

