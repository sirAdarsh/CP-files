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
    cin >> t;
    cin >> s;
    int max_dist=0;
    int cur_dist=0;
    char prev = s[0];
    int times=0;
    for(int i=1; i<s.size(); i++){
    	
    	if(prev==s[i]){
    		cur_dist++;
		}
    	else{
    		cur_dist=0;
		}
		prev=s[i];
		if(cur_dist>=1){
			times++;
		}
		if(cur_dist>max_dist){
			max_dist=cur_dist;
		}
	}
    int add=0;
    
    if(times>=2){
    	add=2;
	}
	else{
		if(max_dist==1){
			add=1;
		}
		else if(max_dist>1){
			add=2;
		}
	}
    
	int len=1;
	prev=s[0];
	for(int i=1; i<t; i++){
		if(prev!=s[i]){
			len++;
		}
		prev=s[i];
	}
	cout<<len+add;
}

