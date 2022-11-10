// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <typeinfo>
using namespace std;

int main()
{
 int a[10];
 int i, n;
 string again, again2;
again:

   cout << "Input amount of elements (max 10)\n ";
   cin >> n;   
   if (n > 10)
   {
     cout << "Something gone wrong.Would you like to try again?y or n \n";
     cin >> again;
     if (again == "y")
       {
        goto again;
       }
     else if (again == "n")
       {
        exit(0);
       }
     else if (again != "y" || again != "n")
       {
        cout << "I told you enter y or n.What did u write?";
        exit(0);
       }

  }
    
    cout << "Input elements\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cout << "a[" << i << "]=" << a[i] << endl;
   

    int count = 0;
    for (i = 0;i < n;i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    int count1 = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count1++;
        }
    }

    int count2 = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count2++;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (a[i] > 3)
        {
            a[i]++;
        }
    }
    cout << " Amount of + elements:" << count1 << endl;
    cout << " Amount of - elements:" << count << endl;
    cout << " Amount of numbers multiples of 2:" << count2 << endl;
    for (i = 0; i < n; i++)
        cout << "a[" << i << "]=" << a[i] << endl;
    
        
    cin;

    return 0;
 }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
