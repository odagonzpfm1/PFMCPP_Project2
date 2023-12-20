#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 unsigned int
 float
 double
 bool
 char
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int temperature = -70;
    int age = 21;
    int savings = 10000;

    unsigned int numberOfPages = 300;
    unsigned int numberOfStudents = 33;
    unsigned int typesOfFruits = 7;

    float distance = 12.1f;
    float weight = 50.5f;
    float temperatureInCelcius = -17.3f;

    double pi = 3.1415926535;
    double randomNumber = 0.12845630984;
    double gravity = 9.8;

    bool isHeavy = true;
    bool isHungry = false;
    bool isPlayingNotes = true;

    char grade = 'A';
    char gender = 'M';
    char color = 'R';
    ignoreUnused(number, temperature, age, savings, numberOfPages, numberOfStudents, typesOfFruits, distance, weight, temperatureInCelcius, pi, randomNumber, gravity, isHeavy, isHungry, isPlayingNotes, grade, gender, color); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool isHeavy(float weight)
{
    ignoreUnused(weight);
    return {};
}

/*
 2)
 */
int distanceInFeet(int startPoint, int endPoint)
{
    ignoreUnused(startPoint, endPoint);
    return {};
}

/*
 3)
 */
float addNumbers(float num1, float num2)
{
    ignoreUnused(num1, num2);
    return {};
}

/*
 4)
 */
float subtractNumbers(float num1, float num2)
{
    ignoreUnused(num1, num2);
    return {};
}

/*
 5)
 */
float multiplyNumbers(float num1, float num2)
{
    ignoreUnused(num1, num2);
    return {};
}

/*
 6)
 */
void startInstrument(int instrumentType, bool midiCapable, float startPosition = 0)
{
    ignoreUnused(instrumentType, midiCapable, startPosition);
}

/*
 7)
 */
void startPlayingSong(char song)
{
    ignoreUnused(song);
}
/*
 8)
 */
unsigned int numberOfPensInDesk(int deskNum, int roomNum = 111, int floor = 1)
{
    ignoreUnused(deskNum, roomNum, floor);
    return {};
}

/*
 9)
 */
void changeTempo()
{
    ignoreUnused();
}

/*
 10)
 */
char rowLetter(int rowNum)
{
    ignoreUnused(rowNum);
    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto heavyBackpack = isHeavy(55.5f);
    //2)
    auto distanceFromTarget = distanceInFeet(12, 34);
    //3)
    auto totalSum = addNumbers(1.2f, 2.3f);
    //4)
    auto difference = subtractNumbers(1.2f, 2.3f);
    //5)
    auto product = multiplyNumbers(1.2f, 2.3f);
    //6)
    startInstrument(6, true, 50.0f);
    //7)
    startPlayingSong('E');
    //8)
    auto pensInTonysDesk = numberOfPensInDesk(6, 7, 8);
    //9)
    changeTempo();
    //10)
    auto rentedBookRow = rowLetter(6);
    
    ignoreUnused(carRented, heavyBackpack, distanceFromTarget, totalSum, difference, product, pensInTonysDesk, rentedBookRow);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
