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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 int
 short
 long
 float
 double
 char
 bool





2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int coins = 5;
    int pockets = -4;
    short smallerNumber = 987;
    short martin = -777;
    short stop = 29;
    long bigNumber = -2389898;
    long realBig = 239838943;
    long seriouslyLarge = 2000000000;
    float decimals = 0.5f;
    float rootBeer = 123.48f;
    float hover = 83838.355f;
    double whiskey = 989898.34;
    double dutch = 23229939.1114;
    double dip = 71238.1487;
    char jerome = 'j';
    char mike = 'm';
    char peter = 'p';
    bool preference = true;
    bool state = false;
    bool spool = false;

    
    ignoreUnused(number, coins, pockets, smallerNumber, martin, stop, bigNumber, realBig, seriouslyLarge, decimals, rootBeer, hover, whiskey, dutch, dip, jerome, mike, peter, preference, state, spool); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 


int addition(int numA, int numB)
{
    ignoreUnused(numA, numB);
    return {};
}


char pathFinder(char currentPath, char previousPath, char pathOrigin = 'A')
{
    ignoreUnused(pathOrigin, currentPath, previousPath);
    return {};
}


float gpsFinder(float latitude, float longitude)
{
    ignoreUnused(latitude, longitude);
    return {};
}


void playerCharacterMaker(int age, char hairSelection, int height = 175, bool sunglasses = false)
{
    ignoreUnused(age, height, hairSelection, sunglasses);
}


void climateAnalysis(float dailyTemp, int dailyHumidity, bool dailyPrecipitation)
{
    ignoreUnused(dailyTemp, dailyHumidity, dailyPrecipitation);
}


char messageEncoder(char initialLetter)
{
    ignoreUnused(initialLetter);
    return {};
}


long lightyearConversion(int distanceInLightyears, char measurementConversionUnit = 'K')
{
    ignoreUnused(distanceInLightyears, measurementConversionUnit);
    return {};
}


double atomicMassCalculator(float elementMass, char elementSymbol, int elementQuantity = 1)
{
    ignoreUnused(elementMass, elementSymbol, elementQuantity);
    return {};
}


bool smallerThanABreadBox(float length, float width, float height, char measureUnit = 'c')
{
    ignoreUnused(length, width, height, measureUnit);
    return {};
}


void horizontalRotation(float degreesRotation = 15.0f)
{
    ignoreUnused(degreesRotation);
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
    
    auto sum = addition(2, 4);
    
    auto nextPath = pathFinder('C', 'B');
    
    auto myGpsCoords = gpsFinder(36.056595f, -112.125092f);
    
    playerCharacterMaker(35, 'D', 182, true);
    
    climateAnalysis(82.2f, 76, true);
    
    auto hiddenMessageKey = messageEncoder('X');
    
    auto distanceInKilometers = lightyearConversion(70050);
    
    auto atomicWeightSum = atomicMassCalculator(1.008f, 'H', 19);
    
    auto cubeArea = smallerThanABreadBox(19.5f, 9.0f, 6.75f);
    
    horizontalRotation(25.0f);
    
    
    ignoreUnused(carRented, sum, nextPath, myGpsCoords, hiddenMessageKey, distanceInKilometers, atomicWeightSum, cubeArea);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
