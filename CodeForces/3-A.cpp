#include<iostream>
using namespace std;
int main(){
	
	string sI,sF;
	cin >> sI >> sF;
	int Ri,Rf,Ci,Cf;
	Ri = sI[1];
	Rf = sF[1];
	Ci = sI[0];
	Cf = sF[0];
	int steps=0;
	string str="";
	while(1){
		
		if(Rf==Ri && Ci==Cf){
			break;
		}
		steps++;
		
		if ( Cf > Ci ){
			str += "R";
			Ci += 1;
		}
		if( Cf < Ci ){
			str += "L";
			Ci -= 1;
		}
		if( Rf > Ri ){
			str += "U";
			Ri += 1;
		}
		if( Rf < Ri ){
			str += "D";
			Ri -= 1;
		}
		str+="\n";
		
	}
	cout<<steps<<endl;
	cout<<str<<endl;
	
}
