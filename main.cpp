//CHAPTER 1: Setup in VS Code and Installation
// Library inclusions
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
//#include <constants.cpp> // ask simon why adding this didn't work?
typedef std::vector<std::pair<std::string, int>> t_pairlist; // This gives the complex type 
//                                                              definition a simple alias to call it by. 
//                                                              Refer CHAPTER 5. 
//                                                              Common convention is to give
//                                                              these t_ for type.
typedef std::string t_text;
typedef int t_number;

// FUNCTION DECLARATIONS!
// So long as you declare before you use a function, you can define it after you use it.
void happyBirthday (std::string name, int age);
double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
//void printNum(int myNum);
void printNum();
double getTotal(double array[], int size);
int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);
void bubbleSort(int array[], int size);


//GLOBAL VARIABLES
//WARNING: It is best to avoid Global variables if you can as it pollutes the global namespace.
//         Also, variables declared inside functions are more secure, as functions cannot see
//         inside of other functions without the perameters being explicitly defined.
int myNum = 3;



// COURSE NAMESPACES.
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
namespace chapter_eleven {
    int age;
}
namespace chapter_17 {
    std::string name;
}
namespace chapter_18{
    std::string name;
}
namespace chapter_19{
    int number;
}
namespace chapter_20{
    int index;
    int i;
    int countdown;
}
namespace chapter_21{
    int index;
    int i;
}

//using namespace std; //Avoid doing this!!! There are many deeper datatypes inside std::,
//                       thus, it is very likely that a conflict will occur.

