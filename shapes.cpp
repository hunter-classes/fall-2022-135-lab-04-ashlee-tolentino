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

//This function accepts an int parameter and then prints a diagonal cross of that dimension
std::string cross(int size)
{
  std::string result = "";
  int first_half = 0;
  int last_half = size-1;

  for(int r = 0; r < size; r++)
  {
    for(int c = 0; c < size; c++)
    {
	if(c == first_half || c == last_half)
	{
	  result += "*";
	}
	else
	{
          result += " ";
	}
    }
    result += "\n";
    first_half++;
    last_half--;
  }
  return result;
}

//This function accepts an int parameter and then prints the bottom-left half of a square
std::string lower(int side_length)
{
  std::string result = "";
  int counter = 0;

  for(int r = 0; r < side_length; r++)
  {
    for(int c = 0; c < side_length; c++)
    {
      if(c <= counter)
      {
	result += "*";
      }
      else
      {
	result += " ";
      }
    }
    result += "\n";
    counter++;
  }
  return result;
}

//This function accepts an int parameter and then prints the top-right half of a square
std::string upper(int side_length)
{
  std::string result = "";
  int space = -1;
  
  for(int r = 0; r < side_length; r++)
  {
    for(int c = 0; c < side_length; c++)
    {
      if(c <= space)
      {
	result += " ";
      }
      else
      {
	result += "*";
      }
    }
    result += "\n";
    space++;
  }
  return result;
}

//This function accepts two int parameters and then prints an upside-down trapezoid
std::string trapezoid(int width, int height)
{
  std::string result = "";
  std::string result2 = "Impossible shape!";
  int spaces = 0;
  int stars = width;

  if(height > width/2)
  {
      return result2;
  }

  for(int r = 0; r < height; r++)
  {
    for(int c = 0; c < stars; c++)
    {
      if(r > 0 && c < spaces)
      {
	result += " ";
      }
      else
      {
	result += "*";
      }
    }
    result += "\n";
    spaces++;
    stars--;
  }
  
  return result;
}

std::string checkerboard3x3(int width, int height)
{
  return 0;
}
