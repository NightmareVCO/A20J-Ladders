#include <iostream>

using namespace std;

void toggle_light(int i, int j, int lights[3][3])
{
   lights[i][j] = 1 - lights[i][j];
   if (i > 0)
      lights[i - 1][j] = 1 - lights[i - 1][j];
   if (i < 2)
      lights[i + 1][j] = 1 - lights[i + 1][j];
   if (j > 0)
      lights[i][j - 1] = 1 - lights[i][j - 1];
   if (j < 2)
      lights[i][j + 1] = 1 - lights[i][j + 1];
}

int main()
{
   int grid[3][3];
   int lights[3][3];

   // Read input
   for (int i = 0; i < 3; ++i)
   {
      for (int j = 0; j < 3; ++j)
      {
         cin >> grid[i][j];
         lights[i][j] = 1;
      }
   }

   // Toggle the lights based on the grid input
   for (int i = 0; i < 3; ++i)
   {
      for (int j = 0; j < 3; ++j)
      {
         if (grid[i][j] % 2 == 1)
         {
            toggle_light(i, j, lights);
         }
      }
   }

   // Print the current state of the lights
   for (int i = 0; i < 3; ++i)
   {
      for (int j = 0; j < 3; ++j)
      {
         cout << lights[i][j];
      }
      cout << endl;
   }

   return 0;
}
