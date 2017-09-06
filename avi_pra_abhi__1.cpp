#include <iostream>
using namespace std; 

int main(){
	
	int T; 
	cin>>T;
	while(T-->0){
		string a,b;
		cin>>a; 
		cin>>b;

		int sa = a.length();
		int sb = b.length();

		int flag = 0 ; 

		for(int i=0; i<sa; i++){
			for(int j =0; j<sb; j++){
				if (a[i]==b[j]){
					flag++;
					break;
							}

									}

								}

		if (flag>0) cout<<"Yes\n";
		if (flag==0) cout<<"No\n";
	
	}
	return 0;
}
	
	
