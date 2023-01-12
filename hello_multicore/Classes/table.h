#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <iostream>
#include <fstream>
#include "shoe.h"

using namespace std;



// CLASS TABLE//
// Declarations
class Table
{
  public:
  string gameName;
  int shoeCount;
  float Bet;

  Shoe* theShoe;

  Table();
  Table(string Name, int decks);

  void placeCards();
  //void analyze();
  //void displayTable();
  //void displayAnalysis();

  // Get / Set
  void setBet(float bet) {Bet = bet;};
  float getBet(){return Bet;}

};




#endif // BINSEARCH_HPP