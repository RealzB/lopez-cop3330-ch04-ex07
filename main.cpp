/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brandon Lopez
 */
#include <iostream>

using namespace std;

int stringCheck(string number)//matches string and returns number
{
  if(number == "zero")
    return 0;
  else if(number == "one")
    return 1;
  else if(number ==  "two")
    return 2;
  else if(number == "three")
    return 3;
  else if(number ==  "four")
    return 4;
  else if(number == "five")
    return 5;
  else if(number == "six")
    return 6;
  else if(number ==  "seven")
    return 7;
  else if(number == "eight")
    return 8;
  else if(number == "nine")
    return 9;
  else
    cout<<"failed";
  
}

int numCheck(string number)//matches number and returns number
{
  
  if(number == "0")
    return 0;
  else if(number == "1")
    return 1;
  else if(number ==  "2")
    return 2;
  else if(number == "3")
    return 3;
  else if(number ==  "4")
    return 4;
  else if(number == "5")
    return 5;
  else if(number == "6")
    return 6;
  else if(number ==  "7")
    return 7;
  else if(number == "8")
    return 8;
  else if(number == "9")
    return 9;
  else
    return stringCheck(number);
  
}



int main()
{
string operation;
string numOne, numTwo;
double num1, num2;
cout<<"Enter the number, then number, then operation: ";
cin >> numOne>>numTwo>>operation;
num1 = numCheck(numOne);
num2 = numCheck(numTwo);


if(operation == "+") {
cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<(num1+num2)<<endl;
}
else if(operation == "-") {
cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<(num1-num2)<<endl;
}
else if(operation == "*") {
cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<(num1*num2)<<endl;
} else if(operation == "/") {
cout<<"Division of "<<num1<<" and "<<num2<<" is "<<(num1/num2)<<endl;
}

return 0;
}


