#include <bits/stdc++.h>
using namespace std; 

int main(){
int T; 
cin>>T;
while(T--){
	int N;
	float A, B; 
	cin>>N>>A>>B;  //faces, first_toss_val, second_toss_val
	
	float x; 
	float a=0;float b=0;
	//int arr[N];
	for(int i=0; i<N; i++){
		cin>>x; 
		if(x==A)a++;
		if(x==B)b++;
				}
	float mul;
	mul = (a*b)/(N*N);
	//cout<<" a"<< a<< " b"<< b<<" " ;
	cout<<mul<<endl;
	
}
return 0;
}
