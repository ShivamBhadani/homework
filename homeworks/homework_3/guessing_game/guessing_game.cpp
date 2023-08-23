#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;
using std::random_device;
using std::uniform_int_distribution;

int_fast16_t get_random_number(int_fast16_t min, int_fast16_t max) {
  random_device rd;
  uniform_int_distribution<int_fast16_t> dist(min, max);
  return dist(rd);
}

int main() {
  cout << "Welcome to the GUESSING GAME!\nI will generate a number and you "
          "will guess it!"
       << endl;
  cout << "Please provide the smallest number: " << endl;
  int_fast16_t min;
  cin >> min;
  cout << "Please provide the largest number: " << endl;
  int_fast16_t max;
  cin >> max;
  int_fast16_t random_number = get_random_number(min, max);
  cout << "I've generated a number. Try to guess it!" << endl;
  int_fast16_t K = 0;
  while (true) {
    K++;
    cout << "Please provide the next guess:" << endl;
    int_fast16_t guess;
    cin >> guess;
    if (guess == random_number) {
      cout << "You've done it! You guessed the number " << random_number
           << " in " << K << " guesses!" << endl;
      break;
    } else if (guess < random_number) {
      cout << "Your number is too small. Try again!" << endl;
    } else {
      cout << "Your number is too big. Try again!" << endl;
    }
  }
  return 0;
}