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
    
    int l,r;
    cin >> l >> r;
    if(l>r) swap(l,r);
    int mid = (l+r)/2;
    int moves1,moves2;
    moves1 = mid-l;
    moves2 = r-mid;
    int ans=0;
    ans += (moves1)*(moves1+1)/2;
    ans += moves2*(moves2+1)/2;
    cout << ans << endl;
    
}

