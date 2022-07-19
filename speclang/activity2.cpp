#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userNum;

cout << "Enter a number: ";
cin >> userNum;

if (userNum < 0) {
   cout << "< 0";
}else if ((userNum >= 0) and (userNum < 10)) {
   cout << "0-9";
}else if ((userNum >= 10) and (userNum < 20)) {
   cout << "10-19";
}
return 0;
}