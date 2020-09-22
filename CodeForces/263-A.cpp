#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	int r,c;
	for(int i = 1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin >> a;
			if(a==1){
				r=i;
				c=j;
			}
		}
	}
	int ans = abs(3-r) + abs(3-c);
	cout<<ans<<endl;
}
