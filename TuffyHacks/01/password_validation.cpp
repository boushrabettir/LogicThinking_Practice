#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

vector<string> Password(const string filename) {
  vector<string> newVector{};
  std::ifstream openStream;
  openStream.open("plates.txt", std::ifstream::in);
  string printedPasswords;
  regex formatPasswords("^[0-9][a-zA-Z]{3}[0-9]{3}$");

  do {

    if (regex_match(printedPasswords, formatPasswords)) {
      newVector.push_back("T");
    } else {
      newVector.push_back("F");
    }

  } while (openStream >> printedPasswords);

  return newVector;
}

int main() {
  vector<string> validating = Password("plates.txt");
  for (const string finalPasswords : validating) {
    cout << finalPasswords;
  }
  return 0;
}
