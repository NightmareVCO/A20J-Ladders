#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 318A
int main()
{
   long long int cantNumbers, position, mid;
   cin >> cantNumbers >> position;
   mid = cantNumbers / 2;
   if (cantNumbers % 2 == 0)
   {
      if (position <= mid)
         cout << 2 * position - 1;
      else
         cout << 2 * (position - mid);
   }
   else
   {
      if (position <= mid + 1)
         cout << 2 * position - 1;
      else
         cout << 2 * (position - mid - 1);
   }

   return 0;
}