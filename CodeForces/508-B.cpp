/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    
    cin >> s;
    
    int n = s.size();
    
    int last = s[n-1]-'0';
    
    	
    int i;
   	bool f=false;
   	int plc=-1;
   	for(i=0; i<n; i++){
    	if((s[i]-'0')%2==0){
   			plc=i;
		}
    	if((s[i]-'0')%2==0 && (s[i]-'0')<last ){
    		f=true;
    		break;
		}
	}
	if(!f){
		if(plc!=-1){
			swap(s[n-1],s[plc]);
			for(auto i : s){
				cout << i;
			}
		}
		else cout << -1 << endl;
	}
	else{
		swap(s[i],s[n-1]);
		for(auto i : s){
			cout << i;
		}
	}	
    
}