//CHAPTER 2: Variables and Data Types
int main(){
    std::cout << "~~~~~~~~~~~ PROGRAM STARTED ~~~~~~~~~~~\n\n";
    // std::string z; //deceleration.
    // z = " Mice."; //assignment.
    // int x; //deceleration.
    // x = 5; //assignment.
    // int y = 6; //deceleration and assignment.
    // //std::cout << z << "\n"; // "\n" means a new line in the output
    // //std::cout << x << "\n";
    // //std::cout << y << "\n";
    // //std::cout << y+x<< "\n";
    // //
    // //Integer (Whole Number)
    // int age = 30;
    // int year = 2024;
    // int days = 7.5; //this will be trunated aka. the .5 cut off the number.
    // //std::cout << days << "\n";
    // //
    // //Double (number including a decimal).
    // double price = 10.99;       
    // double gpa = 5.35;
    // double temperature = 35.4;
    // //std::cout << price << "\n";
    // //
    // //Single character
    // char grade = 'A'; // you must use single '' quotes for this one.
    // char initial = 'SPR'; // this will cause an overflow and only display the last character,
    // //                       aka the 'R'.
    // char currancy = '$';
    // //std::cout << initial << "\n";
    // //
    // //Boolean (true or false). It is applicable to anything that has two states.
    // bool student = true; //think a swtich 
    // bool power = false;
    // bool sale = true;
    // //
    // //Strings (objects that represents a sequences of text)
    // std::string name = "Samuel";
    // std::string day = "Wednesday";
    // std::string food = "I like pizza";
    // std::string address = "14 Excited Lane, Southport QLD";
    //std::cout << name << "\n";
    //std::cout << "Hello, " << name << "." << "\n";
    //std::cout << "You are " << age << " years old." << "\n";
    
    

    // CHAPTER 3: Discussing the Constant key word.
    // https://youtu.be/-TkoO8Z07hI?si=oS4H_9wQ80DTkpp6&t=1461
    // The const keyword specifies that a varibales value is constant and tells the compiler to
    // not let anything change it. Effectively, "Read Only" access.
    // const double PI = 3.14159; //common naming convension for contstants is to make all of the
    // //                           letters in the name UPPERCASE.
    // const int LIGHTSPEED = 299792458;
    // const int WIDTH = 1920;
    // const int HEIGHT = 1080;
    // //PI = 420.69; // the program wont let us do this due to the const key word being used to
    // //                not let PI be changed. 
    // double radius = 10;
    // double circumference = 2 * PI * radius;
    //std::cout << circumference << "cm" << "\n";



    //CHAPTER 4: Namespace = provideds a solution for preventing name conflicts in larger 
    //                       projects. Each entity needs a unique name. A namespace allows for
    //                       the identically named entities as long as the namespaces are
    //                       different.
    //using namespace chapter_four_second;
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
    // t_pairlist pairlist;
    // t_text firstName = "CHOUTZ";
    //t_number age = 33;
    //std::cout << firstName <<"\n";
    //std::cout << "Age: " << first::age <<"\n"; // Uses namespace 'first' using the 
    //                                            Scope Resolution Operator, aka the 
    //                                            double colon '::'.



    //CHAPTER 6: Arithmetic Operators = return the result of a specific arithmetic operations
    //                                  such as Addition +, Subtraction -, Multiplication *,
    //                                  and Division /.
    // int students = 20;
    // int divider = 3;
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
    //int remainder = students % divider; // For example, here, if student = 20, the output is 2. 
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
    // // Starts here: https://youtu.be/-TkoO8Z07hI?si=UYHCTbSN6qirgnHG&t=2608
    // int my_x = 3.14;
    // //std::cout << "My x = " << my_x << ". "; // The decimal is truncated because int can only 
    // //                                         display whole numbers.
    // //
    // // Let's try a type cast scenario.
    // double my_y = (int) 4.14; // This will "Explicitly" cast this initially "double" type, aka
    // //                           decimal, as an "int" type, aka whole number.
    // //std::cout << "My y = " << my_y << "\n"; // The decimal is truncated because int can only display
    // //                                 whole numbers.
    // char char_x = 100; // What will happen here is that we will "Implicitly" cast the number 100
    // //                    as an ASCII character.
    // //std::cout << "ASCII Character of " << (int) char_x << " is " << char_x << "\n"; // ASCII table dictates that the mumber 100 answer should be the character 'd'.
    // int correct = 8;
    // int questions = 10;
    //double score = correct/questions * 100; // this will result in a 0%. Because we are using int
    //                                         division which truncates the decimal before
    //                                         multiplying by 100.
    //
    // Let's explicitly case questions and double data type.
    //double score = correct/(double)questions * 100;
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



    // CHAPTER 10: Practice Program to find the hypotinus of a triangle
    // Formula is c = sqrt(a^2 + b^2)
    // std::cout <<  "What is the Opposite side length? ";
    // std::cin >> chapter_ten::b;
    // std::cout <<  "What is the Adjacent side length? ";
    // std::cin >> chapter_ten::a;
    // std::cout << "The hypotenuse is : " << hypot(chapter_ten::b,chapter_ten::a); // https://cplusplus.com/reference/cmath/hypot/



    // CHAPTER 11: if statements = do something if condition is true. If not, then don't do it.
    // std::cout << "Enter your age: ";
    // std::cin >> chapter_eleven::age;
    // if (chapter_eleven::age >= 18)
    // {
    //     std::cout << "Welcome to the site!";
    // }
    // else if(chapter_eleven::age < 0)
    // {
    //     std::cout << "You have not been born yet!";
    // }
    // else if (chapter_eleven::age == 17)
    // {
    //     std::cout << "You are ALMOST old enough to enter...";
    // }
    // else if (chapter_eleven::age >= 100) // WARNING: We run the above code first. As age >= 18
    // //                                               was resolved first, we excited the if loop.
    // //                                               In this case, you should move this to the top
    // //                                               if you want this code to run correctly.
    // {
    //     std::cout << "You are too old to enter the site!";
    // }
    // else 
    // {
    //     std::cout << "You are not old enough to enter!";
    // }



    // CHAPTER 12: Switch = alterative to using many "else of" statements. It compares one value
    //                      against matching cases.
    //
    // Here is an example of what to avoid doing!!!
    // int month;
    // std::cout << "Entre the month (1-12): ";
    // std::cin >> month;
    // if(month == 1)
    // {
    //     std::cout << "It's January";
    // }
    // else if(month ==2) 
    // {
    //     std::cout << "It's February";
    // }
    //etc etc,
    // Instead, use a swtich.
    //
    //Here is a better example:
    // int month;
    // std::cout << "Entre the month (1-12): ";
    // std::cin >> month;
    // switch(month){
    //     case 1:
    //         std::cout << "It is January";
    //         break;
    //     case 2:
    //         std::cout << "It is February";
    //         break;
    //     case 3:
    //         std::cout << "It is March";
    //         break;
    //     case 4:
    //         std::cout << "It is April";
    //         break;
    //     case 5:
    //         std::cout << "It is May";
    //         break;
    //     case 6:
    //         std::cout << "It is June";
    //         break;
    //     case 7:
    //         std::cout << "It is July";
    //         break;
    //     case 8:
    //         std::cout << "It is August";
    //         break;
    //     case 9:
    //         std::cout << "It is September";
    //         break;
    //     case 10:
    //         std::cout << "It is October";
    //         break;
    //     case 11:
    //         std::cout << "It is November";
    //         break;
    //     case 12:
    //         std::cout << "It is December";
    //         break;
    //     default:
    //         std::cout << "Please enter in only numbers (1-12)";
    // }



    //CHAPTER 13: Calculator program
    // char op;
    // double num1;
    // double num2;
    // double result;
    // std::cout << "~~~~~~~~~~~~ CALCULATOR APP ~~~~~~~~~~~~\n";
    // std::cout << "Enter your first number: ";
    // std::cin >> num1;
    // std::cout << "Enter either + - * / here: ";
    // std::cin >> op;
    // std::cout << "Enter your second number: ";
    // std::cin >> num2;
    // switch (op) // We use op here as we are examining cases of different operators.
    // {
    //     case '+': //make sure the operator sign is inside single quotes '' as it needs to be 
    //     //          a character "char" in this case.
    //         result = num1 + num2;
    //         std::cout << "Your result is : "<< result << "\n";
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         std::cout << "Your result is : "<< result << "\n";
    //         break;
    //     case '*':
    //         result = num1 * num2;
    //         std::cout << "Your result is : "<< result << "\n";
    //         break;
    //     case '/':
    //         result = num1 / num2;
    //         std::cout << "Your result is : "<< result << "\n";
    //         break;
    //     default:
    //         std::cout << "Please enter valid numbers and operator characters only.";
    // }
    // std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";



    //CHAPTER 14: Ternary Operator, aka ?:
    //            This operator is a replacement to using an if/else statement.
    //            For example,
    //            condition ? expression1 : expression2;
    //
    // Proper example.
    //int my_grade = 75;
    // if(grade >= 60)
    // {
    //     std::cout << "You pass!";
    // }
    // else
    // {
    //     std::cout << "You FAILED!";
    // }
    // We can replace the above example with the following.
    //my_grade >= 60 ? std::cout << "You passed!" : std::cout << "You failed!";
    //
    //bool hungry = false;
    //hungry ? std::cout << " You are hungry." : std::cout << " You are full.";
    // NOTE: there is no need to write the above as hungry == true as this is the default if 
    //       not addressed or left out as in the above example.
    // The below will also work!
    //std::cout << (hungry ? " You are hungry." : " You are full.");



    //CHAPTER 15: Logical operators
    //            && = checks if two conditions are true.
    //            || = checks if at least one of the two conditions are true.
    //            !  = reverses the logical state of its operand.
    //int temp;
    //std::cout << "Enter the temperature: ";
    //std::cin >> temp;
    // if (temp > 0 && temp <30) // this if statement is only activated if BOTH conditions are true.
    // {
    //     std::cout << "The temperatures is good!";   
    // }
    // else 
    // {
    //     std::cout << "The temperatures is bad!";   
    // }
    // if (temp <= 0 || temp >= 30) // this if statement is only activated if one of these are met.
    // {
    //     std::cout << "The temperatures is bad!";   
    // }
    // else 
    //
    // {
    //     std::cout << "The temperatures is good!";   
    // }
    //
    // bool sunny;
    // std::cout << "Is it sunny? (yes = 1, no = 0): "; // it seems you cannot give it true or false. 
    // std::cin >> sunny;
    // if (sunny) // this if statement is only activated if BOTH conditions are true.
    // {
    //     std::cout << "It is sunny.";   
    // }
    // else if (!sunny)
    // {
    //     std::cout << "It is cloudy!";   
    // }
    // else 
    // {
    //     std::cout << "Please enter 1 or 0.";
    // }

    
    
    // CHAPTER 16: Temperature calculator.
    // I skipped this lesson / chapter



    // CHAPTER 17: Useful string methods in C++.
    // see chapter_17 namespace at the top of this file for the std::string name; declaration.
    //std::cout << "Enter your name: ";
    //std::getline(std::cin, chapter_17::name);
    // if(chapter_17::name.length()>12) //the built in length of a string in characters.
    // {
    //     std::cout << "Your name cannot be over 12 characters long.";
    // }
    // else 
    // {
    //     std::cout << "Welcome, " << chapter_17::name;
    // }
    //
    //
    // if(chapter_17::name.empty()) //checks to see if string is empty and returns a bool.
    // {
    //     std::cout << "You didn't enter your name. :(";
    // }
    // else 
    // {
    //     std::cout << "Welcome, " << chapter_17::name;
    // }
    //
    // chapter_17::name.clear();
    // std::cout << "Hello, " << chapter_17::name; // You won't have a name as the value of
    // //                                             name is cleared.
    //
    // chapter_17::name.append("@gmail.com"); // this adds aka "connects" this new text to the string
    // std::cout << "Your usename is " << chapter_17::name; 
    //chapter_17::name.at(0); // this returns the character at position 0 aka the first character
    //                         in the string.
    //std::cout << "The character at this position is : " << chapter_17::name.at(0);
    //std::cout << "Your username is : " << chapter_17::name.insert(0,"@"); // Inserts characters at position specified
    //                                                                       in string
    //std::cout << "Your username is : " << chapter_17::name.find(" "); // This will give the position of the first white space.
    //chapter_17::name.erase(0,5); // this erases characters from a string. 0 is the starting index. 3 is the number of
    //                             characters erased, or more accurately, the ending index (not inclusive).
    // More info here: https://cplusplus.com/reference/string/string/ 
    //std::cout << "Your name is : " << chapter_17::name; 



    // CHAPTER 18: While loops = alternative to if statements that potentially repeat code an infinite amount of times
    //                           until a condition is met.
    // Useful example:
    // if(chapter_18::name.empty()){
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, chapter_18::name); 
    // } //This returns no name!!! Use a while function instead; see below.
    // while(chapter_18::name.empty()){
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, chapter_18::name); 
    // } //This returns no name!!! Use a while function instead; see below.
    // std::cout << "Hello, " << chapter_18::name;



    // CHAPTER 19: do while loops = do some block of code first, THEN repeat again if condition is true.
    // Here is an example that uses a while loop which I can then show would be better with a do while loop.
    // while (chapter_19::number < 0){ // we have declared our number in chapter_19 namespace int number; it is 0.
    // //                                 When we reach the while loop, the loops is by passed as it is 0 already!
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> chapter_19::number;
    // }
    // // We could do this: it is a bad solution as it duplicates code. It is not DRY.
    // std::cout << "Enter a positive number: ";
    // std::cin >> chapter_19::number;
    // while (chapter_19::number < 0){
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> chapter_19::number;
    // }
    //
    //
    // Better to use a do while loop:
    // do 
    // { // we have declared our number in chapter_19 namespace int number; it is 0.
    // //                                 When we reach the while loop, the loops is by passed as it is 0 already!
    //     std::cout << "Enter a positive number: ";
    //     std::cin >> chapter_19::number;
    // } 
    // while (chapter_19::number < 0);
    // std::cout << "The number is : " << chapter_19::number;



    // CHAPTER 20: for loops = loop that iterates a fixed number of times
    // for (chapter_20::index = 1; chapter_20::index <=5; chapter_20::index++){ // Many people replace 'index' with 'i'
    //     std::cout << "Happy New Year!\n";
    // }
    // chapter_20::countdown = 11;
    // for (chapter_20::index = 1; chapter_20::index <=10; chapter_20::index++){ // A count down!
    //     std::cout << chapter_20::countdown - chapter_20::index << "\n";
    // }
    // std::cout << "Happy New Year!\n";
    //
    // chapter_20::countdown = 10;
    // for (chapter_20::index = 0; chapter_20::index < 10; chapter_20::index+=2){ // A count down by 2!
    //     std::cout << chapter_20::countdown - chapter_20::index << "\n";
    // }
    // std::cout << "Happy New Year!\n";
    //
    // chapter_20::countdown = 10;
    // for (chapter_20::index = 0; chapter_20::index < chapter_20::countdown; chapter_20::index+=2){ // A count down by 2!
    //     std::cout << chapter_20::countdown - chapter_20::index << "\n";
    // }
    // std::cout << "Happy New Year!\n";
    //
    // for (chapter_20::index = 10; chapter_20::index > 0 ; chapter_20::index--){ // A better countdown!!
    //     std::cout << chapter_20::index << "\n";
    // }
    // std::cout << "Happy New Year!\n";



    //CHAPTER 21: break; and continue; 
    //            break = breaks out of a loop.
    //            continue = skips current iteration in the loop.
    //
    // Let's skip the number 13.
    // for(chapter_21::i =1; chapter_21::i <= 20; chapter_21::i++){
    //     if(chapter_21::i == 13){
    //         continue; // if we used break here, it would break out of the loop and finish at 12.
    //     }
    //     std::cout << chapter_21::i << "\n";
    // }



    //CHAPTER 22: Nested loops = a loop that is inside another loop.
    /*          
            loop(){
                loop(){

                }
            }
    */
    // Let's start with the inner loop. We are counting up to 10.
    // for( int i =1; i <= 10; i++){
    //     std::cout << i << " "; // 
    // }
    // Now, let's make the outer loop. We will need to update the index on the inner to j. This is convension.
    // for (int i = 1; i <= 3; i++){
    //     for( int j =1; j <= 10; j++){
    //     std::cout << j << " ";
    //     }
    //     std::cout << "\n";
    // }
    // practice program: Print out a rectangle made of asci characters with the user specifying the dimensions.
    // int height;
    // int width;
    // char symbol;
    // std::cout << "Enter a height: ";
    // std::cin >> height;
    // std::cout << "Enter a width: ";
    // std::cin >> width;
    // std::cout << "Enter a symbol: ";
    // std::cin >> symbol;
    // for (int i = 1; i <= height; i++){
    //     for( int j =1; j <= width; j++){
    //     std::cout << symbol << " ";
    //     }
    //     std::cout << "\n";
    // }



    //CHAPTER 23: Random number generator.
    /*          
        For clarity, these are pseduo-random = NOT truely random (but close)
        This would work perfect for rolling dice for a game.
    */
    //srand(time(NULL)); // srand() is the random number generator and it needs a seed.
    //                    Programmers tyically use the current calendar time as a seed shown as time(NULL) 
    //int num = rand(); //using the rand() function, a number between 0 and 32767 will be generated.
    //                  What if we don't need a number that large? We can use the modulus operator aka %
    //int num = rand() % 6; //modulus gives us the remainder a division, whatever number 
    // 
    // int num1 = 1 + (rand() % 6); //technically, as the range was between 0 - 5, we add 1 to make
    // //                             it 1 - 6.
    // int num2 = 1 + (rand() % 6);
    // int num3 = 1 + (rand() % 6);
    // std::cout << num1 << "\n";
    // std::cout << num2 << "\n";
    // std::cout << num3 << "\n";



    //CHAPTER 24: Random event generator.
    /*          
        Combining Random number generator with a switch.
    */
    // // srand(time(NULL)); //initialising the random number's seed.

    // // int num = 1 + (rand() % 6); 
    // // std::cout << "You rolled a " << num << "\n";
    // // switch (num){
    // //     case 1: 
    // //         std::cout << "You found a sword!";
    // //         break;
    // //     case 2:
    // //         std::cout << "IT'S A TRAP!";
    // //         break;
    // //     case 3:
    // //         std::cout << "You found a potato.";
    // //         break;
    // //     default:
    // //         std::cout << "Nothing happened.";
    // //         break;
    // // }
    
    // //CHAPTER 25: Number guessing game.
    // // We will need to record the users attempt
    // // We will need to count the number of attempts
    // // We will need to compare the final result.
    // // Start from the ideal solution and work back.
    // //
    // // INITIALISING THE VARIABLES
    // char playAgain;
    // int userGuess;
    // int secretNumber;
    // int attemptNumber;
    // srand(time(NULL)); //initialises the random number generator.
    // //
    // // THE GAME.
    // do 
    // {
    //     attemptNumber = 0;
    //     secretNumber = rand() % 100 + 1; // generates a new secret number.
    //     do 
    //     {
    //         std::cout << "Guess a number between 1 and 100: ";
    //         std::cin >> userGuess;
    //         attemptNumber++; // this is the same as: attemptNumber = attemptNumber + 1;
    //         if (userGuess > secretNumber)
    //         {
    //             std::cout << "Too high! Try again.\n";
    //         }
    //         else if (userGuess < secretNumber)
    //         {
    //             std::cout << "Too low. Try again.\n";
    //         }
    //     } while (userGuess !=  secretNumber);
    //     std::cout << "\nYou got it right in " << attemptNumber << " guesses! Legendary move. \n\n";
    //     std::cout << "Do you want to play again (Y/N)? ";
    //     std::cin >> playAgain;
    // } while (playAgain == 'Y' || playAgain == 'y');

    // std::cout << "Thanks for playing my game!";

    

    //CHAPTER 26: function = block of reusable code. https://youtu.be/-TkoO8Z07hI?si=2y7cuoEOdPoxltsy&t=7624 
    //
    // std::string name = "CHOUTZ";
    // int age = 33;
    //
    // happyBirthday(name, age); //when you send data over to another function, that is called an Argument.



    //CHAPTER 27: return = return a value back to the spot where you called to the encompassing function.
    //                     The return keyword is commonly found at the end of a function.
    // double length = 4;
    
    // std::cout << "Area is equal to "<< square(length) << " square metres\n";
    // std::cout << "Volume is equal to "<< cube(length) << " square metres\n";
    // std::string firstName;
    // std::string lastName;
    // std::cout << "Please enter your first name: ";
    // std::getline(std::cin, firstName);
    // std::cout << "Please enter your last name: ";
    // std::getline(std::cin, lastName);
    // std::cout << "Hello, " << concatStrings(firstName,lastName) << "\n";



    //CHAPTER 28: Overloaded functions. In C++ (and many other languages) you can have different versions
    //                                  of a function.
    // bakePizza("cheese", "lamb");



    // //CHAPTER 29: Variable scope. They come in two types:
    // //                            Local variables = declared inside a function or code block {}
    // //                            Global variables = declared outside of all functions
    // int myNum = 1;
    // printNum(); //this is not going to work as function cannot 
    // std::cout << "cout: " << ::myNum << "\n"; //if you want to use the Global variable, proceed the variable
    // //                            with these two ::, else leave off to use the Local variable.



    // //CHAPTER 30: Banking practice program
    // SKIPPED.



    // //CHAPTER 31: Rock, Paper, Scissors practice program
    // SKIPPED.



    // // //CHAPTER 32: Arrays = Data structure that can hold multiple values
    // //                        Values are accessed by an index number.
    // //                        Think about it like, "a variable that holds multiple values".
    // //                        It is more complicated then that, but its a good mental
    // //                        model.
    // //
    // std::string cars [] = {"tesla","mazda","ford"};
    // // WARNING: Arrays can only contain values of the SAME Data Type.
    // //std::cout << car; //this will display the memory address of where our array is located.
    // //You can reassign values:
    // cars[1] = "holden"; //this also means that you can declare an array first, leave it empty,
    // //                    then assign values later
    // std::string food[4];//this specifies the size, and does NOT start at zero.
    // food[0]="pizza";
    // food[1]="cheese";
    // food[2]="sugar";
    // food[3]="milk";
    // std::cout << food[1] << "\n"; 
    //
    //
    // std::cout << cars[0] << "\n"; //to access it we need to give index values. 
    // //                               This will display "tesla"
    // //                       WARNING: Computers always start at 0, aka [0,0]
    // std::cout << cars[1] << "\n";
    // std::cout << cars[2] << "\n"; //this is also valid.



    //CHAPTER 33: sizeof() = determines the size in bytes of: Variable, Data Type, Class,
    //                       Object, etc.
    // std::string name1;
    // std::string name2 = "CHOUTZ IS AWESOME!";
    // double gps = 2.55645614321651489465163524165465455614451562154145;
    // char grade = 'F';
    // bool student = true;
    // int score[] = {4,2,5,7,1,3};
    //
    // std::cout << "double (large): " << sizeof(gps) << " bytes\n";
    // std::cout << "double: " << sizeof(double) << " bytes\n"; // NOTE: this size is the same
    // //                                                                   as variable 'gps'.
    // std::cout << "string: " << sizeof(name1) << " bytes\n"; // the size of a string is 32 bytes.
    // //                                                      This is because a string simple holds
    // //                                                      an address in memory.
    // std::cout << "string (large): " << sizeof(name2) << " bytes\n";
    // std::cout << "char: " << sizeof(grade) << " bytes\n";
    // std::cout << "bool: " << sizeof(student) << " bytes\n";
    // std::cout << "array: " << sizeof(student) << " bytes\n";
    // std::cout << "int: " << sizeof(int) << " bytes\n";
    //
    // //NOTE: We can find the size of an array by understanding the number of bytes and data type.
    // char grades[] = {'A', 'B','C','D', 'E'};
    // std::cout << "array (grades): " << sizeof(grades) << "\n"; // we know this will return No.Of.Elements x Data Type sizeof().
    // //Therefore, as we know the Data Type is char, we can find the number of elements!
    // std::cout << "No.Of.Elements in Array: "<< sizeof(grades)/sizeof(char) << " elements\n";
    // //BONUS QUESTION:
    // std::string students[] = {"Sam","Choutz","Mike"};
    // std::cout << "No.Of.Elements in String Array: "<< sizeof(students)/sizeof(std::string) << " elements\n";
    
    
    
    // //CHAPTER 34: Iterate over an array
    // std::string students [] = {"Sam","Choutz","Mike", "John", "Stacy"};
    // int arraySize = sizeof(students)/sizeof(std::string);
    
    // // My version.
    // int i = 0;
    // while (i < arraySize) {
    //     std::cout << students[i] << "\n";
    //     i++;
    // };
    // //
    // // Bro Code version. 
    // for (int i = 0; i < arraySize; i++) {
    //     std::cout << students[i] << "\n";
    // };
    // // both work, his is more condensed and easy to read.



    // //CHAPTER 35: for each loop
    // // foreach loop = loop that eases the traversal over an iterable data set.
    // //
    // // Here is where they can help, instead of this:
    // // std::string students [] = {"Sam","Choutz","Mike", "John", "Stacy"};
    // // for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
    // //     std::cout << students[i] << "\n";
    // // }; 
    // //Do this: for ('Data Type' ElementName ArrayName) {}
    // // You can make up the ElementName directly in the for each loop.
    // std::string students [] = {"Sam","Choutz","Mike", "John", "Stacy"};
    // for (std::string student : students) { // student is the NAME of the Element Type.
    // //                                        students is the NAME of the Array.
    //     std::cout << student << "\n";
    // }; 



    // //CHAPTER 36: Pass array to a function.
    // //
    // double prices[] = {1,2.5,1,2.5};
    // int size = sizeof(prices)/sizeof(prices[0]); //NOTE: You don't need to know the Data Type
    // //                                                   to calculate array size. Just direct
    // //                                                   the formula to the initial element
    // //                                                   in the array at array[0]. It is the 
    // //                                                   same! 
    // //
    // double total = getTotal(prices, size);
    // //
    // std::cout << "$" << total << "\n";



    // //CHAPTER 37: Searching an array for an element.
    // // int numbers[]={1,2,3,4,5,6,7,8,9,10};
    // // int sizeNumbers = sizeof(numbers)/sizeof(numbers[0]);
    // // int index;  //the index used for the search.
    // // int myNum; //the number the user is looking for.
    // // std::cout << "Enter element to search for: " << "\n";
    // // std::cin >> myNum;
    // // index = searchArray(numbers, sizeNumbers, myNum);
    // // if (index != -1)
    // // {
    // //     std::cout << "Match found at Index: " << index;
    // // }
    // // else
    // // {
    // //     std::cout << "No match found.";
    // // }


    // std::string food[]={"pizza", "milk", "sugar", "cookies"};
    // int sizeFood = sizeof(food)/sizeof(food[0]);
    // int index;  //the index used for the search.
    // std::string myFood; //the number the user is looking for.
    // std::cout << "Enter element to search for: " << "\n";
    // std::getline(std::cin, myFood);
    // index = searchArray(food, sizeFood, myFood);
    // if (index != -1)
    // {
    //     std::cout << "Match found at Index: " << index;
    // }
    // else
    // {
    //     std::cout << "No match found.";
    // }



    // //CHAPTER 38: Sort an Array using Bubble sort.
    // int array[] = {10, 1, 9, 2, 8, 3, 7, 6, 5, 4};
    // int size = sizeof(array)/sizeof(array[0]);
    // bubbleSort(array,size);
    //  for (int element : array)
    //  {
    //     std::cout << element << " ";
    //  }



    // //CHAPTER 39: fill() = fills a range of elements with a specified value.
    // //                     Its arguments are: fill(begin address, end address, value)
    // // std::string foods[10] = {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    // // for(std::string element : foods)
    // // {
    // //     std::cout << element << "\n";
    // // }
    // //The above does work, but it is not very efficient. Manually initialising an Array is
    // //not pratical. fill() offers one solution.
    // //Imagine if our array was 100 elements in size!!
    // const int SIZE = 100; //REMEMBER: const variable naming convension is to use UPPERCASE.
    // std::string foods[SIZE]; //NOTE: Array's will only accept const int. 
    // fill(foods, foods+SIZE/3, "pizza");
    // fill(foods+SIZE/3, foods+(SIZE/3)*2, "cookie");
    // fill(foods+(SIZE/3)*2, foods+SIZE, "CHOUTZ");
    // for(std::string element : foods)
    // {
    //     std::cout << element << "\n";
    // }
    


    // //CHAPTER 40: Accepting user input and putting it inside an array 
    // std::string foods[3]; //NOTE: Array's are static data structures; once the program is
    // //                            running, the size is  and cannot be changed. It can also
    // //                            be called Static Memory.
    // int size = sizeof(foods)/sizeof(foods[0]);
    // std::string temp;

    // for (int i=0; i<size; i++)
    // {
    //     std::cout << "Enter a food you like or 'q' to quit #" << i+1 <<" : "; 
    //     std::getline(std::cin, temp);
        
    //     //THIS WAS MY CODE. It works, but Bro Code's is interesting too.
    //     // if (foods[i]=="q")
    //     // {
    //     //     fill(foods+i,foods+size, "n/a");
    //     //     break;
    //     // } 
    //     if (temp=="q")
    //     {
    //         break;
    //     } 
    //     else 
    //     {
    //         foods[i] = temp;
    //     }
    // }
    // std::cout << "\n"; 

    // //MY CODE:
    // // for(int i=0; i<size; i++)
    // // {
    // //     if (foods[i].empty())
    // //     {
    // //         continue;
    // //     }
    // //     else 
    // //     {
    // //         std::cout << "#"<< i+1 << ": " << foods[i] << "\n";
    // //     }
    // // }
    // // BRO CODE:
    // for(int i=0; !foods[i].empty(); i++)
    // {
    //     std::cout << "#"<< i+1 << ": " << foods[i] << "\n";
    // }
    


    //CHAPTER 41: Multidimensional arrays = Array that is made up of arrays.
    //                                      They are good as they can represent a grid of data
    //                                      with rows and columns.

    std::string cars[][4] = {{"Mustang","Escape","F-250"},
                             {"Corvette","Equinox","Silverado"},
                             {"Challenger","Durango","Ram 1500"}};
    // NOTE: If you are initialising your Array right away, you don't need a row size, but
    //       you do need a column size always.
    //       Organise as if they are a matrix.
    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << "\n";
    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << "\n";
    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << "\n";
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i<rows; i++)
    {
        //std::cout << cars[i] << "\n";
        for(int j = 0; j<columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }







    // THE END
    std::cout << "\n------------ PROGRAM ENDED ------------";
    return 0;
}


