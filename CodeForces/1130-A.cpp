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
    
    int n;
    cin >> n;
    int cut = (n+1)/2;
    
    int pos=0;
    int neg=0;
    for(int i=0; i<n; i++){
    	cin >> t;
    	if(t>0){
    		pos++;
		}
		else if(t<0){
			neg++;
		}
	}
    if(pos>=cut){
    	cout << 1 << endl;
	}
	else if(neg>=cut){
		cout << -1 << endl;
	}
	else{
		cout << 0 << endl;
	}
    
}

