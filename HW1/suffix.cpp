#include <iostream>
#include <string>

using namespace std;

int number;
int lastTwoDigits;

string getSuffix() 
{
    
    lastTwoDigits = number % 100;
    
    //special cases
    if (lastTwoDigits == 11 || lastTwoDigits == 12 || lastTwoDigits == 13) 
    {
        return "th";
    }

    switch (number % 10) 
    {
        case 1:  return "st";
        case 2:  return "nd";
        case 3:  return "rd";
        default: return "th";
    }
}

int main() 
{
    cout << "Enter an integer: ";
    cin >> number;

    string suffix = getSuffix();

    cout << "The number and its suffix is: " << number << suffix << endl;

    return 0;
}
