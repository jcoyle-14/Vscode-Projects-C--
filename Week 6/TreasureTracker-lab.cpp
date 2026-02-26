#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<int> treasureValues;
    vector<string> treasureNames;

    int choice = -1;

    cout << "Welcome to Treasure Tracker!\n";

    while (choice != 0) {

        cout << "\nMenu:\n";
        cout << "1. Add treasure\n";
        cout << "2. View treasures\n";
        cout << "3. Total value\n";
        cout << "4. Highest & Lowest\n";
        cout << "5. Find duplicates\n";
        cout << "0. Quit\n";
        cout << "Choice: ";
        cin >> choice;

        
        if (choice == 1){

            int value;
            string name;
            cout << "Enter treasure value: ";
            cin >> value;

            cout << "Enter treasure name: ";
            cin >> name;

            treasureValues.push_back(value);
            treasureNames.push_back(name);
            cout << "Treasure added!\n";
        }

        // VIEW 
        else if (choice == 2){

            if (treasureValues.size() == 0){
                cout << "No treasures stored.\n";
            }
            else{
                for (int i = 0; i < treasureValues.size(); i++){
                    cout << treasureNames[i]
                         << " = $" << treasureValues[i] << endl;
                }
            }
        }

        // TOTAL 
        else if (choice == 3){

            int total = 0;

            for (int i = 0; i < treasureValues.size(); i++){
                total += treasureValues[i];
            }

            cout << "Total treasure value: $" << total << endl;
        }

        // HIGHEST & LOWEST
        else if (choice == 4){

            if (treasureValues.size() == 0){
                cout << "No treasures stored.\n";
            }
            else {

                int highest = treasureValues[0];
                int lowest = treasureValues[0];

                for (int i = 1; i < treasureValues.size(); i++){

                    if (treasureValues[i] > highest){
                        highest = treasureValues[i];
                    }

                    if (treasureValues[i] < lowest){
                        lowest = treasureValues[i];
                    }
                }

                cout << "Highest value: $" << highest << endl;
                cout << "Lowest value: $" << lowest << endl;
            }
        }

        // FIND DUPLICATES
        else if (choice == 5) {

            bool foundDuplicate = false;

            for (int i = 0; i < treasureValues.size(); i++) {
                for (int j = i + 1; j < treasureValues.size(); j++) {

                    if (treasureValues[i] == treasureValues[j]) {

                        cout << "Duplicate value found: $"
                             << treasureValues[i] << endl;

                        foundDuplicate = true;
                    }
                }
            }

            if (!foundDuplicate) {
                cout << "No duplicates found.\n";
            }
        }

        else if (choice == 0) {
            cout << "Goodbye!\n";
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
