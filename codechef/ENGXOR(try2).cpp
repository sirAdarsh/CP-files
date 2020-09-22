#include<iostream>
using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	int a[32]={};
 	int b[32]={};
 	
 	while(t--){
 		int n,q;
 		cin>>n>>q;
 		int arrN[n];
 		
 		for(int i=0;i<n;i++){
 			cin>>arrN[i];
		 }
		 
		 		 
		 
		 while(q--){
		 	
		 	int p;
		 	cin>>p;
		 	int evens=0;
		 	int countOnes;
		 	for(int x=0;x<n;x++){
		 	
		 		int num=arrN[x];
		 		//writing in binary for n in a
 				int j=0;
 				while(num>0){
 					a[j]=num%2;
 					num/=2;
 					j++;
				 }
		 
		 
		 for(int i=0;i<32;i++){
		 	cout<<a[i]<<" ";
		 }
		 cout<<endl;
//		 for(int i=0;i<32;i++){
//		 	cout<<b[i]<<" ";
//		 }
		 cout<<endl;
		 
//			 //writing in binary for q in b
//				j=0;
//		 		while(p>0){
//		 			b[j]=p%2;
//		 			p/=2;
//		 			j++;
//				 }
//				 countOnes=0;
//		 
//		 	for(int i=0;i<32;i++){
//		 		if(a[i]!=b[i]){
//		 				countOnes++;
//					 }
//				 }
//				 
//				if(countOnes%2==0){
//					evens++;
//				}
//		 	cout<<countOnes<<endl;
////		 	cout<<evens<<" "<<n-evens<<endl;
//			
//		 }
//		 
//			 
//			 
// 		
//		 	
//		 }
//		 
//		 
//		 
//		 
//		 
//		 
		 
 	
	 }
	 }
	 }
	 }
	
	 
 	
 	
 	
 	
