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
    int n,q;
    cin >> n >> q;
    int ar[n+1];
    int sum1[n+1],sum2[n+1];
    sum1[0]=0; sum2[0]=0;
    for(int i=1; i<=n; i++){
    	cin >> ar[i];
    	sum1[i]=sum1[i-1]+ar[i];
	}
	for(int i=1; i<=n; i++){
		cin >> ar[i];
		sum2[i]=sum2[i-1]+ar[i];
	}
    while(q--){
    	int a,b,c;
    	cin >> a >> b >> c;
    	if(a==1){
    		cout << sum1[c]-sum1[b-1] << endl;
		}
		else{
			cout << sum2[c]-sum2[b-1] << endl;
		}
	}
}

