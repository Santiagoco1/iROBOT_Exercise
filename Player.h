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
 - lose_bet : Null -> Null
   Calculates the amount of cash the player is betting
   Reduces the cash the player owns
   Deletes the first and last numbers of from his list
   If the list has less than 2 number, resets it
 - win_bet : Null -> Null
   Calculates the amount of cash the player is betting
   If the bet is greater than the limit, resets the list
   Increases the cash the player owns
   Adds the bet at the end of his list
 - bet : Bool, Bool -> Null
   Checks if the two booleans are True, is that happens 
   makes te player win, if no makes the player lose
 - give_cash : Null -> Int
   Returns the actual amount of cash of the player
*/

class Player {
  int cash;
  list<int> number_list;
public:
  Player();
  void initialize_numbers();
  void lose_bet();
  void win_bet();
  void bet(bool neqCero, bool condition);
  int give_cash();
};