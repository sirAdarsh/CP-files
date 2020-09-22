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
    unordered_map<int,int> guest;
    int home[n];
    for(int i=0; i<n; i++){
    	int a,b;
    	cin >> a >> b;
    	home[i]=a;
    	guest[b]++;
	}
	int count=0;
	for(int i=0; i<n; i++){
		count += (guest[home[i]]);
	}
    cout << count;
}

