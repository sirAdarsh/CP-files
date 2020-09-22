/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
	int xd,yd;
	
	xd = abs(x2-x1);
	if(xd==0){
		xd+=2;
	}
	else{
		xd+=1;
	}
	
	yd = abs(y2-y1);
	if(yd==0){
		yd+=2;
	}
	else{
		yd+=1;
	}
	cout << 2*(xd+yd);   
    
}
