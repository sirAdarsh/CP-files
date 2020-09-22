/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define endl '\n'
#define elif else if
#define pb push_back
#define lll long long
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    lll n,L,a;
    cin >> n >> L >> a;
    
    lll pre=0;
    lll cnt=0;
    
    while(n--){
    	
    	lll tt,ll;
    	cin >> tt >> ll;
    	
    	lll br = tt-pre;
    	
    	if(br>=a){
    		cnt += ((br)/a);
		}
		
		pre = tt+ll;
    	
	}
	
	if(L-pre>=a){
		cnt += ((L-pre)/a);
	}
    cout << cnt << endl;
}

