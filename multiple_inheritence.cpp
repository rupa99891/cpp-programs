#include<iostream>
using namespace std;
class landvehicle{
public:
landvehicle(){
cout<<"This is a land vehicle"<<endl;
}
};
class watervehicle{
public:
watervehicle(){
cout<<"This is a water vehicle"<<endl;
}
};
class amphibiousvehicle:public watervehicle,public landvehicle{
public:
amphibiousvehicle(){
cout<<"This is an both land and water vehicle"<<endl;
}
};
int main(){
amphibiousvehicle obj;
return 0;
}
