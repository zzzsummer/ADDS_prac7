#pragma once
#include <vector>


class RecursiveBinarySearch
{
public:
   bool search(std::vector<int> &list,int n)
   {
       n = binarySearch(list,0 ,0, list.size()-1);

       return n;
       
    }
   
   int binarySearch(std::vector<int> &list, int pivot, int smaller, int bigger)
   {
       if (smaller > bigger)
       {
           return -1; // nothing to search
       }

       int mid = (smaller + bigger) / 2;

       if (list.at(mid) > pivot)
       {
           return binarySearch(list, pivot, smaller, mid - 1);          
       }

       else if(list.at(mid) < pivot)
       {
           return binarySearch(list, pivot, mid + 1, bigger);
       }

       else
       {
           return mid;
       }
   }

  
  



  
};

