/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    
    int n;
    cin >> n;
    int prev=0;
    int time=0;
	int diff;
	int tmp;
	for(int i=0; i<n; i++){
		cin >> tmp;
		diff = tmp-prev;
		time += abs(diff);
		time+=2;
		prev=tmp;
	}
	cout << time-1 << endl;
}

