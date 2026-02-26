#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int vehicleType;
    double hours;

    int totalVehicles = 0;
    int paidVehicles = 0;
    int freeVehicles = 0;
    double totalRevenue = 0.0;

    // Format all money output
    cout << fixed << setprecision(2);

    // While loop to process multiple vehicles
    while (vehicleType != -1) {

        cout << "\nEnter vehicle type (1 = car, 2 = truck, -1 = quit): ";
        cin >> vehicleType;

        if (vehicleType == -1) {
            break;
        }

        if (vehicleType != 1 && vehicleType != 2) {
            cout << "Invalid vehicle type. Try again.\n";
            continue;
        }

        cout << "Enter number of hours parked: ";
        cin >> hours;

        double rate = 0.0;
        double fee = 0.0;

        // Determine hourly rate
        if (vehicleType == 1) {
            rate = 2.00;
        } else {
            rate = 3.50;
        }

        // Calculate parking fee
        if (hours <= 1.0) {
            fee = 0.0;
            freeVehicles++;
        } else {
            fee = rate * hours;
            paidVehicles++;
        }

        totalVehicles++;
        totalRevenue += fee;

        cout << "Parking fee for this vehicle: $" << fee << endl;
        cout << "Running total revenue: $" << totalRevenue << endl;
    }

    // Final summary
    cout << "\n===== Parking Summary =====\n";
    cout << "Total vehicles processed: " << totalVehicles << endl;
    cout << "Paid vehicles: " << paidVehicles << endl;
    cout << "Free vehicles: " << freeVehicles << endl;
    cout << "Total revenue collected: $" << totalRevenue << endl;

    return 0;
}
