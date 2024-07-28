#include<iostream>
#include<string>
using namespace std;
int countUppercase(const string&text){
	int count=0;
	for(char c:text){
		if( c >= 'A' && c <= 'Z'){
			count++;
		}
	}
return count;
}
int main(){
	string text;
	cout<<"enter a text";
	getline(cin,text);
	cout<<"No of uppercase:"<<countUppercase(text)<<endl;
return 0;
}