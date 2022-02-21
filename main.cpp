#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dictionary.h"

// function prototypes:
std::string get_hint(std::string,std::string);
void capitalize(std::string &);

// Wordler game!
int main(){
	srand(time(NULL)); //execute only once per run

	dictionary word_list;
	std::string guess;
	std::string hint;
	std::string secret;
	int guesses = 0;

	secret = word_list.select_word();
	// REVEAL ANSWER: std::cout << secret << std::endl;
	std::cout << "Welcome to Wordler -- a game that totally isn't simplified Wordle\n";
	std::cout << "Guess your five-letter word:\n_____\n";

	do{
		do{
			std::cin >> guess;
		}while( guess.length() != 5 );

		if(guess == "quit!") break; 

		// capitalize guess for easy comparisons
		for(int i=0; i<guess.length(); i++){
			guess[i] = toupper(guess[i]);
		}
		guesses++;
		hint = get_hint(guess,secret);

		if( hint == secret ){
			std::cout << "Congrats, you got it in " << guesses << " guesses!\n";
		}
		else{
			std::cout << hint << " Guess again: ";
		}
	}while( hint != secret );


	return 0;
}

// compares a guess and a secret word and reveals matching letters, but all
// non-matching letters become underscores ('_') and the hint is returned
std::string get_hint(std::string match, std::string word){
    for(int i=0; i<word.length(); i++){
        if( word[i] != match[i] ){
            word[i] = '_';
        }
    }
    return word;
}

// capitalizes a word (to UPPER CASE)
void capitalize(std::string & word){
    for(int i=0; i<word.length(); i++){
        word[i] = toupper(word[i]);
    }
}
