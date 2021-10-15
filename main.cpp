/*
Things to do:
make a 50 percent chance to make the card reversed

when the card is reversed that just means you have to work on whatever the original meaning says
*/

#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;

string cards[][2] = {
  {"The Fool", "New beginnings, optimism, trust in life"},
  {"The Magician", "Action, the power to manifest"},
  {}
};

string return_description(string card_name, string description){
  return "Your card is: " + card_name + "\n" + "It means: " + description;
}


int main() {
  unsigned const int card_number = rand()%(sizeof(cards)/sizeof(cards[0]));
  cout << card_number;

  auto card = cards[card_number];
  string return_value = return_description(card[0], card[1]);
  cout << return_value;
}