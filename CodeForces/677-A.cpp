#include<iostream>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	
	int ans=0;
	int h1;
	while(n--){
		cin>>h1;
		if(h1 > h ){
			ans +=2;
		}else{
			ans+=1;
		}
	}
	cout<<ans<<endl;
}
