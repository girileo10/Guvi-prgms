#include <iostream>
using namespace std;
int main() {
  int n,i,f=1;
  cin >> n;
  for(i=1;i<=n;i++)
    f*=i;
  
  cout << f << endl;
    return 0;
}
