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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> t;
    for(int m=1; m<=t; m++){
    	int n;
    	cin >> n;
    	cin >> s;
    	int a=0;
    	int b=0;
    	for(int i=0; i<n; i++){
    		if(s[i]=='A') a++;
    		else b++;
		}
		cout << "Case #"<<m<<":"<<endl;
		if(abs(a-b)!=1){
			cout << 'N'<<endl;
		}
		else{
			cout << 'Y' << endl;
		}
		
	}
    
}

