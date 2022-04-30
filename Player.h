#include <iostream>
#include <list>
using namespace std;

/*
Player Class
private:
 - cash : Int
   Amount of cash of the player
 - number_list : List <Int>
   List of numbers that the player has to make his bets
public:
 - Player : player constructor
 - lose_bet : Int -> Null
   Reduces the cash the player owns
   Deletes the first and last numbers of from his list
   If the list has less than 3 numbers, resets it
 - win_bet : Int -> Null
   Increases the cash the player owns
   Adds the bet at the end of his list
 - bet : Bool, Bool -> Null
   Obtains the player's bet
   Checks if the two booleans are True, is that happens 
   makes the player win, if no makes the player lose
 - give_cash : Null -> Int
   Returns the actual amount of cash of the player
 - give_bet : Null -> Int
   Returns the player's bet, depending on his number list and the limits of the bet
*/

class Player {
  int cash;
  list<int> number_list;
public:
  Player();
  void initialize_numbers();
  void lose_bet(int bet);
  void win_bet(int bet);
  void bet(bool neqCero, bool condition);
  int give_cash();
  int give_bet();
};