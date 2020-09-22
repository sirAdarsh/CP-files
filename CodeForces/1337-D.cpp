#include<bits/stdc++.h>
using namespace std;
#define ld long double


int main(){
	int t;
	cin >> t;
	while(t--){
		int nr,ng,nb;
		cin >> nr >> ng >> nb;
		
		ld arr1[nr];
		for(int i=0;i<nr;i++){
			cin >> arr1[i];
		}
		ld arr2[ng];
		for(int i=0;i<ng;i++){
			cin >> arr2[i];
		}
		ld arr3[nb];
		for(int i=0;i<nb;i++){
			cin >> arr3[i];
		}
		
		ld minSum=ULLONG_MAX;
//		cout<<minSum;
		
		for(int i =0 ; i < nr ; i ++){
			
			for(int j =0 ; j< ng ;j++){
				
				ld sum=0;
				
				for(int k=0;k<nb;k++){
//					cout<<pow(abs(arr1[i] - arr2[j]),2)<<" "<<pow(abs(arr2[j] - arr3[k]),2)<<" "<<pow(abs(arr3[k] - arr1[i]),2);
					sum = powl(abs(arr1[i] - arr2[j]),2)  + powl(abs(arr2[j] - arr3[k]),2) +powl(abs(arr3[k] - arr1[i]),2);
					if(sum<minSum){
						minSum = sum;
					}				
					
				}
			}
			
		}
		
		cout<<(unsigned long long)minSum<<endl;
		
	}
}
