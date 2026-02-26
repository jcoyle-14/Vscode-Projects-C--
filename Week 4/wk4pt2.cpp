#include <iostream>
#include <string>
using namespace std;

int main(){

    cout<<"=== User Input Analyzer ==="<<endl<<endl;
    
    //Boolean 
    bool isAdmin = false, hasAccess = true;

    cout<<"Boolean Values: "<<endl;
    cout<<"isAdmin: "<<isAdmin<<endl;
    cout<<"hasAccess: "<<hasAccess<<endl;

    //Order of evaluations
    int a =10, b=5, c= 2;
    int result1 = a + b * c; // Multiplication happens first
    int result2 = (a+b)*c; // Parenthesis changes eval order

    cout<<"Order of evalutation: "<<endl;
    cout<<"Result1: "<<result1<< endl;
    cout<<"Result2: "<<result2<<endl;

    //Switch Statements
    int menuChoice;
    cout<<"Enter a menu choice (1-3): ";
    cin>> menuChoice;

    switch (menuChoice){
        case 1:
            cout<<"You chose option 1"<<endl;
            break;
        
        case 2:
            cout<<"You chose option 2"<<endl;
            break;
        
        case 3:
            cout<<"You chose option 3"<<endl;
            break;

        default:
            cout<<"Invalid Choice, Please select a number in range (1-3)";

    }
    cout<<endl;
    cin.ignore();
    //String access operations
    
    string role;
    cout<< "Enter your role (admin/ user/ guest): ";
    getline(cin, role);
    
    if(role == "admin"){
        cout<<"Full system access granted."<<endl;
    } else if(role != "guest"){
        cout<<"Standard user access."<<endl;
    }else{
        cout<<"Limited guest access."<<endl;
    }
    cout<<endl;
    //String access operations
    cout<<"First character of role: "<< role[0]<<endl;
    cout<<"Last character of role: " << role[role.length() - 1]<<endl;

    char firstChar = role[0];
    if(isalpha(firstChar)){
        cout<<"First character is a letter."<<firstChar<<endl;
    }
    cout<< "Uppercase version: "<<static_cast<char>(toupper(firstChar))<<endl<<endl;

    //Find, and replace text in a string

    int pos = role.find("ad");

    if(pos != string::npos){
        cout<<"ad found at position"<<pos<<endl;
    }else{
        cout<<"ad not found."<<endl;
    }

    role.insert(0, "[ROLE] ");

    role.replace(0, 6, "[USER] ");

    //Conditional expressions

    int age= 20;

    string status = (age >= 18) ?  "Adult" : "Minor";

    //Shortcut evalutations
    int number = 100;
    if(number != 0 && (100/number)> 2){
        cout<<"Valid number and division result >2"<<endl;
    }else{
        cout<<"Short - circuit prevented division"<<endl;
    }
    


}