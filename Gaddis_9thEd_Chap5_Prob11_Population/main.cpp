/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patrick
 *
 * Created on February 28, 2020, 1:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double start,increase,days;
    cout<<"Please enter the starting number of organisms.\n";
    cin>>start;
    cout<<"Enter average daily population increase (%).\n";
    cin>>increase;
    cout<<"Enter the number of days they will multiply.\n";
    cin>>days;
    if(start < 2){
        cout<<"Please enter a number greater than 2.\n";
        cout<<"Enter the starting number of organisms.\n";
        cin>>start;
    }
    else if(increase < 0){
        cout<<"Please enter a number greater than 0.\n";
        cout<<"Enter average daily population increase (%).\n";
        cin>>increase;
    }
    else if(days < 1){
        cout<<"Please enter a number greater than 1.\n";
        cout<<"Enter the number of days they will multiply.\n";
        cin>>days;
    }
    for (int i = 1; i <= days; i++){
        start = start + start * (increase/100);
        cout<<fixed<<setprecision(2);
        cout<<"Day "<<i<<" the size of population is "<<start<<endl;
    }
    return 0;
}

