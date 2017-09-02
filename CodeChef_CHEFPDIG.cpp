//A BIG thanks to AVIRAL ... 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T;
	cin>>T; 
	while(T-->0){
		string s ;
		cin>>s; 
		int size = s.length(); //take in int as string 

		int arr[10];
		for (int i=0; i<10; i++) arr[i]=0;

		for (int i=0; i<size; i++){//take in all the digit numbers
			int k = (int)s[i]; //take the ascii value of INTEGER s[i] is int, (int)s[i] is ascii 
			k = k-48;
			arr[k]++; //increasing the kth alphabet in the array 
		}
		vector<char> A; //
		for(int i=65; i<=90; i++){
			int a = i%10; 
			int b = (i-a)/10;
			if(arr[a]>=2 && a==b){A.push_back((char)i);}//if the character found
			//66 or 77 or 88
			else if(a!=b && arr[a]>=1 && arr[b]>=1){A.push_back((char)i);}

		}

	//cout the elements 
	for(int i=0; i<A.size(); i++){cout<<A[i];}
	cout<<endl; 
	}
}