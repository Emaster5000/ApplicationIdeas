#include <iostream>
using namespace std;

class Easy {
public:
  string n1, n2, n3, n4, n5, n6, n7, n8, n9;
};

void easy() {
  Easy board1, board2, board3, board4;
  board1.n1 = "| 9 |   |   || 8 | 4 | 1 || 3 |   |   ||\n";
  board1.n2 = "|   |   | 1 || 9 |   |   || 4 | 2 |   ||\n";
  board1.n3 = "|   |   |   || 2 |   |   ||   | 1 |   ||\n";
  board1.n4 = "| 8 | 7 |   || 1 |   |   || 5 | 4 |   ||\n";
  board1.n5 = "| 1 | 5 |   || 3 | 6 |   ||   |   | 2 ||\n";
  board1.n6 = "| 2 |   |   ||   |   |   || 7 | 6 |   ||\n";
  board1.n7 = "| 7 | 2 |   ||   |   | 5 || 1 | 9 |   ||\n";
  board1.n8 = "| 6 | 3 |   ||   |   |   || 2 |   | 7 ||\n";
  board1.n9 = "|   | 1 | 5 || 7 |   | 2 ||   |   | 8 ||\n";
  cout << board1.n1;
}
