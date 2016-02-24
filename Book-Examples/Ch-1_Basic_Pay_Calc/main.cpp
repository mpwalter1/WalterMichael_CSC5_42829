/*
 * This program calculates the user's pay.
 */

/* 
 * File:   main.cpp
 * Author: Zero
 *
 * Created on February 21, 2016, 9:54 AM
 */

#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    double hours, rate, pay;
    
    //get the number of hours worked
    cout << "How many hours did you work?"<<endl;
    cin >> hours;
    
    //get the hourly pay rate.
    cout << "How much do you get paid per hour?"<<endl;
    cin >> rate;
            
    //calculate the pay
    pay = hours*rate;
    
    //Display the pay
    cout << "You should have earned $" << pay << endl;
    return 0;
}

