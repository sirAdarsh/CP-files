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

string cmp = "abacaba";

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
    	
    	int rigid=0;
    	int flexi=0;
    	
    	int idx=-1;
    	
    	for(int i=0; i<n-6; i++){
    	
    		if(s.substr(i,7)==cmp){
    			rigid++;
    			continue;
			}
			else{
				bool e =false;
				for(int j=i; j<i+7; j++){
					if(s[j]!=cmp[j-i] && s[j]!='?'){
						e=true;
						break;
					}
				}
				if(!e && idx==-1){
					bool check=false;
					if(i+6+4<n){
						if( s.substr(i+7,4)=="caba"){
							check=true;
						}
					}
					if(i+6+6<n && !check){
						if(s.substr(i+7,6)=="bacaba"){
							check=true;
						}
					}
					if(i-4>=0 && !check ){
						if(s.substr(i-4,4)=="abac"){
							check=true;
						}
					}
					if(i-6>=0 && !check){
						if(s.substr(i-6,6)=="abacab"){
							check=true;
						}
					}
					if(!check){
						idx=i;
					}
				}				
			}
    		
		}
    	if(rigid>1){
    		cout<<"No"<<endl;
		}
		
		else if(rigid==1){
			cout<<"Yes"<<endl;
			for(int i=0; i<s.size(); i++){
				if(s[i]=='?'){
					cout<<'x';
				}
				else{
					cout<<s[i];
				}
			}
			cout << endl;
		}
		else{
			if(idx==-1){
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
				for(int i=idx; i<idx+7; i++){
					s[i]=cmp[i-idx];
				}
				for(int i=0; i<s.size(); i++){
					if(s[i]=='?'){
						cout<<'x';
					}
					else{
						cout<<s[i];
					}
				}
				cout << endl;
			}
		}
    	
	}
    
}

