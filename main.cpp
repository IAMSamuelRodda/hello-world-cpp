#include <iostream>
//#include <constants.cpp>

using namespace std;
int main(){
    std::cout << "Hello World!" << "\n";
    string z; //deceleration.
    z = " Mice."; //assignment.
    int x = 5; //deceleration and assignment.
    int y = 6; //deceleration and assignment.

    //std::cout << z << "\n"; // "\n" means a new line in the output
    //std::cout << x << "\n";
    //std::cout << y << "\n";
    //std::cout << y+x<< "\n";


    //Integer (Whole Number)
    int age = 33;
    int year = 2024;
    int days = 7.5; //this will be trunated aka. the .5 cut off the number.

    //std::cout << days << "\n";

    //Double (number including a decimal).
    double price = 10.99;       
    double gpa = 5.35;
    double temperature = 35.4;

    //std::cout << price << "\n";

    //Single character
    char grade = 'A'; // you must use single '' quotes for this one.
    char initial = 'SPR'; // this will cause an overflow and only display the last character, aka the 'R'.
    char currancy = '$';

    //std::cout << initial << "\n";

    //Boolean (true or false). It is applicable to anything that has two states.
    bool student = true; //think a swtich 
    bool power = false;
    bool sale = true;

    //Strings (objects that represents a sequences of text)
    std::string name = "Samuel";
    std::string day = "Wednesday";
    std::string food = "I like pizza";
    std::string address = "14 Excited Lane, Southport QLD";

    //std::cout << name << "\n";
    //std::cout << "Hello, " << name << "." << "\n";
    //std::cout << "You are " << age << " years old." << "\n";
    
    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}
