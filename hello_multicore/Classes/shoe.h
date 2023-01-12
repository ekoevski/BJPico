#ifndef SHOE_H
#define SHOE_H


#include <iostream>
#include <fstream>
#include <vector>
#include "card.h"

using namespace std;


// CLASS SHOE//
// Declarations
class Shoe
{
  public:
  int cutCard;
  int deckNumber;
  vector<Card*> theShoe;

  Shoe();
  Shoe(int cutCard, int deckNumber);

  void Shuffle();
  void showAllCards();
  Card* drawCard();
};



#endif // BINSEARCH_HPP