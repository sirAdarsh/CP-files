/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    string s=to_string(n);
    int sz = s.size();
    
    if(sz%2){
    	int aSz=sz+1;
    	string ans(aSz,'-');
    	for(int i=0;i<aSz;i++){
    		if(i<aSz/2){
    			ans[i]='4';
			}
			else{
				ans[i]='7';
			}
		}
		for(auto i : ans){
			cout<<i;
		}
	}
    else{
    	int aSz=sz;
    	bool found=false;
//    	string ans(aSz,'-');
    	char ans[aSz];
		for(int i=0; i<aSz; i++){
    		if(i<aSz/2){
    			ans[i]='4';
			}
			else{
				ans[i]='7';
			}
		}
		
		ll m=0;
		ll num=0;
		for(int i=aSz-1; i>=0; i--){
			num += ((ans[i]-'0')*pow(10,m));
			m++;
		}
		
		
		if(num>=n){
			found=true;
			cout<<num<<endl;
		}
		if(!found){
			while(next_permutation(ans,ans+aSz)){
				
				int m=0;
				num=0;
				for(int i=aSz-1; i>=0; i--){
					num += ((ans[i]-'0')*pow(10,m));
					m++;
				}
				
				
				if(num>=n){
					cout<<num<<endl;
					found=true;
					break;
				}
			}
		}
		if(!found){
//			printf("sd");
			aSz=sz+2;
			char tmp[aSz];
			for(int i=0; i<aSz;i++){
				if(i<aSz/2){
					tmp[i]='4';
				}
				else{
					tmp[i]='7';
				}
			}
			for(auto i : tmp){
				cout<<i;
			}
			
		}
    	
	}
}

