/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool mp[200];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    mp['a']=1; mp['e']=1; mp['i']=1; mp['o']=1; mp['u']=1; mp['y']=1;
    mp['A']=1; mp['E']=1; mp['I']=1; mp['O']=1; mp['U']=1; mp['y']=1;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
    	if(!mp[s[i]]){
    		cout<<'.';
    		if( s[i]>='A' && s[i]<='Z' ) s[i]+=32;
    		cout << s[i];
		}
	}
    
}

