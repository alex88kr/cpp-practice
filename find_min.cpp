//finding the smallest number in an array

#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
   // Your Code is Here ... Hope you Enjoy 
  int size = list.size();
  int min = list[0];
  for (int i=1;i<size;i++) {
    if (list[i] < min) {
      min = list[i];
    }
  }
  
  return min;
}
