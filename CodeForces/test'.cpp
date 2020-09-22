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
    vector<int> v(4);
    v[0]=2;
    v[1]=2;
    v[3]=4;
    v[2]=4;
    auto it =v.begin();
    it = lower_bound(v.begin(),v.end(),1);
    if(it==v.end()){
    	cout <<"Hol";
	}
	cout << *it;
    
}

