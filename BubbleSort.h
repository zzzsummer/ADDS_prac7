#pragma once

#include "Sort.h"
#include <vector>


class BubbleSort: public Sort
{
public:
   
   
   void sort(std::vector<int> &list)
   {  
       for (int i = 0; i < list.size(); i++)
       {
           for (int j = 0; j < list.size()-1; j++)
           {
           if (list.at(j) > list.at(j+1))
           {
               swap(list.at(j),list.at(j+1));               
           }
           }
       }
   }
   
};