// FUNCTION DEFENITIONS


// // // Refer to CHAPTER 38
// void bubbleSort(int array[], int size)
// {
//     int temp; //temporary variable
//     for (int i=0; i<(size-1);i++) // the reason it is (size -1) is because the larger numbers
//     //                               will naturally gravitated to the right, and we won't need
//     //                               to sort the last item in the array.
//     {
//         for (int j=0; j < size - i - 1; j++)
//         {
//             if(array[j] > array[j+1]) //This works for Ascending order. Use < for Decending order.
//             {
//                 temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }
//     }
// }
// //This is called Bubble Sort. It is a good "sort" algorythm for beginners. There are more
// //efficent sort algorythms though.

// // Refer to CHAPTER 37
// // This function will iterate until the end of a function to see if there are any matches
// int searchArray(int array[], int size, int element)
// {
//     for(int i=0;i<size;i++) //this is what is called a Linear search.
//     {
//         if(array[i]==element)
//         {
//             return i;
//         }
//     }
//     return -1; //NOTE: in programming, this means something was not found. It is a sentinal value.
// }
// int searchArray(std::string array[], int size, std::string element)
// {
//     for(int i=0;i<size;i++) //this is what is called a Linear search.
//     {
//         if(array[i]==element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// // Refer to CHAPTER 36
// //This code isnt going to work! Here is why: https://youtu.be/-TkoO8Z07hI?si=FvxElNmMY1lGLWPy&t=11466
// // 
// // double getTotal(double array[]){
// //     double total = 0;
// //     for (int i=0; i < sizeof(array)/sizeof(array[0]); i++) 
// //     {
// //         total = total + array[i]; // or total += array[i] is valid.
// //     }
// //     return total;
// // };
// // When we pass an Array to a Function it decays into a Pointer.
// // Within the above function, we are not working with an Array anymore, we are working with
// // a Pointer that points to the address of where the Array begins.
// // This function has no idea how big this array is anymore!
// // Instead, we can calculate the size in our main function and pass it explicitly.
// double getTotal(double array[], int size){
//     double total = 0;
//     for (int i=0; i < size; i++) 
//     {
//         total = total + array[i]; // or total += array[i] is valid.
//     }
//     return total;
// };


