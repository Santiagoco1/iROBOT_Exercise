#include "Functions.h"

bool is_even(int number) {return number % 2 == 0;}

bool is_mayor(int number) {return number > 18;}

bool is_red(int number) {
  if((number > 10 && number < 19) || (number > 28)) return is_even(number);
  else return !is_even(number);
}

int roulette(Player Even, Player Odd, Player Mayor, Player Minor, Player Red, Player Black) {
  const int ROUND_MAX = 10000;
  const int RANDOM_MAX = 37;

  for(int i = 0, random; i < ROUND_MAX; i++) {
    random = rand() % RANDOM_MAX;
    cout << "Round: " << i+1 << endl;
    cout << "Random Number: " << random << endl;
    
    Even.bet(random != 0, is_even(random));
    Odd.bet(random != 0, !is_even(random));
    Mayor.bet(random != 0, is_mayor(random));
    Minor.bet(random != 0, !is_mayor(random));
    Red.bet(random != 0, is_red(random));
    Black.bet(random != 0, !is_red(random));
    
    cout << "\n" << endl;
  }

  return Even.give_cash() + Odd.give_cash() + Mayor.give_cash() + 
          Minor.give_cash() + Red.give_cash() + Black.give_cash();
}

void output(int final_profit) {
  ofstream file;
  file.open("roulette.txt");
  file << "Final Profit: $" << final_profit;
  file.close();
}
