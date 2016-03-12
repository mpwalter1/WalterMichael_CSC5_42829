/* 
 * File:   main.cpp
 * Author: Michael Walter
 *Purpose: To calculate the mpg for a vehicle
 *         Assignment 1 - Gad 8E ch2 pc10
 * Created on March 6, 2016, 11:32 PM
 */

#include <iostream>

using namespace std;

int tank,
    dist,
    mpg;




int main(int argc, char** argv) {

    tank=15;
    dist=375;
    mpg=dist/tank;

    cout<<"Your can travel upto "<<dist;
    cout<<" miles with a full tank of "<<tank<<endl;
    cout<<"gallons of fuel.";
    cout<<"Which is an average of "<<mpg;
    cout<<" miles per gallon."<<endl;

        
    
    return 0;
}

