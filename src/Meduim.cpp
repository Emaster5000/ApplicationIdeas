// Ethan Mabey
#include "medium.h"
using namespace std;

void Medium::medium() {
  string n1, n2, n3, n4, n5, n6, n7, n8, n9;
  char top[] = "________________________________________\n";
  char line[] = "----------------------------------------\n";
  char line2[] = "========================================\n";
  int medium = rand()%1;
  if (medium == 0) {
    // Parker Dengg
    n1 = "|   |   | 4 || 7 | 1 | 1 ||   |   |   ||\n";
    n2 = "|   | 7 | 2 || 8 |   | 6 || 5 |   |   ||\n";
    n3 = "|   |   | 1 ||   |   | 5 ||   |   | 7 ||\n";
    n4 = "|   | 1 |   || 6 | 9 |   || 2 |   |   ||\n";
    n5 = "| 3 | 9 |   ||   | 5 |   ||   |   |   ||\n";
    n6 = "|   |   |   ||   |   |   ||   | 8 | 5 ||\n";
    n7 = "|   |   | 1 || 2 | 3 |   || 8 |   | 4 ||\n";
    n8 = "|   |   | 3 || 5 |   | 4 ||   |   | 2 ||\n";
    n9 = "| 2 | 4 |   || 9 |   |   ||   |   |   ||\n";
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
