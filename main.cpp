/*
Things to do:
make a 50 percent chance to make the card reversed

when the card is reversed that just means you have to work on whatever the original meaning says or it means the opposite of the original meaning
*/

#include <iostream>
#include <string>
#include <random>

using namespace std;

string cards[][2] = {
  {"The Fool", "New beginnings, optimism, trust in life"},
  {"The Magician", "Action, the power to manifest"},
  {}
};

int return_random_numbers(int minimum, int maximum){
  random_device r;
  default_random_engine e1(r());
  uniform_int_distribution<int> uniform_dist(minimum, maximum);
  return uniform_dist(e1);
}

string return_description(string card_name, string description){
  int reversed_card = return_random_numbers(0, 1);
  if(reversed_card == 1){
    return "Your card is: " + card_name + "\n" + "It means: " + description;
  }else{
    return "Your card is: " + card_name + "\n" + "It means you need to improve on: " + description;
  }
}

int main() {
  unsigned const int card_number = return_random_numbers(0, *(&cards + 1) - cards);

  auto card = cards[card_number];
  string return_value = return_description(card[0], card[1]);
  cout << return_value;
}