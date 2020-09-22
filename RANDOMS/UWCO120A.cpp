#include<iostream>
using namespace std;
int main(){
 	int tc;
 	cin>>tc;
 	while(tc--){
 		
 		int n;
 		cin>>n;
 		long max=0;
 		long in;
 		for(int i=0;i<n;i++){
 			cin>>in;
 			if(in>max){
 				max=in;
			 }
		 }
		 cout<<max<<endl;
 		
	 }
}
