#include <bits/stdc++.h>
using namespace std; 

int main(){
	int T; 
	cin>>T; 
	while(T--)
	{
		int total_boxes, current, step;
		cin>>total_boxes>>current>>step; 
		int a, b;  
		while(step--){
			cin>>a>>b; 
			if(a==current)current=b; 
			else if(b==current)current=a;
			//cout<<current<<endl;
		}
	cout<<current<<endl; 
	}
	return 0; 
}