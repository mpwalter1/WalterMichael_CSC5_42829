/* 
 * File:   main.cpp
 * Author: Michael Walter
 *Purpose: to calculate the required earning using a percentage
 *        Assignment 1 - Gad 8E ch2 pc2
 * Created on March 3, 2016, 7:23 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int income=8.6e5, total;
    float perc=0.58;
    
    total=perc*income;
    
    cout <<"The expected yearly earnings for"<<endl;
    cout <<"company X is ";
    cout << "$8.6 million dollars."<<endl; 
    cout <<"Of that amount the East Coast"<<endl;
    cout <<"sales devision is expected to"<<endl;
    cout <<"generate $";
    cout << total;
    cout <<", witch is"<<endl;
    cout <<"58 percent of the total goal."<<endl;
    
    return 0;
}

