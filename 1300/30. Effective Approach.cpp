#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
   int n;
   cin >> n;

   vector<int> array(n + 1);
   unordered_map<int, int> index;

   for (int i = 1; i <= n; ++i)
   {
      cin >> array[i];
      index[array[i]] = i;
   }

   int m;
   cin >> m;

   long long vasyaComparisons = 0;
   long long petyaComparisons = 0;

   for (int i = 0; i < m; ++i)
   {
      int query;
      cin >> query;

      vasyaComparisons += index[query];
      petyaComparisons += n - index[query] + 1;
   }

   cout << vasyaComparisons << " " << petyaComparisons << endl;

   return 0;
}