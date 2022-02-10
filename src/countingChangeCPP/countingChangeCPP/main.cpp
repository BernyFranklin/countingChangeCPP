// C++ countingChange : adds change and displays total
// Frank Bernal
// CIS054 C/C++ Programming
// Inputs: quarters, dimes, nickels, pennies
// Outputs: total
// V1.0

#include <iostream>   // used for cin and cout
#include <iomanip>    // used to set 2 digits past the decimal
using namespace std;

// define constants
const double QUARTER_VALUE = 0.25;   // quarters are worth $0.25
const double DIME_VALUE = 0.10;      // dimes are worth    $0.10
const double NICKEL_VALUE = 0.05;    // nickels are worth  $0.05
const double PENNY_VALUE = 0.01;     // pennies are worth  $0.01

int main(int argc, const char * argv[])
{
    // declare variables, initialized at -1 for loop
    int quarters = -1;
    int dimes = -1;
    int nickels = -1;
    int pennies = -1;
    double total;
    
    // INPUT
    cout << "Welcome to Frank's Loose Change Calculator" << endl << endl;
    // quarter loop
    while (quarters < 0)
    {
        // prompt > input quarters > blank line
        cout << "How many quarters do you have? " << endl;
        cin >> quarters;
        cout << endl;
        // eliminate letter input
        if (cin.fail() )
        {
            cout << "Letters are unauthorized" << endl;
            cout << "Please restart the program" << endl << endl;
            return 1;   // end program and returns error code 1
        }
        // eliminate negative number input
        if (quarters < 0)
        {
            cout << "Negative numbers are unauthorized" << endl << endl;
        }
    }   // end of quarter loop
   
    // dime loop
    while (dimes < 0)
    {
        // prompt > input dimes > blank line
        cout << "How many dimes do you have? " << endl;
        cin >> dimes;
        cout << endl;
        // eliminate letter input
        if (cin.fail() )
        {
            cout << "Letters are unauthorized" << endl;
            cout << "Please restart the program" << endl << endl;
            return 1;   // end program and returns error code 1
        }
        // eliminate negative number input
        if (dimes < 0)
        {
            cout << "Negative numbers are unauthorized" << endl << endl;
        }
    }   // end of dime loop
    
    // nickel loop
    while (nickels < 0)
    {
        // prompt > input nickels > blank line
        cout << "How many nickels do you have? " << endl;
        cin >> nickels;
        cout << endl;
        // eliminate letter input
        if (cin.fail() )
        {
            cout << "Letters are unauthorized" << endl;
            cout << "Please restart the program" << endl << endl;
            return 1;   // end program and returns error code 1
        }
        // eliminate negative number input
        if (nickels < 0)
        {
            cout << "Negative numbers are unauthorized" << endl << endl;
        }
    }   // end of nickel loop
    
    // penny loop
    while (pennies < 0)
    {
        // prompt > input pennies > blank line
        cout << "How many pennies do you have? " << endl;
        cin >> pennies;
        cout << endl;
        // eliminate letter input
        if (cin.fail() )
        {
            cout << "Letters are unauthorized" << endl;
            cout << "Please restart the program" << endl << endl;
            return 1;   // end program and returns error code 1
        }
        // eliminate negative number input
        if (pennies < 0)
        {
            cout << "Negative numbers are unauthorized" << endl << endl;
        }
    }   // end of penny loop
    
    // PROCESS: calulate value of total coins
    total = (quarters * QUARTER_VALUE) +
            (dimes * DIME_VALUE) +
            (nickels * NICKEL_VALUE) +
            (pennies * PENNY_VALUE);
    
    // OUTPUT: display prompt with calculated total with two places past the decimal
    cout << setiosflags(ios::fixed | ios::showpoint);  // Sets 2 decimal places regardless if 0's
    cout << "You have $" << setprecision(2) << total << " in loose change!" << endl << endl;

    return 0;
} // end of int main
