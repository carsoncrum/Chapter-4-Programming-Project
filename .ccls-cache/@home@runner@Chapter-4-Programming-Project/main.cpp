// Calculating Days in a Month
#include <iostream>
using namespace std;

int main()

{
  int month, year;

  do {
    cout << "Enter a month (1–12): ";
    cin >> month;
    if (month < 1 || month > 12) {
      cout << "Invalid month. Please enter a month between 1 and 12." << endl;
    }
  } while (month < 1 || month > 12);

  cout << "Enter a year: ";
  cin >> year;
  bool isLeapYear = false;
  if (year % 100 == 0) {
    isLeapYear = (year % 400 == 0);
  } else {
    isLeapYear = (year % 4 == 0);
  }
  
  int daysInMonth;
  switch (month) {
    case 2:
      daysInMonth = (isLeapYear) ? 29 : 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      daysInMonth = 30;
      break;
    default:
      daysInMonth = 31;
  }
cout << daysInMonth << " days " << endl;
  
  return 0;
}