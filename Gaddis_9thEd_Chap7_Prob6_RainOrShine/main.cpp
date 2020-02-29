/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patrick
 *
 * Created on February 28, 2020, 3:05 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int month=3, day=30, totalSun=0, totalRain=0, totalCloudy=0, largestRain;
    int sun=0,rain=0,cloudy=0;
    char weather[month][day];
    
    ifstream read;
    read.open("RainOrShine.txt");
    for(int row=0; row<month; row++){
        for(int col=0; col<day; col++){
            read>>weather[row][col];
        }
    }
    read.close();
    for(int row=0; row<month; row++){
        for(int col=0; col<day; col++){
            switch(weather[row][col]){
                case 'S': sun++;
                case 'R': rain++;
                case 'C': cloudy++;
            }
        }        
        cout<<"The month of ";
        if(row == 0){
            cout<<"June\n";
        }
        else if(row == 1){
            cout<<"July\n";
        }
        else if(row == 2){
            cout<<"August\n";
        }
        cout<< "Rainy : " << rain << endl;
	cout<< "Sunny : " << sun  << endl;
        cout<< "Cloudy: " << cloudy << endl;
	totalSun += sun;
	totalRain += rain;
	totalCloudy += cloudy;
        
	for(int i=0;i<rain;i++){
            if(i>rain){
            largestRain = row;
            }
	}
    }
	cout<< "Total rainy, sunny, and cloudy days in three months: \n";
	cout<< "Rainy : " << totalRain << endl;
	cout<< "Sunny : " << totalSun  << endl;
        cout<< "Cloudy: " << totalCloudy << endl;
        cout<< "the largest number of rainy days in three months: \n";
		if (largestRain == 0)
			cout<< "June.\n";
		else if (largestRain == 1)
			cout<< "July.\n";
		else if (largestRain == 2)
			cout<< "August.\n";
    return 0;
}

