/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    	int arr[n];
    	int ro,pa,sc;
    	cin >> ro >> pa >> sc;
    	
		cin >> s;
		
		int cutoff = (n+1)/2;
		int wins=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='R'){
				if(pa>0){
					s[i]='P';
					pa--;
					wins++;
				}
				else{
					s[i]='X';
				}
			}
			else if(s[i]=='S'){
				if(ro>0){
					s[i]='R';
					ro--;
					wins++;
				}
				else{
					s[i]='X';
				}
			}
			else{
				if(sc>0){
					s[i]='S';
					sc--;
					wins++;
				}
				else{
					s[i]='X';
				}
			}
		}
		
		if(wins>=cutoff){
			cout<<"YES"<<endl;
			
			for(int i=0; i<s.size(); i++){
				if(s[i]!='X'){
					cout<<s[i];
				}
				else{
					if(ro>0){
						cout<<"R";
						ro--;
					}
					else if(sc>0){
						cout<<"S";
						sc--;
					}
					else if(pa>0){
						cout<<"P";
						pa--;
					}
				}
			}
			cout<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
		
	}
    
}

