#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void show()
    {
        cout<<"base"<<endl;
    }
};
class derived:public base
{
public:
    void show()
    {
        cout<<"derived"<<endl;
    }
};
int main()
{
    base b;
    derived d;
    b.show();d.show();
}
