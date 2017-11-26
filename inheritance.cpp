//program for single inheritance....
#include<iostream>
using namespace std;
class base
{
private:
  int rollno;
  int age;
public:
  void getdata()
  {
    cout<<"enter rollno:"<<endl;
    cin>>rollno;
    cout<<"enter age:"<<endl;
    cin>>age;
  }
  void display()
  {
    cout<<"Roll no. is ="<<rollno<<endl;
    cout<<"Age is="<<age<<endl;
  }
};
class derived: public base
{
private:
  char name[20];
public:
  void readdata()
  {
    getdata();
    cout<<"enter name:"<<endl;
    cin>>name;
  }
  void showdata()
  {
    display();
    cout<<"Name is:"<<name<<endl;
  }
};
int main()
{
  derived d;
  d.readdata();
  d.showdata();
  return 0;
}
