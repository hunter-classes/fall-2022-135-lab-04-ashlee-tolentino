/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab4

This program prints out shapes depending on the requested size
*/

#include <iostream>
#include <string>

#include "shapes.h"

int main()
{
  std::string result = box(7,4);
  std::cout << "box(7,4):\n";
  std::cout << result;
  std::cout << "\n------------------\n"; // separator

  std::string result2 = checkerboard(11,6);
  std::cout << "checkerboard(11,6):\n";
  std::cout << result2;
  std::cout << "\n------------------\n"; // separator

  std::string result3 = cross(8);
  std::cout << "cross(8);\n";
  std::cout << result3;
  std::cout << "\n------------------\n"; // separator
  
  return 0;
}
