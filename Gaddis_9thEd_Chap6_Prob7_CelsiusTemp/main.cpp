/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patrick
 *
 * Created on February 28, 2020, 2:35 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
double celsius(int);

int main(int argc, char** argv) {
    cout<<"Table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.\n";
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<"   Fahrenheit             Celsius\n";
    
    for(int F=0; F<=20; F++){
        cout<<"      "<<setw(2)<<F;
        cout<<"                 "<<celsius(F)<<endl;
    }
    return 0;
}
double celsius(int F){
    return ((5.0/9.0)*(F-32));
}
