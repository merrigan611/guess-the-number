#include <iostream>
#include <random>
#include <string>

//user inputs number to be picked
int getNumber(){
    int number;
    
   std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int>dist(1, 100);
    
  number = dist(gen);
    
  return number;
}
//this function will choose a higher number randomly between the low number and 100

int randomNumberHigher(int chosenNumber){
   
   int guess;
    
  do{
        std::cout<< "please give a number: "<<std::endl;
        std::cin>>guess;
        
   if(chosenNumber == guess){
            std::cout<<"correct"<<std::endl;
        }
        else{
            std::cout<< "incorrect"<<std::endl;
        }
        
  }while( chosenNumber < guess || chosenNumber > guess );
    
  return 0;
    
}

int main(){
    int numberInQuestion = getNumber();
    std::cout<< randomNumberHigher(numberInQuestion);
    
  return 0;
}
