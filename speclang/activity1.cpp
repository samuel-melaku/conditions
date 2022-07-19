#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userChannel;

cout << "Enter a number: ";
cin >> userChannel;

if ((userChannel >= 2) and (userChannel <= 499)){
   cout << "Standard";
}else if ((userChannel >= 1002) and (userChannel <= 1499)) {
   cout << "High del";
}else{
   cout << "Error";
}
return 0;
}