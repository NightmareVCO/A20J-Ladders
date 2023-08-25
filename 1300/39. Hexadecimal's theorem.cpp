#include <iostream>
#include <vector>

using namespace std;

vector<long long> fibonacci;

void generateFibonacci(int limit)
{
   fibonacci.push_back(0);
   fibonacci.push_back(1);

   int i = 2;
   while (true)
   {
      long long nextFib = fibonacci[i - 1] + fibonacci[i - 2];
      if (nextFib > limit)
         break;
      fibonacci.push_back(nextFib);
      i++;
   }
}

int main()
{
   long long n;
   cin >> n;

   generateFibonacci(n);

   for (int i = fibonacci.size() - 1; i >= 0; i--)
      for (int j = i; j >= 0; j--)
         for (int k = j; k >= 0; k--)
            if (fibonacci[i] + fibonacci[j] + fibonacci[k] == n)
            {
               cout << fibonacci[i] << " " << fibonacci[j] << " " << fibonacci[k] << endl;
               return 0;
            }

   cout << "I'm too stupid to solve this problem" << endl;

   return 0;
}
