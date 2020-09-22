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
    
    ll n;
    cin >> n;
    ll arr[n];
    
    ll front[n+1], back[n+1];
    front[0] = 0; back[0]= 0;
    
    ll total = 0;
    
    for(int i=1; i<=n; i++){
    	cin >> arr[i];
    	front[i] = front[i-1] + arr[i];
    	total += arr[i];
	}
	
	if(total%3){
		cout << 0 <<endl;
	}
	else{
		
		ll rem = total / 3;
		for(ll i=n; i>0; i--){
			back[n-i+1] = back[n-i] + arr[i];
		}

//		cout<<endl;
		ll counts = 0;
		
		// search for rem front start
		int h = n;
		
		for(ll i=1; i<h; i++){
			
			if( front[i]==rem ){
				
				for(ll j=n; j>i; j--){
					
					if( back[n-j+1] == rem ){
						
						if( front[j-1]-front[i]==rem && j-i>1 ){
							counts++;
							
						}
						
					}
					h = j;
				}
				
			}
			
		}
		cout<<counts<<endl;
		
	}
	
	
}

