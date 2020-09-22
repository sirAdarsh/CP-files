/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool solve(string s, string t){
	
	int j=0;
	
	for(int i=0; i<s.size(); i++){
		char ch = s[i];
		bool check = false;
		for(; j<t.size(); j++){
			if(t[j]==ch){
				check = true;
				j++;
				break;
			}
			cout<<"j= "<<j<<" ch= "<<ch<<endl;
		}
		if(!check){
			return 0;
		}
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s,t;
    cin >> s >> t;
    if(solve(s,t)){
    	cout << "true"<<endl;
	}
	else{
		cout << "false"<<endl;
	}
    
}

