// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April, 29, 2022
// This program asks the user for numbers using loop
// then check which number is the smallest and greatest.



#include <iostream>

int main() {

  // variables
  std::string num_string;
  float num_float;
  float largest_num;
  float smallest_num;
  std::string try_again;

  // declare counter
  int counter = 0;
  
   std::cout <<
   "In this program we display the largest and smallest from user input." << std::endl;
    std::cout << "" << std::endl;

  // using do while loop to repeat asking for user numbers
  do {

    std::cout << "Enter a number: ";
    std::cin >> num_string;

    // cast string to float
    try {
      num_float = std::stof(num_string);
      counter++;

      // check if user enter number 1 time
      if (counter == 1) {
        largest_num = num_float;
        smallest_num = num_float;
      }

      // check for largest and smallest numbers
      if (num_float > largest_num) {
          largest_num = num_float;

        } else if (num_float < smallest_num) {
          smallest_num = num_float;
        }
      }

    // catch invalid input 
    catch (std::invalid_argument) {
      std::cout <<"Invalid Input. Input was not an integer" << std::endl;
    }

      // ask if user want to continue
      std::cout << "Enter q to quit or y to continue: ";
      std::cin >> try_again;
}
    // loop back
    while (try_again == "y");


  // display the greatest and smallest numbers
  std::cout << ""<< std::endl;
  std::cout <<largest_num << " is the largest number." << std::endl;
  std::cout << smallest_num << " is the smallest number." << std::endl;
}
