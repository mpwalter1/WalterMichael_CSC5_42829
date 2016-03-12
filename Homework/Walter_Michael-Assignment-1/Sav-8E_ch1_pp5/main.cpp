/* 
 * File:   main.cpp
 * Author: Michael Walter
 *Purpose: Assignment 1 - Sav ch1 pp 5
 * Created on March 3, 2016, 6:23 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    int height, width, hewid;
    //Input Values
        
    //Map the inputs to the outputs
    cout << "Greetings. This programs calculates the are of a rectangle."<<endl;
    cout << "Press Enter after typing your input."<<endl;
    cout << "All measurement input is stored as inches, you do not need to specify."<<endl;
    cout << "Please type the height of your rectangle:"<<endl;
    cin >> height;
    cout << "Please type the width of your rectangle:"<<endl;
    cin >> width;
    hewid = height * width;
    
    cout << "Your rectangle has a height of ";
    cout << height;
    cout << " inches,"<<endl;
    cout << "and a width of ";
    cout << width;
    cout << " inches. "<<endl;
    cout << "The total area of your square is "<<endl;
    cout << hewid;
    cout <<" square inches."<<endl;
            
            
    //output the results
    
            //Exit Stage Right!
    return 0;
}

