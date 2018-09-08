#include <iostream> 
using namespace std; 

int main(){
	int T; 
	cin>>T; 
	while(T--){
		int N, M, X, Y;   //knowledge, power, inc_know, inc_pow
		cin>>N>>M>>X>>Y; 
/* initially, know==1, pow==1, 
solve --> inc know by X , push_up --> inc pow by Y
once can increase both by 1; 
*/
		int output = 0;
		//case 1, if ShareChat not required; 
		if((N-1)%X==0 && (M-1)%Y==0) output=1; 
		
		//case 2  ShareChat required 
		else if((N-2)%X==0 && (M-2)%Y==0 && N>1 && M>1) output=1; 
		
		if(output==1) cout<<"Chefirnemo"<<endl ; 
		else cout<<"Pofik"<<endl;
	}
	return 0; 
}