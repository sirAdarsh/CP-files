#include<iostream>
int main(){
	

        
        int n=4;
        
        char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
            string str;
            
	if(n<=26){
		
		for(int i=0;i<n;i++){
			str+=arr[i];	
		}
	}
	else{
		int a;
		int diff=n-26;
		if(diff%2==0){
			 a=(diff+1);
		}
		else{
			a=(diff+2);
		}
		
		for(int i=0;i<a;i++){
			str+="a";
		}
		
		char ch=98;
		for(int i=1;i<=(n-a);i++){
			str+=ch;
			ch++;
		}
		
	}
	coout<< str;
    }
        
    
}
	
	
	

