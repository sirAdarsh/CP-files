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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int x=0;
    cin >> t;
    while(t--){
    	cin >> s;
    	s += 'a';
    	if(s[1]=='-'){
    		x--;
		}
		else if(s[1]=='+'){
			x++;
		}
	}
    cout << x;
}

