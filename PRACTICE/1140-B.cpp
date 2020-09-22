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
    while(t--){
    	int n;
    	cin >> n;
    	cin >> s;
    	if(s[0]=='>' || s[n-1]=='<'){
    		cout << 0 << endl;
		}
		else{
			
			int del1=0;
			int del2=0;
			
			for(int i=0; i<n-1; i++){
				if(s[i]=='>'){
					break;
				}
				del1++;
			}
			
			for(int i=n-1; i>0; i--){
				if(s[i]=='<'){
					break;
				}
				del2++;
			}
			
			del1 = min(del1,del2);
			cout << del1 << endl;
			
		}
	}
    
}

