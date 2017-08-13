#include <iostream>
#include <vector>
using namespace std;

int main(){
int T;
cin>>T;
while (T-- >0){
int N,W,r,v;
cin>>N>>W;

vector <long long int> a(N);
long long int s = 0;
long long int f = 0;//count 

for (int i=0; i<N; i++){
cin>>a[i];
s+=a[i];	
			}
r= s%N;
if(r==0){
	v = s/N;
	for (int i=0; i<N-W; i++){
		if (a[i]==v) {continue;}
		long long int d =0;
		if(a[i]<v){
			d=v-a[i];
			a[i] += d;
			a[i+W] -= d;
			f+=d;
			   }
		if (a[i]>v){
			d=a[i]-v;
			a[i] -= d;
			a[i+W] += d;
			f+=d;
			   }			 
		
				}
	for(int i=N-W; i<N; i++){
		if (a[i]==v){continue;}
		else {
			f=-1;//prob
			break;//prob
		     }
				}	

	}	
else{
	f=-1;
    }
cout<<f<<endl;

      }
return 0;
}
