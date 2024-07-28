#include<iostream>
using namespace std;
double toFahrenheit(double c){ return (c*9/5)+32;}
double toCelsius(double f) { return (f-32)*5/9;}
int main(){
	double temp;
	char choice;
	cout<<"enter 'C' for C to F,'F' for F to C:"<<endl;
cin>>choice;
	cout<<"enter a temperature:";
	cin>>temp;
	if(choice=='C' || choice =='C'){
		cout<<"Temperature in Fahrenheit:"<<toFahrenheit(temp)<<endl;
	}else if(choice == 'F'|| choice =='F'){
		cout<<"temperature in Celsius :"<< toCelsius(temp)<<endl;
	}else{
		cout<<"invalid choice"<<endl;
	}
	return 0;
}