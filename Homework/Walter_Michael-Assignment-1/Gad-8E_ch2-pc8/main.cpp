/* 
 * File:   main.cpp
 * Author: Michael Walter
 *Purpose: To create a receipt and total of items purchased
 *         Assignment 1 - Gad 8E ch2 pc8
 * Created on March 6, 2016, 8:10 PM
 */


#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float sodclk=15.95, 
          sgcpas=24.95, 
          jaffa=6.95,
          intel=12.95,
          nboomb=3.95,     
          tax=(sodclk+sgcpas+jaffa+intel+nboomb)*0.07,
          total=sodclk+sgcpas+jaffa+intel+nboomb+tax;
    
    cout<<"The System Lords Appreciate your Bussiness."<<endl;
    cout<<"Items Purchases:"<<endl;
    //item1
    cout<<"Sodan Cloaking Device:  ";
    cout<<sodclk<<endl;
    //item2
    cout<<"SGC-Gate Code:          ";
    cout<<sgcpas<<endl;
    //item4
    cout<<"12 Jaffa Action Pck:     ";
    cout<<jaffa<<endl;
    //item4
    cout<<"SGC-Intel Pck:          ";
    cout<<intel<<endl;
    //item5
    cout<<"Naquadria Bomb:          ";
    cout<<nboomb<<endl;
  
    cout<<endl;
    cout<<"Sales Tax:              ";
    cout<<tax;
    cout<<"(7%)"<<endl;
    cout<<"Total:                 ";
    cout<<total<<endl;
    cout<<"         HAPPY HUNTING!    "<<endl;
            
            
    
            
    
    return 0;
}

