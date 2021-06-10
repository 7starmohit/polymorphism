#include<iostream>
using namespace std;
class  base{
	public:
		virtual void print(){
			cout<<"this is base class print function"<<endl;
		}
		void display(){
			cout<<"this is base class display function"<<endl;
		}
};

class derived:public base{
	public:
		void print(){
			cout<<"this is derived class print function"<<endl;
			
		}
		void display(){
			cout<<"this is derived class display function"<<endl;
		}
};
int main(){
	base* base_class_pointer;
	derived obj1;
	base_class_pointer=& obj1;
	base_class_pointer->print();
	base_class_pointer->display();
	
	return 0;
}
