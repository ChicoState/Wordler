# Wordler

[![C++ CI for Wordler](https://github.com/bserrato7900/Wordler/actions/workflows/main.yml/badge.svg)](https://github.com/bserrato7900/Wordler/actions/workflows/main.yml)

This is a command line word guessing game.

## Getting Started

To build the project, use the following command:

```
make
```

Then play the game:

```
./wordler
```
How to quit:
```
quit
```

Typing the word 'quit' will tell the game that you want to exit the game and will stop the game.

The game will randomly-select a 5-letter word and you have unlimited guesses to get the word right. Each time you guess, if you have a letter that matches the same location as it is in the secret word, it will be revealed to you. However, any letter that does *not* match the secret word's letter at the same location will be displayed as `_`. Good luck!
