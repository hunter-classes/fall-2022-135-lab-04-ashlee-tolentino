/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab4

These functions accept int parameters and then prints out a series of asterisks that represents the requested shapes.
*/

#include <iostream>
#include <string>

#include "shapes.h"

//This function accepts two int parameters (width and height) and then prints a solid rectangular box of the requested size using asterisks.
std::string box(int width, int height)
{
  std::string result = "";

  for(int r = 0; r < height; r++)
  {
      for(int c = 0; c < width; c++)
      {
	  result += "*";
      }
      result += "\n";
  }
  return result;
}

//This function accepts two int parameters and then prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating)
std::string checkerboard(int width, int height)
{
  std::string result = "";

  for(int r = 0; r < height; r++)
  {
      for(int c = 0; c < width; c++)
      {
	if(r % 2 == 0 && c % 2 == 0) //row even and col even
	{
	  result += "*";
	}
	else if(r % 2 == 0 && c % 2 == 1) //row even and col odd
	{
	  result += " ";
	}
	else if(r % 2 == 1 && c % 2 == 0) //row odd and col even
	{
	  result += " ";
	}
	else //row odd and col odd
	{
	  result += "*";
	}
      }
      result += "\n";
  }
  return result;
}

std::string cross(int size)
{
  return 0;
}

std::string lower(int side_length)
{
  return 0;
}

std::string upper(int side_length)
{
  return 0;
}

std::string trapezoid(int width, int height)
{
  return 0;
}

std::string checkerboard3x3(int width, int height)
{
  return 0;
}
