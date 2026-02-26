#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.1415926;

int main(){
/*
Topic 1: Variables and Identifiers
*/

int apples = 5;//declared and initiallized...
int oranges = 3;
int totalFruits = apples + oranges;

cout << "Topic 1: Variables and Identifiers\n";
cout << "Apples: "<< apples <<endl;
cout << "Oranges: "<<oranges <<endl;
cout << "Total Fruit: "<< totalFruits<< endl << endl;



// Topic 2: Arithmetic Expressions...

// Basic expressions
int a = 10, b = 4; 
int sum = a + b;
int diff = a - b ; 
int product = a * b ; 
int quotient = a / b ;
int remainder = a % b ;

// Topic 3: Floating Point numbers and precision...

double price = 19.99;
double taxRate = 0.075; // 7.5% sales tax...
double taxAmount = price * taxRate;
double totalPrice = taxAmount + price;

cout << "Topic 3 : Floating point numbers \n";
cout << "Base Price: "<< price<< endl;
cout<< "Tax Rate: "<< taxRate<< endl;
cout << "Tax amount: "<< taxAmount<< endl;

cout<< fixed << setprecision(2);

cout<< "Total price (fixed): "<< totalPrice<< endl;
//fixed changes from scientific to fixed-point notation

// Topic 4: Constant Variables (const)...

double radius = 2.5;
double circleArea = PI * radius * radius;

cout<< "Topic 4: Constant Variables\n";
cout<< "PI (constant): "<< PI<< endl;
cout << "Radius: "<< radius<< endl;
cout<< "Area of the circle: "<< circleArea <<endl <<endl;


//Topic 5: Math functions...

double number = 16.0;
double root = sqrt(number);
double power = pow(2.0, 8); // 2^8
double absolute = abs(-3.5);

cout << "Topic 5: Math Functions\n";
cout <<"Square root of "<<number<< " is "<< root << endl;
cout << "2^8 using pow is: "<< power<< endl;
cout << "abs of (-3.5) is "<< absolute<< endl;

// Topic 6 Int division and modulus...

int totalStudents = 23, groupSize = 4; 
int fullGroups = totalStudents / groupSize;
int leftOver = totalStudents % groupSize;

cout<< "Topic 6 Int division and Modulo\n";
cout << "Total students: "<< totalStudents<< endl;
cout<< "Group size: "<< groupSize<< endl;
cout<< "Full groups: "<< fullGroups<< endl;
cout<< "Left over students: "<< leftOver<< endl;

//Topic 7 : Type conversions (casting)...

int pizzas = 7, people = 2 ;

//Integer div ...
int slicesPerPersonInt = pizzas / people;

//floating point div...
double slicesPerPersonDouble = static_cast<double>(pizzas) / people;

cout<< "topic 7 type conversions\n";
cout << "pizzas: "<< pizzas<<endl;
cout << "People: "<< people<< endl;
cout << "Integer Division: "<< slicesPerPersonInt << endl;
cout << "Floating Point Division: "<< slicesPerPersonDouble << endl << endl;

double average = (people + pizzas)/ 2.0;
cout<< "Average of pizzas and people"<< average<< endl;

// Topic 8: Characters and ASCII code...

char letterA = 'A';
char letterB = 'B';
char digitChar = '7';

int codeA = static_cast<int>(letterA);
int codeB = static_cast<int>(letterB);
int codeDigit = static_cast<int>(digitChar);

cout << "Topic 8: Characters and ASCII code\n";
cout << "ASCII code of "<< letterA<< " is: "<< codeA<< endl;
cout << "ASCII code of "<< letterB<< " is: "<< codeB<< endl;
cout << "ASCII code of "<< digitChar<< " is: "<< codeDigit<< endl;

char nextLetter = letterA +1;
cout<< "The letter after "<<letterA << " is: "<< nextLetter<< endl;

}

/*Joe Coyle - 1/20/26*/