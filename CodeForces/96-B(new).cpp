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
    
    cin >> s;
    ll sz = s.size();
    ll pre = stoll(s);
    
    if(sz%2==0){
    	
    	string str="";
    	for(int i=0; i<sz/2; i++){
    		str += '4';
		}
		for(int i=sz/2; i<sz; i++){
			str += '7';
		}
		
		do{
			ll intt = stoll(str);
			if(intt>=pre){
				cout << str;
				return 0;
			}
		}
		while(next_permutation(str.begin(),str.end()));
    	
	}
	
	if(sz%2){
		sz++;
	}
	else{
		sz+=2;
	}
	
	sz++;
	string s1(sz/2,'4');
	string s2(sz/2,'7');
	cout << s1 <<s2 << endl;
	
    
}

