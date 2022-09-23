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

  std::string result4 = lower(6);
  std::cout << "lower(6);\n";
  std::cout << result4;
  std::cout << "\n------------------\n"; // separator

  std::string result5 = upper(5);
  std::cout << "upper(5);\n";
  std::cout << result5;
  std::cout << "\n------------------\n"; // separator

  std::string result6 = trapezoid(12,5);
  std::cout << "trapezoid(12,5);\n";
  std::cout << result6;
  std::cout << "\n------------------\n"; // separator

  std::string result7 = checkerboard3x3(16,11);
  std::cout << "checkerboard3x3(16,11);\n";
  std::cout << result7;
  std::cout << "\n------------------\n"; // separator
  
  return 0;
}
