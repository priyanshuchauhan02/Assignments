#include <iostream>
#include <cmath>   // for ceil()
using namespace std;

// Rate card constants
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

// Event class (OOP concept)
class Event {
private:
    string eventName;
    string firstName, lastName;
    int numberOfGuests;
    int numberOfMinutes;

public:
    // Function to take input
    void getDetails() {
        cout << "Enter Event Name: ";
        getline(cin, eventName);

        cout << "Enter First Name: ";
        cin >> firstName;

        cout << "Enter Last Name: ";
        cin >> lastName;

        cout << "Enter Number of Guests: ";
        cin >> numberOfGuests;

        cout << "Enter Number of Minutes: ";
        cin >> numberOfMinutes;
    }

    // Function to calculate and display cost
    void calculateCost() {
        int numberOfServers;
        double cost1, cost2, costForOneServer;
        double totalFoodCost, averageCost, totalCost, depositAmount;

        // Calculate servers required
        numberOfServers = ceil(numberOfGuests / 20.0);

        // Cost for one server
        cost1 = (numberOfMinutes / 60) * CostPerHour;
        cost2 = (numberOfMinutes % 60) * CostPerMinute;
        costForOneServer = cost1 + cost2;

        // Food cost
        totalFoodCost = numberOfGuests * CostOfDinner;

        // Average cost per person
        averageCost = totalFoodCost / numberOfGuests;

        // Total event cost
        totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        // Deposit (25%)
        depositAmount = totalCost * 0.25;

        // Output
        cout << "\n----- Event Cost Estimation -----\n";
        cout << "Event Name        : " << eventName << endl;
        cout << "Customer Name     : " << firstName << " " << lastName << endl;
        cout << "Guests            : " << numberOfGuests << endl;
        cout << "Minutes           : " << numberOfMinutes << endl;
        cout << "Servers Required  : " << numberOfServers << endl;
        cout << "Cost per Server   : $" << costForOneServer << endl;
        cout << "Food Cost         : $" << totalFoodCost << endl;
        cout << "Average Cost/Person: $" << averageCost << endl;
        cout << "Total Cost        : $" << totalCost << endl;
        cout << "Deposit Amount    : $" << depositAmount << endl;
        cout << "--------------------------------\n";
    }
};

// Main function
main() {
    Event e;
    e.getDetails();
    e.calculateCost();
}

