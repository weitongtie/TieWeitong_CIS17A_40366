/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Patrick
 *
 * Created on February 28, 2020, 9:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", 
                                "Griffin, Jim","Stamey, Marty", "Rose, Geri", 
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                                "James, Jean","Weaver, Jim", "Pore, Bob", 
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy", 
                                "Pike, Gordon", "Holland, Beth" };
    
    string temp,target;
    for(int i=0; i<NUM_NAMES-1;i++){
        for(int t=i+1;t<NUM_NAMES;t++){
            if(names[i]>names[t]){
                temp=names[i];
                names[i]=names[t];
                names[t]=temp;
            }
        }
    }
    
    cout<<"Please enter the name to be searched: \n";
    cin>>target;
    
    int first=0, middle, last=NUM_NAMES-1;
    
    while(first<=last){
        middle = (first + last)/2;
        if(target<names[middle]){
            last = middle-1;
        }
        else{
            if(target>names[middle]){
                first = middle+1;
            }
            else{
                first = last+1;
            }
        }
    }
    if(target==names[middle]){
        cout<<"Found the name.";
    }
    else{
        cout<<"Not found.";
    }
    return 0;
}