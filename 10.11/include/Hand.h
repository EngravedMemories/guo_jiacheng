#ifndef HAND_H
#define HAND_H

#include <string>
#include <vector>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

class Hand
{
public:
   Hand( DeckOfCards &deck );
   void print() const;
   bool pair() const;
   bool twoPair() const;
   bool threeOfAKind() const;
   bool fourOfAKind() const;
   bool flush() const;
   bool straight() const;
private:
   vector< Card > hand;
   vector< int > faceCount;
};

#endif
