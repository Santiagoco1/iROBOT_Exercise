#include "Player.h"

Player::Player() {
  cash = 0;
  number_list = {1, 2, 3, 4};
}
void Player::initialize_numbers() {
  number_list = {1, 2, 3, 4};
}
void Player::bet(bool neqCero, bool condition) {
  if(neqCero && condition) {
    this->win_bet();
  }
  else this->lose_bet();
}
void Player::lose_bet() {
  int bet = this->number_list.front() + this->number_list.back();
  this->cash -= bet;
  this->number_list.pop_front();
  this->number_list.pop_back();
  if(this->number_list.size() < 2) this->initialize_numbers();
}
void Player::win_bet() {
  int bet = this->number_list.front() + this->number_list.back();
  if(bet > 4000) {
    this->initialize_numbers();
    bet = 5;
  }
  this->cash += bet;
  this->number_list.push_back(bet);
}
int Player::give_cash() {return this->cash;}