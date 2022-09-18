#include<iostream>
using namespace std;
class Store
{
public:
int itemcount(int id)
{
return id;
}
int itemcount(int totalavl,int consumed)
{
return totalavl-consumed;
}
};
int main() {
int id,totalavl,consumed;
int item,lol;
cin>>id>>totalavl>>consumed;

Store purchase;
item=purchase.itemcount(id);
cout<<item<<endl;
lol=purchase.itemcount(totalavl,consumed);
cout<<lol;

return 0;
}
