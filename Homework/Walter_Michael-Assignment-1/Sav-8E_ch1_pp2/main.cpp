/* 
 * File:   main.cpp
 * Author: Michael Walter
 *Purpose: 
 *         Assignment 1 - Sav ch1 pp 2
 * Created on March 3, 2016, 5:26 PM
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
    int number_of_pods, peas_per_pod, total_peas;
    //Input Values
    cout << "Hello."<<endl;    
    cout << "Press return after entering a number."<<endl;
    cout << "Enter the number of pods:"<<endl;
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:"<<endl;
    cin >> peas_per_pod;
    
    total_peas = number_of_pods * peas_per_pod;
    
    //Map the inputs to the outputs
    
    //output the results
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods"<<endl;
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then"<<endl;
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods."<<endl;
    
    cout <<"Goodbye."<<endl;
            //Exit Stage Right!
    return 0;
}

