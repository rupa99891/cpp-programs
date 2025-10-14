#include<iostream>
using namespace std;
class complex{
private:
float real,image;
public:
complex(float r=0,float i=0):real(r),image(i){ }
void display(){
cout<<real<<"+"<<image<<"i"<<endl;
}
complex operator-(){
	return complex(-real,-image);
}
complex operator++(){
++real;
++image;
return *this;
}
complex operator+(const complex& obj){
return complex(real+obj.real,image+obj.image);
}
complex operator-(const complex& obj){
return complex(real-obj.real,image-obj.image);
}};
int main(){
complex c1(3,4),c2(1,2),c3;
cout<<"original complex numbers:"<<endl;
cout<<"c1=";c1.display();
cout<<"c2=";c2.display();
c3=-c1;
cout<<"\nAfter unary - on c1:"<<endl;
cout<<"c3=";c3.display();
++c1;
cout<<"\n After unary ++ on c1:"<<endl;
cout<<"c1=";c1.display();
c3=c1+c2;
cout<<"\nAfter c1+c2:"<<endl;
cout<<"c3=";c3.display();
c3=c1-c2;
cout<<"\nAfter c1-c2:"<<endl;
cout<<"c3=";c3.display();
return 0;
}
