#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userAge;

cout << "userAge: ";
cin >> userAge;

if (userAge > 15) {
   cout << "Can drive\n";
}if (userAge > 17) {
   cout << "Can vote\n";
}if (userAge > 24) {
   cout << "Can rent car\n";
cout << "Bye";
}
return 0;
}