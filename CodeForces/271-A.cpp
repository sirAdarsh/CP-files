#include<iostream>
using namespace std;
int main(){
	int y1;
	cin >> y1;
	int i = y1+1;
	while(true){
		int y2=i;
		int a,b,c,d;
		d = y2%10;
		y2/=10;
		c = y2%10;
		y2/=10;
		b = y2%10;
		y2/=10;
		a = y2;
		if( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d ){
			cout<<i<<endl;
			break;
		}
		i++;
	}
}
