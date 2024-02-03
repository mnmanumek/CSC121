#include <iostream>

using namespace std;

float totalMilesPerDay, costPerGallon, avgMilesPerGallon, parkingFeesPerDay, tollsPerDay, dailyDrivingCost;

int main()
{
    cout << "Enter total miles driven per day: ";
    cin >> totalMilesPerDay;
    
    cout << "Enter cost per gallon of gasoline: ";
    cin >> costPerGallon;
    
    cout << "Enter average miles per gallon: ";
    cin >> avgMilesPerGallon;
    
    cout << "Enter parking fees per day: ";
    cin >> parkingFeesPerDay;
    
    cout << "Enter tolls per day: ";
    cin >> tollsPerDay;
    
    //calculates driving cost
    dailyDrivingCost = ((totalMilesPerDay / avgMilesPerGallon) * costPerGallon) + parkingFeesPerDay + tollsPerDay;
    
    //rounds up to the nearest cent
    dailyDrivingCost = ceil(dailyDrivingCost * 100) / 100;
    
    cout << "Your daily cost of driving to work is: $" << dailyDrivingCost << endl;
    
    return 0;
}
