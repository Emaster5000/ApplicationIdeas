// Ethan Mabey
#include "hard.h"
using namespace std;

void Hard::hard() {
  string n1, n2, n3, n4, n5, n6, n7, n8, n9;
  char top[] = "________________________________________\n";
  char line[] = "----------------------------------------\n";
  char line2[] = "========================================\n";
  int hard = rand()%1;
  if (hard == 0) {
    // Parker Dengg
    n1 = "|   |   |   ||   | 5 | 1 ||   |   |   ||\n";
    n2 = "|   |   | 2 || 3 |   |   || 1 |   | 9 ||\n";
    n3 = "|   |   | 1 || 9 | 8 | 2 || 3 |   |   ||\n";
    n4 = "|   | 8 | 4 ||   | 3 | 7 ||   |   |   ||\n";
    n5 = "|   | 6 |   ||   | 4 |   ||   | 7 |   ||\n";
    n6 = "| 9 |   |   ||   |   |   || 4 |   |   ||\n";
    n7 = "| 2 |   |   || 5 |   |   || 6 |   |   ||\n";
    n8 = "|   | 4 |   ||   | 2 |   ||   | 9 |   ||\n";
    n9 = "|   |   |   || 1 |   |   ||   | 4 |   ||\n";
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
