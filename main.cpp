#include <iostream>
//#include <constants.cpp>

namespace first {
    int specialx = 1;
}

namespace second {
    int specialx = 2;
}

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
    

    // CHAPTER 3: Discussing the Constant key word. https://youtu.be/-TkoO8Z07hI?si=oS4H_9wQ80DTkpp6&t=1461
    // The const keyword specifies that a varibales value is constant and tells the compiler to not let anything change it. Effectively, "Read Only" access.
    const double PI = 3.14159; //common naming convension for contstants is to make all of the letters in the name UPPERCASE.
    const int LIGHTSPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    //PI = 420.69; // the program wont let us do this due to the const key word being used to not let PI be changed. 
    
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << "\n";

    //CHAPTER 4: Namespace = provideds a solution for preventing name conflicts in larger projects.
    //                       Each entity needs a unique name. A namespace allows for the identically named entities
    //                       as long as the namespaces are different.
    using namespace second;
    //int specialx = 0; //this would still overide the namespace value as it would be updating it.
    //int special_x = 1; //this code would cause an error! Redecleration of variable int special_x.
    std::cout << specialx << "\n"; // this will use the local version of special_x because we have not explicitly stated the namespace we want to use.
    std::cout << first::specialx << "\n"; // the two colons "::" are known as the Scope Resolution Operator. We use it here to Prefix the
                                  //  namepsace to the special_x variable.

    

    return 0;
}
