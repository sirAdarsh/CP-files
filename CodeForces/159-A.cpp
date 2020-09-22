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

struct msg{
	string n1,n2;
	int time;
};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    set<string> st;
    int n,d;
    cin >> n >> d;
    vector<msg> vec(n);
    for(int i=0; i<n; i++){
    	string s1,s2;
    	int t;
    	cin >> s1 >> s2 >> t;
    	vec[i].n1=s1;
    	vec[i].n2=s2;
    	vec[i].time=t;
	}
	
	for(int i=0; i<n; i++){
		
		string nm1 = vec[i].n1;
		string nm2 = vec[i].n2;
		int t1 = vec[i].time;
		
		for(int j=i+1; j<n; j++){
			
			
			if( nm1 == vec[j].n2 && nm2 == vec[j].n1 ){
				
				if( vec[j].time-t1<=d && vec[j].time-t1>0 ){
					vector<string> v;
					v.pb(nm1);
					v.pb(nm2);
					sort(v.begin(),v.end());
					s = v[0]+" "+v[1];
					st.insert(s);
					
				}
				
			}
			
		}
		
	}
	
	cout << st.size() << endl;
	for(auto i: st){
		cout << i << endl;
	}
	
    
}

