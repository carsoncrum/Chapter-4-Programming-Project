// Calculating Shipping Charges
#include <iostream>
using namespace std;

int main()

{
  int choice;
  double radius, length, width, base, height;

  cout << "Geometry Calculator" << endl;
  cout << "1. Calculate the Area of a Circle" << endl;
  cout << "2. Calculate the Area of a Rectangle" << endl;
  cout << "3. Calculate the Area of a Triangle" << endl;
  cout << "4. Quit" << endl;
  do {
    cout << "Enter your choice (1–4): ";
    cin >> choice;
    
    if (choice < 1 || choice > 4) {
      cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    } else {
      switch (choice) {
        case 1:
          cout << "Enter the radius of the circle: ";
          cin >> radius;
          if (radius < 0) {
            cout << "Invalid radius. Please enter a non-negative value." << endl;
          } else {
            double area = 3.14159 * radius * radius;
            cout << "The area of the circle is: " << area << endl;
          }
          break;
        case 2: 
          cout << "Enter the length of the rectangle: ";
          cin >> length;
          if (length < 0) {
            cout << "Invalid length. Please enter a non-negative value." << endl;
          } else {
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (width < 0) {
              cout << "Invalid width. Please enter a non-negative value." << endl;
            } else {
              double area = length * width;
              cout << "The area of the rectangle is: " << area << endl;
            }
          }
          break;
        case 3:
          cout << "Enter the base of the triangle: ";
          cin >> base;
          if (base < 0) {
            cout << "Invalid base. Please enter a non-negative value." << endl;
          } else {
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (height < 0) {
              cout << "Invalid height. Please enter a non-negative value." << endl;
            } else {
              double area = base * height * 0.5;
              cout << "The area of the triangle is: " << area << endl;
            }
          }
          break;
      }
    }
  } while (choice != 4);
  cout << "Goodbye!" << endl;
  
  return 0;
}