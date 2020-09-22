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
    
    cin >> t;
    while(t--){
    	int a,b;
    	cin >> a >> b;
    	
    	if(b==a){
    		cout << 0 << endl;
		}
		elif(b>a){
			if((b-a)&1){
				cout << 1 << endl;
			}
			else{
				cout << 2 << endl;
			}
		}
		else{
			if((a-b)&1){
				cout << 2 << endl;
			}
			else{
				cout << 1 << endl;
			}
		}
    	
	}
    
}

