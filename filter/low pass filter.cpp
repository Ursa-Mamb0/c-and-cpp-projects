#include <iostream>
#include <math.h>
using namespace std;
int main(){
	cout<<"||||||LOW PASS FILTER DESIGN APPLICATION v0.00||||||"<<endl;
	cout<<"enter capacitor value :"<<endl;
	float c;
	cin>>c;
	cout<<"enter cut off frequency :"<<endl;
	float f;
	cin>>f;
	float r;
	r=1/(2*3.14*f*c);
	cout<<"resistance value :"<<r;
	return 0;
	
	
	}