// Refer to CHAPTER 29
// void printNum(int myNum){
//     std::cout << myNum;
// }
// void printNum(){
//     int myNum = 2; //with the Global variable defined, and this local variable defined
//     //               the Local variable will override it.
//     std::cout << "printNum: " << myNum << "\n";
// }


// Refer to CHAPTER 28
// void bakePizza()
// {
//     std::cout << "Here is your Pizza! \n";
// }
// void bakePizza(std::string topping1)
// {
//     std::cout << "Here is your "<< topping1 << " Pizza!\n"; // it is valid for functions to accept
//     //                                                        the same name, but you need a
//     //                                                        different set of perameters.
//     //
//     // NOTE: a functions name + perameters = function signature.
// }
// void bakePizza(std::string topping1, std::string topping2)
// {
//     std::cout << "Here is your "<< topping1 << " & " << topping2 << " Pizza!\n"; // it is valid for functions to accept
//     //                                                        the same name, but you need a
//     //                                                        different set of perameters.
//     //
//     // NOTE: a functions name + perameters = function signature.
// }

// Refer to CHAPTER 27
//
// double square(double length)
// {
//     double result = length*length;
//     return result; //if we are returning a value, we need to change the initial keyword 'void' to the data type
//     //               that we are returning, in this case, 'double'.
// }
// double cube(double length)
// {
//     return length*length*length; //this is also a valid efficent way of writing these return functions on one line.
// }
// // Challenge: Collect a users first name, last name, then use a function that combines these to form Full name string.
// std::string concatStrings(std::string string1, std::string string2)
// {
//     return string1 + " " + string1;
// }

// Refer to CHAPTER 26
//
// void happyBirthday (std::string name, int age) // WARNING: Functions cannot see what is going on inside of each other.
// //                                                We need to tell the function to expect an argument and data type.
// //                                                As we have a Declaration at the top of this code, we will need to
// //                                                add this information there too; this this case (std::string name).
// //                                                This is called function Parameters.
// {
//     std::cout << "Happy birthday to you.\n";
//     std::cout << "Happy birthday to you!\n";
//     std::cout << "Happy birthday dear " << name << "\n";
//     std::cout << "Happy birthday to you!\n\n";
//     std::cout << "You are "<< age << " years old!\n\n";
// }
// // NOTE: If you think you are going to use a block of code more than once, put it inside a function and simple call it!

