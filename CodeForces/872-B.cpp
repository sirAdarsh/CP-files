/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k;
    cin >> n >> k;
    int ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	if(k==1){
		sort(ar,ar+n);
		cout << ar[0] << endl;
	}
	elif(k==2){
		cout << max(ar[0],ar[n-1]);
	}
	else{
		sort(ar,ar+n);
		cout << ar[n-1] << endl;
	}
}

