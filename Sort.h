#pragma once

#include <vector>

class Sort
{
public:
   
   virtual void sort(std::vector<int> list)  = 0;
   
   void swap(int&a, int&b)
   {
       int c = a;
       a = b;
       b = c;          
   }     
};
