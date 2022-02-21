#include "dictionary.h"
#include <vector>
#include <string>
#include <fstream>

// initiate word dictionary from file .wordler.data and store them as a 
// list of upper case letters
dictionary::dictionary(){
    std::ifstream read(".wordler.data");

    if( !read.is_open() ){
        words.push_back("words");
    }
    else{
        std::string word;
        while( getline(read,word) ){
            //convert every word to UPPER CASE
            for(int i=0; i<word.length(); i++){
                word[i] = toupper(word[i]);
            }
            words.push_back(word);
        }
    }
    read.close();
}

// select a random word from our dictionary and return it
std::string dictionary::select_word(){
    return words.at(rand() % words.size());
}
