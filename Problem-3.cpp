/*  
  Problem 3: word scaramble game
    Game Flow: 
        Welcome to the Word Scramble Game!
        Try to guess the original word from the scrambled word: pleap
        You have 5 attempts.

        Enter your guess: leap
        Incorrect! Try again. You have 4 attempts left.

        Enter your guess: apple
        Congratulations! You guessed the correct word!
        or
          You’re out of attempts! The correct word was: apple
        Note : You must initialize a list of words and select a random word from it. 

*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

int main(){

  srand(time(0));
  string wordlist[] = {"concept", "task", "Problem", "three", "scarmble", "game"};

  string orignialWord = wordlist[rand() % 6];
  string scarmbleWord = orignialWord;
  string userInput;
  int att = 5;

  random_shuffle(scarmbleWord.begin(),scarmbleWord.end());

  cout<<endl<<"Welcome to the Word Scramble Game!"<<endl;
  cout<<"Try to guess the original word from the scrambled word: "<<scarmbleWord<<endl;
  cout<<"You have 5 attempts"<<endl;
  cout<<"Enter your guess: ";
  getline(cin,userInput);

  while (att--){
    if(userInput == orignialWord){
      cout<<"Congratulations! You guessed the correct word!"<<endl;
      break;
  }else if (att == 0){
    cout<<"You’re out of attempts! The correct word was: "<<orignialWord<<endl;
  }else{
    cout<<endl<<"Incorrect! Try again. You have "<<att<<" attempts left."<<endl;
    cout<<"Enter your guess: ";
    getline(cin,userInput);
  }
  }

  return 0;
}
