# Wordler

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

The game will randomly-select a 5-letter word and you have unlimited guesses to get the word right. Each time you guess, if you have a letter that matches the same location as it is in the secret word, it will be revealed to you. However, any letter that does *not* match the secret word's letter at the same location will be displayed as `_`. Good luck!


## Development

To use the project development environment, build the docker image using:

```
docker build -t cpp-container .
```

To run static analysis in the dev container:

```
docker run -it cpp-container
```

To bind file changes between the host and container:

```
docker run -v "$(pwd)":/usr/src -it cpp-container
```