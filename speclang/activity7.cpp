#include <iostream>
#include <cmath>
using namespace std;

int main() {
int hotelRate = 155;
int userAge;

cout << "userAge: ";
cin >> userAge;

if (userAge > 65) {
   hotelRate = hotelRate - 20;
}
cout << "Your rate: ";
cout << hotelRate;
}