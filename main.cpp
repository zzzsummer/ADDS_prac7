#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;



int main()
{
    vector<int> l1;
    int integer;
    //cout << "enter interger "<<endl;
    while (cin >> integer)
        {
            l1.push_back(integer);
        if (cin.get() == '\n')
            break;
        }

    // BubbleSort *b1;
    // b1->sort(l1);
    
    QuickSort * q1;
    q1->sort(l1, 0, l1.size() - 1);
    RecursiveBinarySearch r1;
    int k = r1.search(l1, 0);
    if ( k == 1)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }


    
    for(int i = 0; i < l1.size();i++)
    {
        cout << " " << l1.at(i);
    }


    return 0;

} 
