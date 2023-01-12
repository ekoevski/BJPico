#include "card.h"
#include "shoe.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


Shoe::Shoe()   //Default is 6 decks, no cut card implemented
{
  // Create shoe (vector of cards)
  for(int j = 0; j < deckNumber; j++)
  {
    for(int k = 1; k <= 4; k++)
    {
      for(int i = 1; i <= 13; i++)
      {
        Card *aCard = new Card(i,k);
        theShoe.push_back(aCard);
      }        
    }
  }
};



Shoe::Shoe(int cutC, int deckNum)   //Default is 6 decks, no cut card implemented
{
  cutCard = cutC;
  deckNumber = deckNum;
  // Create shoe (vector of cards)
  for(int j = 0; j < deckNumber; j++)
  {
    for(int k = 1; k <= 4; k++)
    {
      for(int i = 1; i <= 13; i++)
      {
        Card *aCard = new Card(i,k);
        theShoe.push_back(aCard);
      }        
    }
  }
};

void Shoe::showAllCards()
{
    std::vector<Card*>::iterator it = theShoe.begin();
    int spacer = 0;
    int cardValue = 0;
for (it = theShoe.begin(); it != end (theShoe); ++it) {
    if(spacer % 7 == 0){printf("\n");}
    cardValue = (*it)->getValue();
    printf("C: %d "  , cardValue);
    spacer++;
}
};


// Randomizes the cards in the shoe
void Shoe::Shuffle()
{

};


// Draws a card fromt the deck
Card* Shoe::drawCard()
{
  Card* temp = *theShoe.end(); // Try begin or end, not sure...
  theShoe.pop_back();
  return temp;
};




