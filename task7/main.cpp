#include <iostream>
using namespace std;

void doSomething();
void doNothing();

int main () {
   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;
   
   doSomething();
   doNothing();
   return 0;
}