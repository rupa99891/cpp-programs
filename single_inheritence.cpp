
#include<iostream>
using namespace std;
class vehicle{
public:
vehicle(){
cout<<"This is a vehicle"<<endl;}
};
class car:public vehicle
{
	public:
car(){
cout<<"This vehicle is a car"<<endl;
}
};
int main()
{
car obj;
return 0;
}
