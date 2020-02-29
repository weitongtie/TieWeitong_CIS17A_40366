/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patrick
 *
 * Created on February 27, 2020, 2:57 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
        int days,month,year;
        cout<<"Enter a month (1-12): ";
        cin>>month;
        cout<<"Enter a year: "<<year;
        cin>>year;
        if(month ==1 || month == 3 || month ==5 || month == 7 || month ==8 || month == 10 || month == 12){
        days = 31;
        }

        else if(month == 4 || month == 6 || month == 9 || month ==11){
        days = 30;
        }

        else if(month == 2){
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            days = 29;
            }
            else{
            days = 28;
            }
        }
        else{
            cout<<"Please enter a valid number."<<endl;
        }
        cout<<days<<" days";
    return 0;
}

