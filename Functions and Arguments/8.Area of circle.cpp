#include<iostream>
#include<cmath>
using namespace std;
double calculateArea(double radius){
	return M_PI *radius*radius;
}
int main()
{
	double radius;
	cout<<"enter a radius of circle:";
	cin>>radius;
	double area=calculateArea(radius);
	cout<<"the area of circle is:"<<area<<endl;
	return 0;
}