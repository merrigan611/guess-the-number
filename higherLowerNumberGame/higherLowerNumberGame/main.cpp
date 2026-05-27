//
//  main.cpp
//  higherLowerNumberGame
//
//  Created by Jack Francis Merrigan on 5/23/26.
//

#include <iostream>
#include <ctime>
#include <string>

//user inputs number to be picked
int getNumber(){
    int number;
    std::cout<<"pick a number between 1-100: "<<'\n';
    std::cin>>number;
    
    return number;
}
//this function will choose a higher number randomly between the low number and 100

int randomNumberHigher(int lowNumber){
   
    int higherNumber;
    
    do{
        higherNumber= rand()%100;
        
    }while( higherNumber<lowNumber || higherNumber>100);
    
    return higherNumber;
    
}

int main(){
    int numberInQuestion = getNumber();
   std::cout<< randomNumberHigher(numberInQuestion)<< " is higher than "<<numberInQuestion;
}
