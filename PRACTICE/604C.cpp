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
    cin >> s;
    int times=0;
    char prev = s[0];
    int alt=1;
    for(int i=1; i<n; i++){
    	if(s[i]==prev){
    		times++;
		}
		else{
			alt++;
		}
		prev=s[i];
	}
	int add=0;
    if(times==1){
    	add=1;
	}
	elif(times>1){
		add=2;
	}
	cout<<alt+add<<endl;
}

