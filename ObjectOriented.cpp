/*What is object oriented programming?
It is a technique in which we visualize our programming problems in the form of
objects and their interactions as happens in real life.*/
#include<iostream>
using namespace std;

class Employee{
	private:
		//declaring variables privately
		int a ;
		int b;
		int c;
		public:
			//declaring variables public
			int d;
			int e;
			void setdata(int a1 ,int b1, int c1);             //Declaration
			//This will print data on the screen
			void getdata(){
				cout << "The Value Of a is = "  <<a<< endl;
				cout << "The Value Of b is = "  <<b<< endl;
				cout << "The Value Of c is = "  <<c<< endl;
				cout << "The Value Of d is = "  <<d<< endl;
				cout << "The Value Of e is = "  <<d<< endl;
			    cout << "The Value Of f is = "  <<e<< endl;
			}		
};
void Employee::setdata(int a1 ,int b1, int c1 ){
	a = a1;
	b = b1;
	c = c1;
}


int main(){
	Employee e1;
	e1.d = 20;
	e1.e = 30;
	e1.setdata(10 , 40, 60);
	e1.getdata();
}
