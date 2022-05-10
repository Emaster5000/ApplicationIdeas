// Ethan Mabey
#include "easy.h"
using namespace std;

int main(int argc, const char * argv[]) {
  cout << "█████████████████████████████████████████████████████\n";
  cout << "█▄─▄▄─█▄─▀─▄█▄─▄▄─█▄─▄███─▄▄─█─▄▄▄▄█▄─▄█─▄▄─█▄─▀█▄─▄█\n";
  cout << "██─▄█▀██▀─▀███─▄▄▄██─██▀█─██─█▄▄▄▄─██─██─██─██─█▄▀─██\n";
  cout << "▀▄▄▄▄▄▀▄▄█▄▄▀▄▄▄▀▀▀▄▄▄▄▄▀▄▄▄▄▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▄▄▄▀▀▄▄▀\n";
  cout << "███████████████████████████████████████\n";
  cout << "██─▄▄▄▄█▄─██─▄█▄─▄▄▀█─▄▄─█▄─█─▄█▄─██─▄█\n";
  cout << "██▄▄▄▄─██─██─███─██─█─██─██─▄▀███─██─██\n";
  cout << "▀▀▄▄▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▄▄▀▄▄▀▀▄▄▄▄▀▀\n\n\n";
  cout << "Please enter your difficulty, for easy, press 1, for medium, 2, for hard, 3, and for expert, 4. If you need help, or want to know how to play, press 5.\nDifficulty: ";
  int dif;
  cin >> dif;
  if(dif == 1) {
      Easy board;
      board.easy();
      return 0;
  }
  
  cout << "█████████████████████████████████████████████\n";
  cout << "█▄─█─▄█─▄▄─█▄─██─▄███▄─█▀▀▀█─▄█▄─▄█▄─▀█▄─▄█ █\n";
  cout << "██▄─▄██─██─██─██─█████─█─█─█─███─███─█▄▀─██▄█\n";
  cout << "▀▀▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▀▀▀▀▄▄▄▀▄▄▄▀▀▄▄▄▀▄▄▄▀▀▄▄▀▄▀\n";
  cout << "Thanks for playing, if you wish to play again, restart the application\nDevelopers: Ethan Mabey and Parker Dengg";
}
