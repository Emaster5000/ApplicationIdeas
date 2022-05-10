// Ethan Mabey
#include "easy.h"
using namespace std;

void Easy::board1() {
  string n1, n2, n3, n4, n5, n6, n7, n8, n9;
  char top[] = "________________________________________\n";
  char line[] = "----------------------------------------\n";
  char line2[] = "========================================\n";
  int easy = rand()%2;
  if(easy == 0) {
    n1 = "| 9 |   |   || 8 | 4 | 1 || 3 |   |   ||\n";
    n2 = "|   |   | 1 || 9 |   |   || 4 | 2 |   ||\n";
    n3 = "|   |   |   || 2 |   |   ||   | 1 |   ||\n";
    n4 = "| 8 | 7 |   || 1 |   |   || 5 | 4 |   ||\n";
    n5 = "| 1 | 5 |   || 3 | 6 |   ||   |   | 2 ||\n";
    n6 = "| 2 |   |   ||   |   |   || 7 | 6 |   ||\n";
    n7 = "| 7 | 2 |   ||   |   | 5 || 1 | 9 |   ||\n";
    n8 = "| 6 | 3 |   ||   |   |   || 2 |   | 7 ||\n";
    n9 = "|   | 1 | 5 || 7 |   | 2 ||   |   | 8 ||\n";
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
  if(easy == 1) {
    // Parker Dengg
    n1 = "|   | 7 | 9 || 8 |   | 2 ||   | 6 | 3 ||\n";
    n2 = "| 6 |   |   || 9 |   |   ||   | 1 |   ||\n";
    n3 = "| 8 |   | 3 ||   | 7 |   ||   |   | 2 ||\n";
    n4 = "|   | 9 |   ||   |   |   || 3 | 7 | 1 ||\n";
    n5 = "|   | 6 | 8 || 7 |   |   ||   | 9 |   ||\n";
    n6 = "|   | 3 | 1 ||   | 2 |   || 5 | 8 |   ||\n";
    n7 = "| 2 | 8 | 6 || 5 |   |   || 1 | 3 |   ||\n";
    n8 = "|   |   |   ||   |   |   ||   |   |   ||\n";
    n9 = "| 9 |   | 4 || 3 |   |   || 8 | 2 | 7 ||\n";
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
