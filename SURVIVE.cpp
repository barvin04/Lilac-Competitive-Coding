//thanks to Prakhar Kansal and Nikunj Singhal
#include <bits/stdc++.h>
using namespace std; 

int main()
{
	int T; 
	cin>>T;
	while(T--){
		int N; int K; int S; 
		cin>>N>>K>>S;

		if(S>6){
			if(6*(N-K)>=K){
			int p= K*S/N;
			if((K*S)%N==0){
				cout<<p<<endl;
			}
			else{
				cout<<p+1<<endl;
			}
		}
		else{
			cout<<-1<<endl;
		    }
		}
		if(S<7){
			if(N>=K){
				int p= K*S/N;
			if((K*S)%N==0){
				cout<<p<<endl;
			}
			else{
				cout<<p+1<<endl;
			}
			} 
		
			else{cout<<-1<<endl;}
		}
	}
}

