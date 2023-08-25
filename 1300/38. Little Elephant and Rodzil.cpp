#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// 205A
int main()
{
   int cantCiudades;
   cin >> cantCiudades;
   vector<pair<int, int>> distanciaCiudades(cantCiudades);

   for (int i = 0; i < distanciaCiudades.size(); i++)
   {
      int num;
      cin >> num;
      distanciaCiudades[i].first = num;
      distanciaCiudades[i].second = i + 1;
   }
   sort(distanciaCiudades.begin(), distanciaCiudades.end());
   int minDist = distanciaCiudades[0].first;

   for (int i = 1; i < distanciaCiudades.size(); i++)
      if (distanciaCiudades[i].first == minDist)
      {
         cout << "Still Rozdil";
         return 0;
      }

   cout << distanciaCiudades[0].second;
   return 0;
}