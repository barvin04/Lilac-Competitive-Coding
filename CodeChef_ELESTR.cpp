#include <iostream>
using namespace std;

int main() {
float sr = 1.4142135;
int T; 
cin>>T;
while (T-->0){
float f, s, e;
cin>>f; //velocities
cin>>s;
cin>>e;

float p = e/s;

p = p/sr;

if (p>1){cout<<"Elevator\n";}
else {cout<<"Stairs\n";}



}
}
