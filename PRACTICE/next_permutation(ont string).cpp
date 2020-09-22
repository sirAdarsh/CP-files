/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    
    do{
    	cout<<s<<endl;
	}
	while(next_permutation(s.begin(),s.end()));
    
}

