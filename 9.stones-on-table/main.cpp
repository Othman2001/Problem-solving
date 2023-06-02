#include <iostream>

using namespace std;

int main(){ 
int n;  string colors;
int counter = 0;
cin >> n ;
cin >> colors;
for (int  i = 0; i < colors.length(); i++)
{
  if(colors[i] == colors[i+1]) { 
    counter++;
  } 
}
cout << counter;
  return 0;
}