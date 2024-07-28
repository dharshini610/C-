#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	if(num > 0){
		cout<<"the number is positive number"<<endl;
    }else if(num < 0){
    	cout<<"the number is negative number"<<endl;
}else{
	cout<<"the number is zero"<<endl;
}
return 0;
}
