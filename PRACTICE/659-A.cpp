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
    
    int n,a,b;
    cin >> n >> a >> b;
    
	if(b>=0){
		int p=0;
		while(p!=b){
			a++;
			if(a==n+1) a=1;
			p++;
		}
	}
	else{
		int p=0;
		while(p!=abs(b)){
			a--;
			if(a==0) a=n;
			p++;
		}
	}
	cout << a << endl;
    
}

