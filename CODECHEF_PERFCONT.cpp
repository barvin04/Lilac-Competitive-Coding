#include <bits/stdc++.h>
using namespace std; 

int main()
{
int T, n,p, lo,hi,loy,hiy ;
cin>>T;
while (T--)
{	
	cin>>n>>p; 
	int a[n]; 
	int loy=0; int hiy=0;
	lo= p/2;
	hi=p/10;
	/*if (n>3 || n==0) 
	{
		cout<<"no"<<endl; 
		continue;
	}*/
	for(int i=0; i<n; i++) 
	{
		cin>>a[i];
		if (a[i]>=lo) loy++;
		if (a[i]<=hi) hiy++;
	} 

	if (loy==1 && hiy==2) cout<< "yes"<<endl;
	else cout<<"no"<<endl;

}
return 0; 
}

