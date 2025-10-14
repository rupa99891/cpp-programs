#include<iostream>
using namespace std;
  template<class T>
  class calculator{
  	private:
  		T num1,num2;
  	public:
	  calculator(T n1, T n2){
	  	num1=n1;
	  	num2=n2;
	  }	
	  
	  T add(){ return num1+num2;}
  T sub(){return num1-num2;}
	  T multiply(){return num1*num2;}
	  T divide(){
	  if(num2!=0)return num1/num2;
	  else {
	  	cout<<"error!not divisible by zero:"<<endl;
	  	return 0;
	      }
          }
  };
  int main(){
  	calculator<int>intcalc(10,5);
  	cout<<"int calculation:"<<endl;
  	cout<<"Addition:"<<intcalc.add()<<endl;
  	cout<<"Subtraction:"<<intcalc.sub()<<endl;
  	cout<<"Multiply:"<<intcalc.multiply()<<endl;
  	cout<<"Division:"<<intcalc.divide()<<endl;
  	cout<<"-------------------------"<<endl;
  					
  	calculator<double>doublecalc(30.5,19.5);
  	cout<<"Double calculation:"<<endl;
  	cout<<"Addition:"<<doublecalc.add()<<endl;
  	cout<<"Subtraction:"<<doublecalc.sub()<<endl;
  	cout<<"Multiply:"<<doublecalc.multiply()<<endl;
  	cout<<"Division:"<<doublecalc.divide()<<endl;
  	cout<<"-------------------------"<<endl;				
  }
