/*
FILE : Main.cpp
DESCRIPTION : main entry point of the programme
AUTHOR : Leon Sautour
*/

#include <iostream>

//Prototypes
void organize(char* array[3], int index);
int getRank(char letter);

/*
Input: none
Description: Main entry point of the program
Output: none
*/
int main() {
  //Our three words
  char one[3] = {'o', 'n', 'e'};
  char two[3] = {'t', 'w', 'o'};
  char leo[3] = {'l', 'e', 'o'};

  char* array[3] = {one, two, leo}; //Array that we'll be sorting

}
/*
Input: pointer to our array, index integer
Description: organizes the position of a given word in the array
Output: none
*/
void organize(char* array[3], int index) {

  bool organized = false; //Variable we'll be using for our while loop

  char* word1; //Variables we'll be using for the words that we'll take out of the array
  char* word2;

  int wordLength;

  while (!organized) {
    word1 = array[index]; //Take the word at index
    word2 = array[index - 1]; //Take the word right before the index

    //Identify the longest word
    wordLength = word1.size();
    if (word2.size() > wordLength) wordLength = word2.size();

    for (int i = 0; i <= wordLength; i++) {

      if (word1[i] == word2[i]) continue; //If the two letters are equal, go back to the beginning of the loop

      else {

      }
    }

  }

}

int getRank(char letter) {
  //NOTE: THERE HAS TO BE A BETTER WAY... I'm just too tired XD
  char alphabet[24] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
}

//Pseudocode :
// Store the size of the array
// Store the position of the second number of the operator into = loc
// Compare array[loc] to array[loc - 1]
// If its inferior, switch
// Do this while loc != 0
