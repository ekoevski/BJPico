#include <iostream>
#include <string>
#include <fstream>
#include "table.h"

using namespace std;


// CLASS TABLE //
// Implementation

Table::Table()
{
  gameName = "BlackJack";
  shoeCount = 6;
  theShoe = new Shoe(0, shoeCount);
}

Table::Table(string newGameName, int numberOfDecks){
  gameName = newGameName;
  shoeCount = numberOfDecks;
  theShoe = new Shoe(0, shoeCount);
}

void Table::placeCards()
{
    /// This needs to draw cards from shoe which you haven't instantiated, 
    ///and needs a dealer to do it which you havent instantiated either
};

