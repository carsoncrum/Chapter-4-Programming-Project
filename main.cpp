// Calculating Shipping Charges
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
  double weight, distance;
  double rate, charges;

  do {
    cout << "Enter the weight of the package (in kilograms): ";
    cin >> weight;
    if (weight <= 0 || weight > 20) {
      cout << "Invalid weight. Please enter a weight between 0 and 20 kg." << endl;
    }
  } while (weight <= 0 || weight > 20);

  do {
    cout << "Enter the shipping distance (in miles): ";
    cin >> distance;
    if (distance < 10 || distance > 3000) {
      cout << "Invalid distance. Please enter a distance between 10 and 3000 miles." << endl;
    }
  } while (distance < 10 || distance > 3000);

  if (weight <= 2) {
    rate = 1.10;
  } else if (weight <= 6) {
    rate = 2.20;
  } else if (weight <= 10) {
    rate = 3.70;
  } else {
    rate = 4.80;
  }
  
  charges = rate * ceil(distance / 500.0); // ceil rounds up to the nearest integer

  cout << "Total shipping charges: $" << charges << endl;

  
  return 0;
}