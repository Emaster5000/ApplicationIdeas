#include <iostream>
#include "medium.h"
#include <time.h>
using namespace std;

void Medium::medium() {
  string n1, n2, n3, n4, n5, n6, n7, n8, n9;
  char top[] = "________________________________________\n";
  char line[] = "----------------------------------------\n";
  char line2[] = "========================================\n";
  srand((unsigned)time(NULL));
  int medium = rand()%4;
  if (medium == 0) {
    n1 = "|   |   | 4 || 7 | 1 |   ||   |   |   ||\n";
    n2 = "|   | 7 | 2 || 8 |   | 6 || 5 |   |   ||\n";
    n3 = "|   |   | 1 ||   |   | 5 ||   |   | 7 ||\n";
    n4 = "|   | 1 |   || 6 | 9 |   || 2 |   |   ||\n";
    n5 = "| 3 | 9 |   ||   | 5 |   ||   |   |   ||\n";
    n6 = "|   |   |   ||   |   |   ||   | 8 | 5 ||\n";
    n7 = "|   |   | 1 || 2 | 3 |   || 8 |   | 4 ||\n";
    n8 = "|   |   | 3 || 5 |   | 4 ||   |   | 2 ||\n";
    n9 = "| 2 | 4 |   || 9 |   |   ||   |   |   ||\n";
  }
  if (medium == 1) {
    n1 = "|   |   | 4 || 6 |   | 5 || 8 |   |   ||\n";
    n2 = "| 6 |   |   ||   |   |   ||   |   |   ||\n";
    n3 = "|   |   | 1 ||   | 4 | 7 || 6 |   | 5 ||\n";
    n4 = "| 2 | 8 |   || 3 |   |   ||   |   |   ||\n";
    n5 = "| 7 | 4 |   ||   |   | 8 || 2 | 5 |   ||\n";
    n6 = "|   |   |   ||   |   |   || 9 |   |   ||\n";
    n7 = "|   | 2 | 5 || 7 |   |   || 3 | 6 |   ||\n";
    n8 = "| 4 | 3 |   ||   | 2 |   ||   | 8 |   ||\n";
    n9 = "|   |   |   || 8 | 6 | 3 || 5 | 4 |   ||\n";
  }
  if(medium == 2) {
    n1 = "| 1 |   | 6 || 4 |   |   ||   |   | 7 ||\n";
    n2 = "|   |   | 9 ||   |   | 7 ||   |   |   ||\n";
    n3 = "|   |   | 8 || 9 | 2 |   ||   | 4 | 6 ||\n";
    n4 = "|   | 6 |   || 1 |   | 4 || 2 |   |   ||\n";
    n5 = "|   | 8 | 1 ||   |   |   ||   | 3 |   ||\n";
    n6 = "| 2 |   |   || 8 |   | 5 || 6 |   | 1 ||\n";
    n7 = "|   |   |   ||   |   |   ||   |   |   ||\n";
    n8 = "|   | 3 | 4 ||   | 6 |   || 7 |   |   ||\n";
    n9 = "|   | 1 | 7 ||   |   |   || 9 | 6 |   ||\n";
  if(medium == 3) {
    n1 = "| 1 |   |   ||   | 6 |   ||   |   |   ||\n";
    n2 = "| 9 | 8 |   ||   |   |   || 6 |   | 5 ||\n";
    n3 = "|   |   |   ||   |   | 5 ||   |   | 1 ||\n";
    n4 = "|   |   |   ||   |   |   || 3 |   | 4 ||\n";
    n5 = "|   | 6 |   || 1 | 3 |   || 9 |   |   ||\n";
    n6 = "|   | 4 |   || 7 | 2 |   ||   |   |   ||\n";
    n7 = "|   | 9 | 3 ||   | 7 | 6 || 1 |   |   ||\n";
    n8 = "|   |   | 6 || 4 | 8 |   ||   |   | 7 ||\n";
    n9 = "| 5 |   |   || 9 |   | 2 || 4 | 6 |   ||\n";
  }
}
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
