#include "expert.h"
using namespace std;

void Expert::expert() {
  string n1, n2, n3, n4, n5, n6, n7, n8, n9;
  char top[] = "________________________________________\n";
  char line[] = "----------------------------------------\n";
  char line2[] = "========================================\n";
  int expert = rand()%1;
  if (expert == 0) {
    n1 = "| 9 |   |   || 6 | 7 |   ||   |   |   ||\n";
    n2 = "| 2 |   |   || 9 |   |   ||   |   |   ||\n";
    n3 = "|   |   |   ||   |   |   || 6 | 2 |   ||\n";
    n4 = "|   | 5 |   ||   | 1 |   || 8 |   | 6 ||\n";
    n5 = "|   | 1 |   ||   |   | 3 ||   |   | 7 ||\n";
    n6 = "|   |   |   ||   | 2 |   ||   |   |   ||\n";
    n7 = "|   |   | 5 || 7 |   |   ||   |   | 3 ||\n";
    n8 = "|   |   | 9 ||   |   | 4 ||   |   | 8 ||\n";
    n9 = "|   |   |   ||   |   |   || 1 | 5 | 2 ||\n";
    cout << top;
    cout << n1;
    cout << line;
    cout << n2;
    cout << line;
    cout << n3;
    cout << line2;
    cout << n4;
    cout << line;
    cout << n5;
    cout << line;
    cout << n6;
    cout << line2;
    cout << n7;
    cout << line;
    cout << n8;
    cout << line;
    cout << n9;
    cout << line;
  }
}
