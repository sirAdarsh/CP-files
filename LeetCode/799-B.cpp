/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
	int n;
	cin >> n;
	
	int p[n];
	for(int i=0; i<n; i++){
		cin >> p[i];
	}
	
	set<int> s[4];
	int tmp;
	for(int i=0; i<n; i++){
		cin >> tmp;
		s[tmp].insert(p[i]);
	}
	for(int i=0; i<n; i++){
		cin >> tmp;
		s[tmp].insert(p[i]);
	}
	int q;
	cin >> q;
	int l;
	for(int i=0; i<q; i++){
		cin >> l;
		if(s[l].begin()==s[l].end()){
			cout<<-1<<" ";
		}
		else{
			cout << *s[l].begin()<<" ";
			int num = *s[l].begin();
			s[1].erase(num);
			s[2].erase(num);
			s[3].erase(num);
		}
	}
    
}

