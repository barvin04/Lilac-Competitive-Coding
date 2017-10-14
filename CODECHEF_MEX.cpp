#include <bits/stdc++.h>
using namespace std; 

int main()
{
int T, s, k, inp; 
cin>>T;
while (T--)
{	
	cin>>s>>k; 
	int max = 0; //int brek = 0; 
	int a[s]; 
	for (int i=0; i<s; i++)
	{	cin>>a[i]; 
		if (a[i]>max) max=a[i]; 
	}
	int b[max];
	std::fill_n(b, max+1, -1);
	
	for (int i=0; i<s; i++) b[a[i]] = a[i];  
	//for (int i=0; i<max+1; i++) cout<<b[i]<<" "; 

	if (s+k>max) 
	{	cout<<s+k<<endl;  //if out of array 
		continue; //	break; 
	}


	/*
	int p=0; 
	for (int i=0; i<k; i++) if(b[i]==-1) p++; 		

	for (int i=p+k; i<max+1; i++)
	{	
		if (b[i]==-1) 
		{cout<<i<<endl;
		break;} //continue;
	}
	*/
	int p=0; 
	while(k+1){
		if(b[p] == -1) {  k--;}
		p++;
	}
	cout<<p-1<<endl; 
}
return 0; 
}

