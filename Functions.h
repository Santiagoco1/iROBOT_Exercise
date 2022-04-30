#include <iostream>
#include <fstream>
#include "Player.h"

using namespace std;

// is_even : Int -> Bool
// Verifies if the number passed is even
bool is_even(int number);

// is_mayor : Int -> Bool
// Verifies if the number passed is mayor
bool is_mayor(int number);

// is_red : Int -> Bool
// Verifies if the number passed is red
bool is_red(int number);

// roulette : Player, Player, Player, Player, Player, Player -> int
// Simulates all the moves from the players
// Iterates until all players have made all moves
// To make all the players bet, calls each bet method
// Passing as a argument two booleans,
// the first identifies if the random number is diferent to zero,
// the second verifies if the random number is the same type that player bets
// Returns the sum of all the final profits

// DATA
// - ROUND_MAX : Int
// Amount of rounds
// - RANDOM_MAX : Int
// Ceiling of random

int roulette(Player Even, Player Odd, Player Mayor, Player Minor, Player Red, Player Black);

// output : Int -> Null
// Prints the final profit into a document txt
void output(int final_profit);