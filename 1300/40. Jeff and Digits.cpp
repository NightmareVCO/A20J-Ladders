#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n, a, cnt5 = 0, cnt0 = 0;
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> a;
      if (a == 5)
         cnt5++;
      else
         cnt0++;
   }

   if (cnt0 == 0)
   {
      cout << -1 << endl;
      return 0;
   }

   cnt5 -= cnt5 % 9;
   if (cnt5 == 0)
   {
      cout << 0 << endl;
      return 0;
   }

   string ans = "";

   for (int i = 0; i < cnt5; i++)
      ans += '5';
   for (int i = 0; i < cnt0; i++)
      ans += '0';

   cout << ans << endl;
   return 0;
}
