/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		int m;
		for(int i=0; i<n; i++){
			cin >> m;
			cout << ((i%2)?abs(m):-1*abs(m))<<" ";
		}
		cout<<endl;
	}   
}

