#include <iostream>
using namespace std;

class catanddog
{public:
  int c,d,l,t;
  void count()
  {
   cin>>t;
    while(t--){
        cin>>c>>d>>l;
        long int u=l-4*d;
        if(u<0||(u%4!=0)||u>4*c)
        cout<<"no";
        else cout<<"yes";
        cout<<endl;
    }
  }
};
int main()
{
  catanddog pets;
  pets.count();
  return 0;
}
