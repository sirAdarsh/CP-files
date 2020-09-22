//https://www.hackerrank.com/challenges/constructing-a-number/problem
#include<iostream>
#define MOD 1000000000
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		for(auto i : vec){
			
		
		
		int sum = 0;
		for(auto i : vec){
			string s;
			
			s = to_string(i);
			
			for(char c : s){
				if(c!='0'){
					sum += (c - 48);
				}
			}
		}
		if(sum%3==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		
	}
}
