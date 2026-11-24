#include <iostream>
using namespace std;
double PowerOf_n(double n , int p){
	double result=1.0;
	for(int i=1;i<=p;i++){
		result*=n;
	}
	return result;
}
int main(){
	double number;
	int power;
	cout <<"enter your number";
	cin >>number;
	cout <<"enter your power";
	cin >>power;
	cout<<PowerOf_n(number,power)<<endl;
	return 0;
	
}
