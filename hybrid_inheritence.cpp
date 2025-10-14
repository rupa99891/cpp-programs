#include<iostream>
using namespace std;
class vehicle{
public:
vehicle(){
cout<<"this is a vehicle"<<endl;
}
};
class fare{
public:
fare(){
cout<<"fare of a vehicle"<<endl;
}
};
class car:public vehicle{
public:
car(){
	cout<<"this vehicle is a car"<<endl;
}
};
class bus:public vehicle,public fare{
public:
bus(){
cout<<"this vehicle is a bus with fare"<<endl;
}
};
int main()
{
bus obj2;
}
