#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		
		int C[1441]={};
		int J[1441]={};
		
		int n;
		cin>>n;
		
		int s,e;
		string str="";
		
		for(int i=1;i<=n;i++){
			
			cin>>s>>e;
			
			//first in C
			int cc=0;
			bool cB=true;
			if( C[s]==1 && C[e]==1 ){
				
				for(int j=s;j<=e;j++){
					if(C[s]==1){
						cc++;
					}
					if(cc>2){
						cB=false;
						break;
					}
				}
				if(cB=true){
					
					for(int j=s;j<=e;j++){
						C[j]=1;
					}
					str+='C';
					continue;
				}
				
			}
			
			
			int ones=0;
			bool c=true;
			
			for(int j = s; j<=e ;j++){
				
				if(C[j]==1){
					ones++;
				}
				
				if(ones > 1){
					c=false;
					break;
					
				}
			}
			
			if(c == true){
				for(int j=s;j<=e;j++){
					C[j]=1;
				}
				
				str += 'C';
				continue;
			}
			
			// check in J
			int jj=0;
			bool jB=true;
			if( J[s]==1 && J[e]==1 ){
				
				for(int j=s;j<=e;j++){
					if(J[s]==1){
						jj++;
					}
					if(jj>2){
						jB=false;
						break;
					}
				}
				if(jB=true){
					
					for(int j=s;j<=e;j++){
						J[j]=1;
					}
					str+='J';
					continue;
				}
				
			}
			
			
			bool jay=true;
			ones=0;
			for(int j=s;j<=e;j++){
				
				
				if(J[j]==1){
					ones++;
				}
				
				if(ones>1){
					
					jay=false;
					break;
					
				}
				
			}
			
			if(jay==true){
				
				for(int j=s;j<=e;j++){
					J[j]=1;
				}
				str += 'J';
			}
			
			if(jay==false){
				str="IMPOSSIBLE";
			}
			
		}
		cout<<"Case #"<<z<<": "<<str<<endl;
		
		
	}
	
}
