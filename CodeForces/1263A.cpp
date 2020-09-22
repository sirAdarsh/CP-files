/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    
    cin >> t;
    while(t--){
    	int a[3];
    	for(int i=0; i<3; i++){
    		cin >> a[i];
		}
		sort(a,a+3);
		int s = a[1]+a[2];
		int days = a[0];
		s -= a[0];
		a[1]=min(a[1],s/2);
		a[2]= s-a[1] ;
		days += min(a[1],a[2]);
		cout << days << endl;
	}
    
}

