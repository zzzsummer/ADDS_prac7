#pragma once

#include "Sort.h"
#include <vector>


class QuickSort: public Sort
{
public:
   
   void sort(std::vector<int> &list, int start, int end)
   {    
       if(start >= end)
       {
           return;
       }

    int p = partition(list,start,end);
    sort (list, start, p - 1);
    sort(list, p + 1, end);
    
   }
  
private:
   int partition(std::vector<int> &list, int start , int end )
   {
       int pivot = list[start];
       int count = 0;

        for(int i = start + 1; i <= end; i++)
        {
            if (list.at(i) <= pivot)
            {
                count++;
            }
        }

        int pivotIndex = start + count;
        swap(list.at(pivotIndex),list.at(start));
        int i = start, j = end;


       int pivotVal = list.at(pivotIndex);

       while(i < pivotIndex && j > pivotIndex)
       {
           while (list.at(i) <= pivot)
           {
               i++;
           }

           while (list.at(j) > pivot)
           {
               j--;
           }
           if (i < pivotIndex && j > pivotIndex)
           {
               swap(list.at(i++),list.at(j--));
           }
       }

       return pivotIndex;
   }

  
};
