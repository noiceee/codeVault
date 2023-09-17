/* Kochouseph Chittilappilly went to Dhruv Zplanet , a gaming space, with his
friends and played a game called “Guess the Word”. Rules of games are – Computer
displays some strings on the screen and the player should pick one string / word
if this word matches with the random word that the computer picks then the
player is declared as Winner. Kochouseph Chittilappilly’s friends played the
game and no one won the game. This is Kochouseph Chittilappilly’s turn to play
and he decided to must win the game. What he observed from his friend’s game is
that the computer is picking up the string whose length is odd and also that
should be maximum. Due to system failure computers sometimes cannot generate odd
length words. In such cases you will lose the game anyways and it displays
“better luck next time”. He needs your help. Check below cases for better
understand

*/

#include <iostream>
#include <string>

using namespace std;


int main() {
  int n;
  string Str , result = "";
  cout << "enter Num of string: ";
  cin >> n;
  while(n--){
    cin>>Str;
    if(Str.length()%2 !=0){
        if(Str.length()>result.length())
        result = Str ;
    }
    
  }

  return 0;
}