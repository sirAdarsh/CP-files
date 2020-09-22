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
    int r=0, l=0;
    for(auto i : s){
    	if(i=='L'){
    		l++;
		}
		else if(i=='R'){
			r++;
		}
	}
	
	int start=-1, end=-1;
	
	if(l==0){
		
		for(int i=0; i<n; i++){
			if(s[i]=='R'){
				if(start == -1){
					start = i;
					end = i+1;
				}
				else{
					end=i+1;
				}
			}
		}
		
	}
	if(r==0){
		
		for(int i=0; i<n; i++){
			if(s[i]=='L'){
				if(end == -1){
					end = i-1;
					start = i;
				}
				else{
					start=i;
				}
			}
		}
		
	}
	
	else if(l*r!=0){
		
		for(int i=0; i<n; i++){
			if(start == -1){
				if(s[i]=='R'){
					start = i;
				}
			}
			else{
				if(end==-1){
					if(s[i]=='L'){
						end = i-1;
					}	
				}
				
			}
		}
		
	}
	cout << start+1 <<' ' << end+1;
    
}

