#include "card.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


// CLASS CARD //
// Value: 1 = A, 2 = 2 .... 10 = 10, 11 = J, 12 = Q, 13 = K
// Suit: 1 = Spades, 2 = Hearts, 3 = Clubs, 4 = Diamonds 
// Implementation

Card::Card(int value, int suit)
{
    cardValue = value;
    cardSuit = suit;
    switch(value){
        case 1:
        cardName ="A";
        break;

        case 2:
        cardName ="2";
        break;

        case 3:
        cardName ="3";
        break;

        case 4:
        cardName ="4";
        break;

        case 5:
        cardName ="5";
        break;

        case 6:
        cardName ="6";
        break;

        case 7:
        cardName ="7";
        break;

        case 8:
        cardName ="8";
        break;

        case 9:
        cardName ="9";
        break;

        case 10:
        cardName ="10";
        break;

        case 11:
        cardName ="J";
        break;

        case 12:
        cardName ="Q";
        break;

        case 13:
        cardName ="K";
        break;

        default:
        cardName = "Empty";
    }
};

Card::Card()
{
    cardValue = 0;
    cardSuit = 0;
    cardName = "Empty";
};




