#include<iostream>
using namespace std;
class base{
	int a,b;
	public:
	base(int a,int b)
	{
		//this pointer is used to tell the compiler that the variable is belong to that class in which it will be use
		this->a=a;
		this->b=b;
	}
	~base()
	{
		cout<<a<<" and "<<b;
	}
};
int main()
{
	base t(45,49);
}