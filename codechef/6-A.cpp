#include<iostream>
using namespace std;

void checkTRI(int a,int b,int c,bool *bo){
	
	if(a+b>c && a+c>b && b+c>a){
		cout<<"TRIANGLE"<<endl;
		*bo=true;
	}
	
}

void checkSEG(int a,int b,int c,bool *bo){
	if(a+b==c || a+c==b || b+c==a){
		cout<<"SEGMENT"<<endl;
		*bo=true;
	}
}

int main(){
	int a,b,c,d;
	
	cin >> a >> b >>c >>d;
	int arr[4]={a,b,c,d};
	bool end=false;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			for(int k=j+1;k<4;k++){
				checkTRI(arr[i],arr[j],arr[k],&end);
				if(end==true){goto fin;
				}
			}
		}
	}
	if(end==false){
		for(int i=0;i<4;i++){
			for(int j=i+1;j<4;j++){
				for(int k=j+1;k<4;k++){
					checkSEG(arr[i],arr[j],arr[k],&end);
					if(end==true){goto fin;
					}
				}
			}
		}
	}
	if(end==false){
		cout<<"IMPOSSIBLE"<<endl;
	}
	
	fin:
		{
		}
		
	
}
