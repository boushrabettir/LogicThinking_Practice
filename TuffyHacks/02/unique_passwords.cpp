#include <iostream>
#include <vector>
#include <array>

using namespace std;

int generator() {
  array<string, 10> nums{"0","1","2","3","4","5","6","7","8","9"};
  array<string, 7> special{"!","@","#","$","%","^","&"};
  array<string, 13> letters{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M"};
  array<string, 13> smallLetters{"n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

  vector<string> newArray{};

  for(int i = 1; i < 14; i++ ){
    int index = rand() % 10; 
    int index2 = rand() % 7;
    int index3 = rand() % 13;
    string numbers = nums[index];
    string specials = special[index2];
    string letter = letters[index3];
    string smallLetter = smallLetters[index3];
    newArray.push_back(numbers);
    newArray.push_back(specials);
    newArray.push_back(letter);
    newArray.push_back(smallLetter);
    cout << newArray[i];
  }
 return 0;
}

int main() {
  srand(time(NULL));
  for(int i = 1; i < 101; i++){
    cout << generator() << '\n';
  }
  return 0;
}
