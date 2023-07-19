/*
* Date: 06/18/2023
*
* Assignment: Overloaded Hospital 
* 
* Description: Computes and displays charges for a patient's hospital stay.
*
***********************************************************************/

#include <iostream>
using namespace std;


double TotalCharges(double, double);
double TotalCharges(int, double, double, double);

int main()
{
    int choice;
    int totalDays = 0;
    float dailyRate = 0, medicalCharges = 0, hospitalSerivcesCharge = 0, totalCost;
    
    cout << "if inpatent, then type in 1. If outpatent, then type in 2 ";
    cin  >> choice;
     while(choice < 1 || choice > 2){
        cout << "please type 1 or 2 ";
            cin >> choice;
    }
    if (choice = 1) // calculates number of days spent in the hospital, daily rate, medication charges and hospital services
    {
        cout << "\nHow many days spent in hospital?";
        cin >> totalDays;
        
        cout << "\nWhat is the daily rate? $";
        cin >> dailyRate;
        
        cout << "\nWhat are the hospital medication charges? $";
        cin >> medicalCharges;
        
        cout << "\nWhat is the charges for hospital Services $";
        cin >> hospitalSerivcesCharge;
    }
    else //calcualtes only medication charges and hospital services
    {
        cout << "\nWhat are the hospital medication charges? $";
        cin >> medicalCharges;
        
        cout << "\nWhat is the charges for hospital Services $";
        cin >> hospitalSerivcesCharge;
    }
    totalCost = TotalCharges(totalDays, dailyRate, medicalCharges, hospitalSerivcesCharge);
        cout << totalCost;

    return 0;
}
double TotalCharges(double medicalCharges, double hospitalSerivcesCharge)
{
    double totalOutpatient = 0;
    totalOutpatient = hospitalSerivcesCharge + medicalCharges;
    return totalOutpatient;
}
double TotalCharges(int totalDays, double dailyRate, double medicalCharges, double hospitalSerivcesCharge)
{
    double totalInpatient = 0;
    totalInpatient = (totalDays * dailyRate) + medicalCharges + hospitalSerivcesCharge;
    return totalInpatient;
}
// shows for inpatient

//shows for outpatient





