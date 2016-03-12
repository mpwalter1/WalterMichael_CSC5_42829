/* 
 * File:   main.cpp
 * Author: Michael Walter
 *Purpose: to calculate the rise of the ocean 
 *        Assignment 1 - Gad 8E ch2 pc7
 * Created on March 6, 2016, 7:47 PM
 */


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float orise=1.5;
    
    int fivey=5*orise, seveny=7*orise, teny=10*orise;
    
    cout << "The ocean is currently rising"<<endl;
    cout << "at a rate of 1.5 millimeters"<<endl;
    cout <<"per year."<<endl;
    cout << "In five year from now the oceans"<<endl;
    cout << "Will have risen ";
    cout << fivey;
    cout << " millimeters. "<<endl;
    cout << "Within seven years the oceans"<<endl;
    cout << "will have risen ";
    cout << seveny;
    cout << " millimeters, "<<endl;
    cout << "and in ten years they will"<<endl;
    cout << "have risen ";
    cout << teny;
    cout << " millimeters.";
            
    
            
            
            
    
    return 0;
}

