/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

string tmp;

int solve(int pos, int num){
	
	if(pos==s.size()){
		if ( stoi(tmp)>num || stoi(tmp)==0){
			return 0;
		}
		return 1;
	}
	
	int c;
	tmp[pos]='0';
	c = solve(pos+1,num);
	
	tmp[pos]='1';
	c += solve(pos+1,num);
	
	return c;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    int sz = s.size();
    tmp=s;
    cout << solve(0,stoi(s));
    
}

