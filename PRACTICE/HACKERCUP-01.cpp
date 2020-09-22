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
    for(int m=1; m<=t; m++){
    	
    	int n;
    	cin >> n;
    	
    	char in[100];
    	char out[100];
    	
    	for(int i=1; i<=n; i++){
    		cin >> in[i];
		}
		for(int j=1; j<=n; j++){
			cin >> out[j];
		}
		printf("Case #%d:\n",m);
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				
				int initial = i;
				int final = j;
				
				bool e =false;
				if(initial==final){
					printf("Y");
				}
		        else if(initial<final){
					for(int k=initial; k<=final; k++){
						if(k==initial){
							if(out[k]!='Y'){
								e=true;
								break;
							}
						}
						else if(k==final){
							if(in[k]!='Y'){
								e=true;
								break;
							}
						}
						else{
							if(in[k]!='Y' || out[k]!='Y'){
								e=true;
								break;
							}
						}
					}
					if(e){
						printf("N");
					}
					else{
						printf("Y");
					}
				}
				else{
					for(int k=initial; k>=final; k--){
						if(k==initial){
							if(out[k]!='Y'){
								e=true;
								break;
							}
						}
						else if(k==final){
							if(in[k]!='Y'){
								e=true;
								break;
							}
						}
						else{
							if(in[k]!='Y' || out[k]!='Y'){
								e=true;
								break;
							}
						}
					}
					if(e){
						printf("N");
					}
					else{
						printf("Y");
					}
				}
				
			}
			printf("\n");
				
		}
	}
   	
}
    


