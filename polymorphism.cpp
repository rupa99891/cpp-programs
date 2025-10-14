#include<iostream>
using namespace std;
class shape{
public:
virtual void draw(){
cout<<"Draw a generic shape"<<endl;
}};
class circle:public shape{
public:
void draw()override{
cout<<"Drawing a circle"<<endl;
}
};
class Rectangle:public shape{
public:
void draw()override{
cout<<"Drawing a Rectangle"<<endl;
}
};
class Triangle:public shape{
	public:
void draw()override{
cout<<"Drawing a Triangle"<<endl;
}
};
int main(){
shape*shapeptr;
circle c;
shapeptr=&c;
shapeptr->draw();
Rectangle r;
shapeptr=&r;
shapeptr->draw();
Triangle T;shapeptr=&T;
shapeptr->draw();
shape s;
shapeptr=&s;
shapeptr->draw();
return 0;
}
