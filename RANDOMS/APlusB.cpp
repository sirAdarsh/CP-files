#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
	
	int t;
	double income;
	double red=0;
	double finalRed=0;
	
	
	
	cin>>t;
	while(t--){
		int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
		int percent=0;
		
		cin>>income;
		
		if(income>=0 && income<=250000){
			a=0;
		}
		else if(income>250000 && income<=500000){
			a=0;
			b=(income-250000)*(0.05);
		}
		else if(income>500000 && income<750000){
			a=0;
			b=(500000-250000)*(0.05);
			c=(income-500000)*(0.1);
		}
		else if( income>=750000 && income<1000000){
			a=0;
			b=(500000-250000)*(0.05);
			c=(750000-500000)*(0.1);
			d=(income-1000000)*(1.5);
		}
		else if(income>=100000 && income<1250000){
			a=0;
			b=(500000-250000)*(0.05);
			c=(750000-500000)*(0.1);
			d=(1250000-1000000)*(1.5);
			e=(income-1000000)*(2.0);
		}
		else if(income>=1250000 && income<1500000){
			a=0;
			b=(500000-250000)*(0.05);
			c=(750000-500000)*(0.1);
			d=(1250000-1000000)*(1.5);
			e=(1500000-1000000)*(2.0);
			f=(income-1250000)*(2.5);
		}
		else if(income>=1500000){
			a=0;
			b=(500000-250000)*(0.05);
			c=(750000-500000)*(0.1);
			d=(1250000-1000000)*(1.5);
			e=(1500000-1000000)*(2.0);
			f=(1500000-1000000)*2.5;
			g=(income-1500000)*3.0;
		}
		
	cout<<income-(a+b+c+d+e+f+g);
		




		
	
	}
	
	
		
		
	
}

