#include <iostream>
using namespace std;

class FirstCpp
{
 private:
	 int val1;
	 int val2;

 public:
	void set_Val1(int a);
	void set_Val2(int b);

	int get_Val1();
	int get_Val2();
	int sum(int p, int q);


};

int FirstCpp::sum(int c, int d)
{
 return c+d;
}

void FirstCpp::set_Val1(int a)
{
 val1 = a;
}

void FirstCpp::set_Val2(int b)
{
val2 = b;
}

int FirstCpp::get_Val1()
{
return val1;
}

int FirstCpp::get_Val2()
{
 return val2;
}


int main()
{

int x,y;
 //int i;
// cin >> ";
FirstCpp fcppObj; // Object
fcppObj.set_Val1(12);
fcppObj.set_Val2(13);

x = fcppObj.get_Val1();
y = fcppObj.get_Val2();


 cout << "x = "<< x <<"\n";
 cout << "y = "<< y;
 cout << "\nSum of x and y:" << fcppObj.sum(x,y);
// cout <<"\n";
 //cout << "This is our First Class" <<x;



 return 0;
}
