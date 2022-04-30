#include "Functions.h"

// main : Null -> Int
// Main function of the program
// Creates the six players
// Makes the game starts calling the function "roulette" and recieves the final profit
// Calls the function "output" to print the final profit into a document txt

/*
 Data
 - Even : Player
 Player that always bets to even numbers
 - Odd : Player
 Player that always bets to odd numbers
 - Mayor : Player
 Player that always bets to mayor numbers
 - Minor : Player
 Player that always bets to red numbers
 - Black : Player
 Player that always bets to black numbers
 - final_profit : Int
 Final amount of cash of all the players
*/

int main() {

  Player Even, Odd, Mayor, Minor, Red, Black;
  int final_profit;

  srand(time(0));

  final_profit = roulette(Even, Odd, Mayor, Minor, Red, Black);

  output(final_profit);

  return 0;
}