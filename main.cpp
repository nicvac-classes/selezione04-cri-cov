#include <iostream>
using namespace std;
int main() {
  float a, b, c, max;
   cout << " inserisci 3 numeri " << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  if (a > b) 
  {
    if (a > c) 
    {
      max = a;
    } 
    else 
    {
      max = c;
    }
  }
  else 
  {
    if (b > c) 
    {
      max = b;
    } 
    else 
    {
      max = c;
    }
  }
  cout << " il numero maggiore fra i tre numeri è " << max << endl ;
}