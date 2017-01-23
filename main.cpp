/*
FILE : Main.cpp
DESCRIPTION : main entry point of the programme
AUTHOR : Leon Sautour
*/

#include <iostream>
#include <string>


#define SIZE 3

//Prototypes
void organize(std::string array[SIZE]);
int getRank(char letter);

/*
Input: none
Description: Main entry point of the program
Output: none
*/
int main(int argc, char* argv[]) {

  std::cout << "In main function" << std::endl;

  //Our three words
  std::string one = "one";
  std::string two = "two";
  std::string leo = "leo";

  std::string array[SIZE] = {one, two, leo}; //Array that we'll be sorting

  std::cout << "Variables declared" << std::endl;

  organize(array);

  for (int i = 0; i <= SIZE; i++) {
    std::cout << array[i] << std::endl;
  }

}
/*
Input: pointer to our array, index integer
Description: organizes the position of a given word in the array
Output: none
*/
void organize(std::string array[SIZE]) {

  std::cout << "In organize function" << std::endl;

  bool organized = false; //Variable we'll be using for our while loop

  std::string word1; //Variables we'll be using for the words that we'll take out of the array
  std::string word2;

  //variables to store the rank of our different characters
  int rank1;
  int rank2;

  //Temp variables
  std::string temp;

  int wordLength;

  int fixedLoc = 1;
  int loc = fixedLoc;

  while(fixedLoc <= SIZE) {

    loc = fixedLoc;

    while (!organized) {
      word1 = array[loc]; //Take the word at index
      word2 = array[loc - 1]; //Take the word right before the index

      // //Identify the longest word
      // wordLength = word1.size;
      // if (word2.size > wordLength) wordLength = word2.size;

      for (int i = 0; i <= wordLength; i++) {

        if (word1[i] == word2[i]) continue; //If the two letters are equal, go back to the beginning of the loop

        else {
          //Get the ranks of the two different characters
          rank1 = getRank(word1[i]);
          rank2 = getRank(word2[i]);

          if (rank1 < rank2) {
            temp = array[loc-1];
            array[loc-1] = array[loc];
            array[loc] = temp;
            loc--;
          } else {
            organized = true;
          }
        }
      }

    }

    fixedLoc++;

  }

  std::cout << "At end of organize function" << std::endl;

}

/*
INPUT: char letter
DESCRIPTION: Converts a given char to its ascii value
OUTPUT: ascii value (int)
*/
int getRank(char letter) {
  return (int) letter;
}

//Pseudocode :
// Store the size of the array
// Store the position of the second number of the operator into = loc
// Compare array[loc] to array[loc - 1]
// If its inferior, switch
// Do this while loc != 0
