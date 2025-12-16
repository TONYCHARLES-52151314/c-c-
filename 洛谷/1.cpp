#include <iostream>
using namespace std;
int main()
{
  string words[6];
  for(int i=0;i<6;i++)
  {
    cin>>words[i];
  }
  string name;
  for(int i=0;i<6;i++){
    name+=words[i][0];
  }
  cout << name <<endl;
  return 0;
}