#include <iostream>
using namespace std;
class Welcomemsg
{
  public:
  int msg(char fstname[100])
  {
   cout<<"Hi "<<fstname<<endl;
   return 0;
  }
  int msg(char fstname[100],char lstname[100])
  {
    cout<<"Welcome "<<fstname<<" "<<lstname<<endl;
    return 0;
  }
};
int main()
{
 Welcomemsg ob;
    char fname[100], f1name[100], lname[100];
    cin>>fname>>f1name>>lname;
    ob.msg(fname);
    ob.msg(fname,lname);
 return 0;}
