#include <iostream>
using namespace std; 

int main(){
	int T; 
	cin>>T;
	while(T-->0){
		int len, inc;
		cin>>len;
		cin>>inc;
		int temp, index, ss; 
		int a[len], b[len];
		int high=0; 
		int sum=0; 
		for(int i=0;i<len; i++){cin>>a[i]; }

		for(int i=0;i<len; i++){cin>>b[i];	
			temp=b[i]; 
			
			if(temp<0){temp=-temp;}
			if(temp>high){high=temp; index=i;}; }	

		for(int i=0; i<len; i++){ss=a[i]*b[i]; sum=sum+ss;}
	
		sum = sum+high*inc;
		cout<<sum<<endl;
	}
	return 0;
}
	
	
