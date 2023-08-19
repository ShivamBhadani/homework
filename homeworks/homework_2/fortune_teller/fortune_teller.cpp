#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

int main() {
  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:\n";
  string name;
  cin >> name;
  cout << "Please enter the time of year when you were born:\n(pick from "
          "'spring', 'summer', 'autumn', 'winter')"
       << endl;
  string season;
  cin >> season;
  cout << "Please enter an adjective:" << endl;
  vector<string> adjectives(2);
  cin >> adjectives[0];
  cout << "Please enter another adjective:" << endl;
  cin >> adjectives[1];
  int modl1 = (name.size()) % 2;
  map<string, string> noun{
      {"spring", "STL guru"},
      {"summer", "C++ expert"},
      {"autumn", "coding beast"},
      {"winter", "software design hero"},
  };
  vector<string> ending{"eats UB for breakfast",
                        "finds errors quicker than the compiler",
                        "is not afraid of C++ error messages"};
  int modl2 = (name.size()) % 3;
  cout << "Here is your description:\n";
  cout << name << ", the " << adjectives[modl1] << " " << noun[season]
       << " that " << ending[modl2] << endl;

  return 0;
}
