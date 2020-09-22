#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		
		int n;
		cin>>n;
		
		int C[1441]={};
		int J[1441]={};
			
		string str="";
		string strF="0";
		for(int p=1;p<=n;p++){
		
			int s,e;
			cin>>s>>e;
			
			//check in C
			bool c=true;
			
			for( int i=s ; i<e; i++ ){
				
				if(C[i] == 1 ){
					c=false;
					break;
				}
				
			}
			if(c==true){
				
				for(int i=s;i<e;i++){
					C[i]=1;
				}
				str+="C";
				continue;
			}
			
			
			//check in J
			
			bool jay=true;
			
			for( int i=s ; i<e; i++ ){
				
				if(J[i] == 1 ){
					jay=false;
					break;
				}
				
			}
			if(jay==true){
				
				for(int i=s;i<e;i++){
					J[i]=1;
				}
				str+="J";
				continue;
			}
			if(jay==false){
				strF = "IMPOSSIBLE";
			}
		}
		
		if(strF=="0"){
			strF=str;
		}
		
		
		cout<<"Case #"<<z<<": "<<strF<<endl;
		
	}
	
}
