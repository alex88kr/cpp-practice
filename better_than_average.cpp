/*
There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return True if you're better, else False!
*/

#include <vector>
using namespace std;
bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  // your code here
  int size = classPoints.size();
  int sum = 0;
  for (int i=0;i<size;i++) {
    sum += classPoints[i];
  }
  double average = sum / size;
  if (yourPoints > average) {
    return true;
  } else {
    return false;
  }
}
