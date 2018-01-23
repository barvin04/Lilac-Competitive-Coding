#include <bits/stdc++.h>
using namespace std; 

int main()
{
int T; 
cin>>T; 
while(T--){
	int a,b,c,d; 
	cin>>a>>b>>c>>d; 
	if ((a-b)==(c-d) || (a-b)==(d-c) ) cout<< "YES"<<endl; 
	else cout<< "NO"<< endl ; 
}
return 0; 
}
