/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int coord[205][205];

string solve(){
	int x=100,y=100;
	coord[x][y]=1;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='L'){
			x--;
		}
		elif(s[i]=='R'){
			x++;
		}
		elif(s[i]=='U'){
			y++;
		}
		else{
			y--;
		}
		if(coord[x][y]){
			return "BUG";
		}
		coord[x][y]=1;
	}
	return "OK";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    cout<<solve();
    
}

