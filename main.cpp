//CHAPTER 1: Setup in VS Code and Installation
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
//#include <constants.cpp> // ask simon why adding this didn't work?
typedef std::vector<std::pair<std::string, int>> t_pairlist; // This gives the complex type 
//                                                              definition a simple alias to call it by. 
//                                                              Refer CHAPTER 5. 
//                                                              Common convention is to give
//                                                              these t_ for type.
typedef std::string t_text;
typedef int t_number;

// NAMESPACES SET FOR CHAPTER 4.
namespace chapter_4_first {
    int specialx = 5;
    int age = 33;
    std::string name;
}

namespace chapter_four_second {
    int specialx = 3;
}

namespace chapter_eight {
    double x = 3;
    double y = 4;
    double z;
}

namespace chapter_ten {
    double a;
    double b;
    double c;
}

//using namespace std; //Avoid doing this!!! There are many deeper datatypes inside std::,
//                       thus, it is very likely that a conflict will occur.

//CHAPTER 2: Variables and Data Types
int main(){
    std::cout << "Hello World!" << "\n";
    std::string z; //deceleration.
    z = " Mice."; //assignment.
    int x; //deceleration.
    x = 5; //assignment.
    int y = 6; //deceleration and assignment.
    //std::cout << z << "\n"; // "\n" means a new line in the output
    //std::cout << x << "\n";
    //std::cout << y << "\n";
    //std::cout << y+x<< "\n";

    //CHAPTER 2: Variables and Data Types
    //Integer (Whole Number)
    int age = 30;
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
    char initial = 'SPR'; // this will cause an overflow and only display the last character,
    //                       aka the 'R'.
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
    

    // CHAPTER 3: Discussing the Constant key word.
    // https://youtu.be/-TkoO8Z07hI?si=oS4H_9wQ80DTkpp6&t=1461
    // The const keyword specifies that a varibales value is constant and tells the compiler to
    // not let anything change it. Effectively, "Read Only" access.
    const double PI = 3.14159; //common naming convension for contstants is to make all of the
    //                           letters in the name UPPERCASE.
    const int LIGHTSPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    //PI = 420.69; // the program wont let us do this due to the const key word being used to
    //                not let PI be changed. 
    double radius = 10;
    double circumference = 2 * PI * radius;
    //std::cout << circumference << "cm" << "\n";


    //CHAPTER 4: Namespace = provideds a solution for preventing name conflicts in larger 
    //                       projects. Each entity needs a unique name. A namespace allows for
    //                       the identically named entities as long as the namespaces are
    //                       different.
    using namespace chapter_four_second;
    //int specialx = 0; //this would still overide the namespace value as it would be updating it.
    //int special_x = 1; //this code would cause an error! Redecleration of variable int 
    //                    special_x.
    //std::cout << "Namespace test default: specialx = " << specialx << "\n"; // this will use the local version of special_x because
    //                                we have not explicitly stated the namespace we want to use.
    //std::cout << "Namespace test chapter_4_first: specialx = " << chapter_4_first::specialx << "\n"; 
    // the two colons in the above code "::" are known as the Scope Resolution Operator. We use
    // it here to Prefix the namepsace to the special_x variable.


    //CHAPTER 5: typedef = reserved keyword used to create an additional name (alias) for
    //                     another data type aka. new identifiers for an existing
    //                     type. It helps with readability and reduces typos.
    //std::vector<std::pair<std::string, int>> pairlist; // Could do this! But because we defined
    //                                                    the a typedef shorter name for this at
    //                                                    the start of this program, we can use
    //                                                    its shorter name instead.
    t_pairlist pairlist;

    t_text firstName = "CHOUTZ";
    //t_number age = 33;
    //std::cout << firstName <<"\n";
    //std::cout << "Age: " << first::age <<"\n"; // Uses namespace 'first' using the 
    //                                            Scope Resolution Operator, aka the 
    //                                            double colon '::'.


    //CHAPTER 6: Arithmetic Operators = return the result of a specific arithmetic operations
    //                                  such as Addition +, Subtraction -, Multiplication *,
    //                                  and Division /.
    int students = 20;
    int divider = 3;
    //students = students + 1; // standard way. However there is a short hand way of writing this.
    //students+=1; // this would do the same thing.
    
    //students++; // If you want to add only 1 to a Variable, you can always use 
    //             the Incrimant Operator ++. This adds the value of 1 to the variable a
    //             and is the preferred way to add 1 if that is all you are adding.
    //            s You tend to see this in a lot of loops which are covered later.

    //students = students - 1;
    //students-=1;
    //students--;

    //students = students *2;
    //students*=2;
    //students = students / 3;
    //students/=3; //WARNING: if you do not change the Data Type for students to double,
    //                      the remainder will get cut off aka truncated. Else, you can use 
    //                      the Modulus operator % to get the remainder of any division.
    int remainder = students % divider; // For example, here, if student = 20, the output is 2. 
    //                                     This is because 3 divides into 20 up to 6 times with
    //                                     a remainder of "2" left over. Only the remainder is
    //                                     returned.
    //std::cout << "Number of students divided by " << divider << " is " << students/divider;
    //std::cout << " with remainder of " << remainder << "\n";
    // REMEMBER:: Order of operation is: Resolve Parenthesis first, then Multiplaction and
    //            Division, then Addition and Subtraction.


    // CHAPTER 7: Type Conversion = conversion of a value from one data type to another. There 
    //                              are two ways we can do this, which is called casting or
    //                              Type Casing.
    //                              Implicit cast = Automatic.
    //                              Explicit cast = Precede a value with new data type, for
    //                              (int) 
    // Starts here: https://youtu.be/-TkoO8Z07hI?si=UYHCTbSN6qirgnHG&t=2608
    int my_x = 3.14;
    //std::cout << "My x = " << my_x << ". "; // The decimal is truncated because int can only 
    //                                         display whole numbers.
    //
    // Let's try a type cast scenario.
    double my_y = (int) 4.14; // This will "Explicitly" cast this initially "double" type, aka
    //                           decimal, as an "int" type, aka whole number.
    //std::cout << "My y = " << my_y << "\n"; // The decimal is truncated because int can only display
    //                                 whole numbers.
    char char_x = 100; // What will happen here is that we will "Implicitly" cast the number 100
    //                    as an ASCII character.
    //std::cout << "ASCII Character of " << (int) char_x << " is " << char_x << "\n"; // ASCII table dictates that the mumber 100 answer should be the character 'd'.

    int correct = 8;
    int questions = 10;
    //double score = correct/questions * 100; // this will result in a 0%. Because we are using int
    //                                         division which truncates the decimal before
    //                                         multiplying by 100.
    //
    // Let's explicitly case questions and double data type.
    double score = correct/(double)questions * 100;
    //std::cout << score << " %" << "\n";


    //CHAPTER 8: User input = cin >> for Character Input as opposed to cout << for
    //                        Character Output. cout << is Insertion Operator. 
    //                        cin >> is Extraction operator.

    //std::cout << "What is your age?: ";
    //std::cin >> chapter_4_first::age;
    //std::cout << "What is your full name?: "; // WARNING: if we need to read a string that may
    //                                                    contain spaces, there is a function
    //                                                    that will help us with that.
    //std::getline(std::cin, chapter_4_first::name); // the getline() function will allow for white space
    //                                      characters to be inputed.
    //                                      WARNING: In the getline() function, there is a newline
    //                                      character "\n" at the end of the input. 
    //                                      This is accepted as input in any further cin >>!!
    //                                      To prevent this from hapopening, we modify the code.
    //std::getline(std::cin >> std::ws, chapter_4_first::name); // ws stands for White Spaces. This will
    //                                                 eliminate any White Space or newline
    //                                                 characters before any user input.
    //std::cout << "Hello, " << chapter_4_first::name << "\n";

    //std::cout << "You are " << chapter_4_first::age << " years old." << "\n";



    // CHAPTER 9: Useful math related functions : https://cplusplus.com/reference/cmath/
    // max()
    // chapter_eight::z = std::max(chapter_eight::x ,chapter_eight::y); //this is comparing x and y
    // //                                                                 from the namespace
    // //                                                                 "chapter_eight".
    // std::cout << "max() is " << chapter_eight::z << "\n";
    // // min()
    // chapter_eight::z = std::min(chapter_eight::x ,chapter_eight::y);
    // std::cout << "min() is " << chapter_eight::z << "\n";
    // // pow() included with the #include <cmath> library at the top of this file.
    // chapter_eight::z = pow(2,3); // raise 2 to the power of 3.
    // std::cout << "pow(2,3), otherwise, 2 to the power of 3 is: " << chapter_eight::z << "\n";
    // // sqrt()
    // chapter_eight::z = sqrt(9);
    // std::cout << "sqrt(9), otherwise, square root of 9 is: " << chapter_eight::z << "\n";
    // //abs = how far a number is away from zero. 
    // chapter_eight::z = abs(-33); // if a negative number is placed in here, it returns the positive
    // std::cout << "abs(-33), otherwise, absolute value of -33 is: " << chapter_eight::z << "\n";
    // //round() 
    // chapter_eight::z = round(-3.55); // if a negative number is placed in here, it returns the positive
    // std::cout << "round(-3.55), otherwise, rounded value of -3.55 is: " << chapter_eight::z << "\n";
    // //round() 
    // chapter_eight::z = round(-3.55); // if a negative number is placed in here, it returns the positive
    // std::cout << "round(-3.55), otherwise, rounded value of -3.55 is: " << chapter_eight::z << "\n";
    // //ceil() 
    // chapter_eight::z = ceil(2.2); // rounds up to nearest whole number
    // std::cout << "ceil(2.2) is " << chapter_eight::z << "\n";
    // //floor()
    // chapter_eight::z = floor(2.8); // rounds up to nearest whole number
    // std::cout << "floor(2.8) is " << chapter_eight::z << "\n";

    // CHAPTER 10: Practice Program to find the hypotinus of a triange
    // Formula is c = sqrt(a^2 + b^2)
    std::cout <<  "What is the Opposite side length? ";
    std::cin >> chapter_ten::b;
    std::cout <<  "What is the Adjacent side length? ";
    std::cin >> chapter_ten::a;
    std::cout << "The hypotenuse is : " << hypot(chapter_ten::b,chapter_ten::a); // https://cplusplus.com/reference/cmath/hypot/

    return 0;
}
