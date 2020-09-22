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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    int c5=0,c0=0;
    while(n--){
    	cin >> t;
    	if(t==5)c5++;
    	else c0++;
	}
	
	int f = c5/9;
	int z = c0;
	
	if(f+z==0 || z==0){
		cout << -1 << endl;
	}
	else{
		for(int i=0; i<f*9; i++)s+='5';
		for(int i=0; i<z; i++)s+='0';
		bool o=false;
		bool e=false;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='5'){
				cout<<5;
				o=true;
			}
			else{
				if(o)cout<<0;
				else if(!e)cout<<e;
				e=true;
			}
		}
	}
	
}

