/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patrick
 *
 * Created on February 27, 2020, 2:36 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double dollar,YEN_PER_DOLLAR,EUROS_PER_DOLLAR;
    cout<<"Convert U.S. dollar amounts to Japanese yen and to euros."<<endl;
    cout<<"Please enter the amounts of U.S. dollar"<<endl;
    cin>>dollar;
    YEN_PER_DOLLAR=dollar*98.93;
    EUROS_PER_DOLLAR=dollar*0.74;
    cout<<fixed<<setprecision(2);
    cout<<"Yen is "<<YEN_PER_DOLLAR<<endl;
    cout<<"Euros is "<<EUROS_PER_DOLLAR<<endl;
    return 0;
}

