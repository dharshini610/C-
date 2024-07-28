#include<iostream>
#include<cctype>
using namespace std;
int main(){
	char ch;
	cout<<"enter a char:"<<endl;
	cin>>ch;
	ch=tolower(ch);
	if(ch =='a' || ch == 'e' || ch == 'i' || ch =='o' || ch =='u'){
		cout<<"its vowel"<<endl;
	}else if( ch >= 'a' and ch <= 'z'){
		cout<<"its is constant"<<endl;
}else{
	cout<<"its not a letter"<<endl;
}
return 0;
}

