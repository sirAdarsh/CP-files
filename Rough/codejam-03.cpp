#include<iostream>
using namespace std;

int C[1440]={};
int J[1440]={};

char solve(int s,int e){
	
	if(e-s==1){
		
	}
	
	
	
	if( C[s]!=1 ){
		
		int ones=0;
		
		for(int i=s;i<=e;i++){
			
			if(C[i]!=0){
				ones++;
			}
			if(ones>1){
				goto jay;
			}
		}
		
		for(int i=s;i<=e;i++){
			C[i]=1;
		}
		
		return 'C';
		
		
	}
	
	if( C[s]==1 ){
		
		
		if(C[e]==1){
			int c=2;
			for(int i=s;i<=e;i++){
				if(C[i]==1){
					c++;
				}
				if(c>2){
					goto jay;
				}
			}
			
			for(int i=s;i<=e;i++){
				C[i]=1;
			}
			return 'C';			
		}
		
		int ones=1;
		
		for(int i=s+1;i<=e;i++){
			if(C[i]!=0){
				ones++;
			}
			if(ones>1){
				goto jay;
			}
		}
		
		for(int i=s;i<=e;i++){
			C[i]=1;
		}
		return 'C';
	}


	
	jay:
		if( J[s]==1 ){
			
			if(J[e]==1){
				int c=2;
				for(int i=s;i<=e;i++){
					if(J[i]==1){
						c++;
					}
					if(c>2){
						return '0';
					}
				}
			
				for(int i=s;i<=e;i++){
					J[i]=1;
				}
				return 'J';			
			}
			
			
		int ones=1;
		
		for(int i=s+1;i<=e;i++){
			if(J[i]!=0){
				ones++;
			}
			if(ones>1){
				return '0';
			}
		}
		
		for(int i=s;i<=e;i++){
			J[i]=1;
		}
		
		return 'J';
	}
	
	if( J[s]!=1 ){
		int ones=0;
		
		for(int i=s;i<=e;i++){
			if(J[i]!=0){
				ones++;
			}
			if(ones>1){
				return '0';
			}
		}
		
		for(int i=s;i<=e;i++){
			J[i]=1;
		}
		return 'J';
	}
		
	
}

int main(){
	
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		
		int n;
		cin>>n;
		
		
		int s,e;
		
		bool imp=false;
		string str="";
	
		
		for(int i=1;i<=n;i++){
			
			cin>>s>>e;
			
			char ret;
			
			ret= solve(s,e);
			
			if(ret == '0'){
				str = "IMPOSSIBLE";
				for(int j=i;j<n;j++){
					cin>>s>>e;
				}
				break;
			}
			else{
				str += ret;
			}
			
		}
		for(int i=0;i<=1440;i++){
			C[i]=0;
		}
		for(int i=0;i<=1440;i++){
			J[i]=0;
		}
		cout<<"Case #"<<k<<": "<<str<<endl;
		
		
	
	}
	
		
	
}
