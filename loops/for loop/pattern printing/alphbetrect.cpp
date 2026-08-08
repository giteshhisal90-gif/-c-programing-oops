#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number of rows : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    char a = 97;
    for (int j = 1; j <= n; j++)
    {
      // char ch = a;
      cout << a << " ";
      a = a + 1;
    }
    cout << endl;
  }
}