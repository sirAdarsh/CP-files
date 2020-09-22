/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,d;
    cin >> n >> d;
    cin >> s;
    
    ll last=0;
    ll neww=0;
    ll steps=0;
    
    while(1){
    	
    	steps++;
    	
    	for(int i=last; i<=last+d; i++){
    		if(s[i]=='1'){
    			neww=i;
			}
		}
    	
    	if(last==neww){
    		cout<<-1<<endl;
    		return 0;
		}
		if(neww==n-1){
			break;
		}
		
		last = neww;
    	
	}    
	
	cout << steps << endl;
    
}

