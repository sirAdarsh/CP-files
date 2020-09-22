/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int n,s,t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n >> s >> t;
    int ar[n+1];
    for(int i=1; i<=n; i++){
    	cin >> ar[i];
	}
	
	bool check[n+1];
	memset(check,0,sizeof(check));
	
	int pos = s;
	int turns=0;
	
	while(check[pos]!=1){
		if(pos==t){
			cout<<turns<<endl;
			return 0;
		}
		check[pos]=1;
		pos = ar[pos];
		turns++;
	}
	cout<<-1<<endl;
	
}

