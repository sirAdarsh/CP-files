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

void solve(){
	
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	cin >> s;
		
		int x1,y1;
		cin >> x1 >> y1;
		
		int q;
		cin >> q;
		int x2,y2;
		
		int L,R,U,D;
		L=R=U=D=0;
		for(char c : s){
			if(c=='L')L++;
			elif(c=='R')R++;
			elif(c=='D')D++;
			else U++;
		}
		
		int l,r,u,d;
		l=r=u=d=0;
		
		while(q--){
			
			cin >> x2 >> y2;
			
			r = max(0,x2-x1);
			l = max(0,x1-x2);
			u = max(0,y2-y1);
			d = max(0,y1-y2);
			if(l>L || r>R || u>U || d>D){
				cout <<"NO"<<endl;
			}
			else
			cout << "YES " << l+r+u+d<<endl;
			
		}
    	
	}
    
}

