/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int mp[100001];
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    multiset<int> s;
    while(n--){
    	cin >> t;
    	mp[t]++;
	}
	
	for(int i : mp){
		s.insert(i);
	}
	
	int q;
	cin >> q;
	while(q--){
		
		
		char op;
		cin >> op >> t;
		
		if(op=='+'){
			s.erase(s.find(mp[t]));
			mp[t]++;
			s.insert(mp[t]);
		}
		
		else{
			s.erase(s.find(mp[t]));
			mp[t]--;
			s.insert(mp[t]);
		}
		
		int a,b,c;
		
		auto it=s.rbegin();
		a= *it;
		++it;
		b=*it;
		++it;
		c=*it;
		if( (a>=4 && b>=4) || (a>=8) || (a>=6 && b>=2) || (a>=4 && b>=2 && c>=2) ){
			cout <<"YES"<<endl;
		}
		else{
			cout << "NO" << endl;
		}
		
		
	}
    
}

