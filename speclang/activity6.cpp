#include <iostream>
#include <cmath>
using namespace std;

int main() {
float bodyTemp;

cout << "Enter a number: ";
cin >> bodyTemp;

if (bodyTemp == 98.6){
   cout << "Exactly normal";
}else if (bodyTemp > 98.6) {
   cout << "Above normal";
}else if (bodyTemp < 98.6){
   cout << "Below normal";
}else{
   cout << "Error";
}
return 0;
}