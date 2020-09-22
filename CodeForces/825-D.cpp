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
ll mp[30];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s1,s2;
    cin >> s1 >> s2;
    
    for(ll i=0; i<s1.length(); i++){
    	if(s1[i]!='?')
    	mp[s1[i]-'a']++;
	}
	
	ll sz1=s1.length();
	ll sz2=s2.length();
    
    ll j=0;
    
    for(ll i=0; i<sz2; i=((i+1)%sz2)){
    	
    	
    	if(j==sz1){
    		break;
		}
		
		if(s1[j]!='?'){
			j++;
		}
		else{
			char ch = s2[i];
			if( mp[ch-'a']>0 ){
				--mp[ch-'a'];
			}
			else{
				s1[j]=ch;
				j++;
			} 	
		}
		   
	}
    cout << s1 << endl;
}

