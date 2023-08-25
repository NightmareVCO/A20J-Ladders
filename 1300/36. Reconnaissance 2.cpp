#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <map>
using namespace std;
// 34A

bool neighbours(int x, int y, int circle)
{
   return x == y - 1                    ? true
          : x == y + 1                  ? true
          : x == 0 && y == (circle - 1) ? true
                                        : false;
}

int main()
{
   int cantSolders, soldierWeight, minPair, firstSolder, secondSolder, currentWeight;
   cin >> cantSolders;
   int solders[cantSolders];

   for (int i = 0; i < cantSolders; i++)
      cin >> solders[i];

   minPair = abs(solders[0] - solders[1]);
   firstSolder = 0;
   secondSolder = 1;

   for (int i = 0; i < cantSolders; i++)
      for (int j = 0; j < cantSolders; j++)
      {
         if (i == j)
            continue;

         if ((currentWeight = abs(solders[i] - solders[j])) < minPair &&
             neighbours(i, j, cantSolders))
         {
            minPair = currentWeight;
            firstSolder = i;
            secondSolder = j;
         }
      }

   cout << firstSolder + 1 << " " << secondSolder + 1;
   return 0;
}

/*
Que el peso de los soldados sean la menor diferencia absoluta
DE MANERA CIRCULAR (o sea que puede ser el 1 y el 5)


No funciona porque si la distancia entre el primero y el segundo es muy grande, puede ser que haya otro valores
que tengan una distancia menor, lo que haria el valor abosoluto menor.
*/