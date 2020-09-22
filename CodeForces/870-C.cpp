/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int solve(ll n){
	int ans=0;
	if(n<4){
    		return -1;
		}
    	
    	if(n%4==0){
    		return n/4;
		}
		elif(n%4==1){
			
			if(n-9<0){
				return -1;
			}
			else{
				n-=9;
				ans+=1;
				ans += (n/4);
				return ans;
			}
			
		}
		elif(n%4==2){
			if(n-6<0){
				return -1;
			}
			else{
				n-=6;
				ans+=1;
				ans+=(n/4);
				return ans;
			}
		}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int q;
    cin >> q;
    while(q--){
    	ll n;
    	cin >> n;
    	
    	ll ans=0;
    	
		if(n%4==3){
			if(n-6<0){
				cout << -1 << endl;
			}
			else{
				n-=6;
				ans++;
				if(solve(n)==-1){
					cout << -1 << endl;
				}
				else
				cout << ans+solve(n) << endl;
			}
		}
		else{
			cout << solve(n) << endl;
		}
		
	}
}

