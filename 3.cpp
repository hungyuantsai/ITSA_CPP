#include <iostream>
using namespace std;
int main()
{
   int x,y;
  while(cin>>x>>y)
  {
    if((x-100)*(x-100)+y*y>40000) cout<<"outside";
    else cout<<"inside";
    cout<<endl;
  }
  return 0;
}