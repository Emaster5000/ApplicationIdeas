#include <iostream>
using namespace std;

int main() {
  cout << "█████████████████████████████████████████████████████\n";
  cout << "█▄─▄▄─█▄─▀─▄█▄─▄▄─█▄─▄███─▄▄─█─▄▄▄▄█▄─▄█─▄▄─█▄─▀█▄─▄█\n";
  cout << "██─▄█▀██▀─▀███─▄▄▄██─██▀█─██─█▄▄▄▄─██─██─██─██─█▄▀─██\n";
  cout << "▀▄▄▄▄▄▀▄▄█▄▄▀▄▄▄▀▀▀▄▄▄▄▄▀▄▄▄▄▀▄▄▄▄▄▀▄▄▄▀▄▄▄▄▀▄▄▄▀▀▄▄▀\n";
  cout << "███████████████████████████████████████\n";
  cout << "██─▄▄▄▄█▄─██─▄█▄─▄▄▀█─▄▄─█▄─█─▄█▄─██─▄█\n";
  cout << "██▄▄▄▄─██─██─███─██─█─██─██─▄▀███─██─██\n";
  cout << "▀▀▄▄▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▄▄▀▄▄▀▀▄▄▄▄▀▀\n\n\n";
  cout << "Please enter your difficulty, for easy press 1(for end screen), for medium, 2, for hard, 3, and for expert, 4. If you need help, \nor want to know how to play, press 5.\n";
  int dif;
  cin >> dif;
  if(dif == 1) {
    cout << "█████████████████████████████████████████████\n";
    cout << "█▄─█─▄█─▄▄─█▄─██─▄███▄─█▀▀▀█─▄█▄─▄█▄─▀█▄─▄█░█\n";
    cout << "██▄─▄██─██─██─██─█████─█─█─█─███─███─█▄▀─██▄█\n";
    cout << "▀▀▄▄▄▀▀▄▄▄▄▀▀▄▄▄▄▀▀▀▀▀▄▄▄▀▄▄▄▀▀▄▄▄▀▄▄▄▀▀▄▄▀▄▀\n";
    cout << "Thanks for playing, if you wish to play again, restart the application\nDevelopers: Ethan Mabey and Parker Dengg";
  }
}
