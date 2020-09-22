/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    vector<pair<int,int>> vec(s.size());
    
    int S=0,C=0;
    
    for(int i=0 ;i<s.size(); i++){
    	if(s[i]>='A' && s[i]<='Z' ) C++;
    	else S++;
    	vec[i] = {S,C};
	}
    int sz= s.size();
    
    int min = INT_MAX;
    
    if(S==0 || C==0) {
    	cout << 0 << endl;
    	return 0;
	}
    
    for(int i=sz-1; i>=0; i--){
    	
    	int ops = 0;
    	
    	// pehle= jitne small, aur baad me jitne capitals
    	
    	ops += vec[i].first; // pehle ke smalls
    	// baad ke capitals
    	int cc = vec[sz-1].second - vec[i].second;
    	ops+=cc;
    	
//    	cout << vec[i].first<<"  "<<vec[i].second << endl;
    	
    	if(ops<min) min = ops;
	}
	
	// case 0
	int ops = 0;
	ops += (vec[sz-1].second);
	if(min>ops) min=ops;
	
	cout << min << endl;
    
}

