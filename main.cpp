/*
FILE : Main.cpp
DESCRIPTION : main entry point of the programme
AUTHOR : Leon Sautour
*/

#include <iostream>


/*
Input: none
Description: Main entry point of the program
Output: none
*/
int main() {
  int array[10] = {2, 1, 5, 5, 7, 8, 4, 6, 10, 9}; //Array that we'll be sorting

  //TODO: make the size variable dynamic
  int size = 10; //Stores the size of the array for future reference

  int loc = 1; //Stores the place of the number were currently looking at
  int fixedLoc = loc;
  int temp; //Used for temp stuff

  while (fixedLoc <= size) {
    while (array[loc] < array[loc-1]) {
        temp = array[loc-1];
        array[loc-1] = array[loc];
        array[loc] = temp;
        loc--;
    }
    fixedLoc++;
    loc = fixedLoc;
  }

  //Print out the sorted array
  for(int i = 0; i <= size; i++) {
    std::cout << array[i] << std::endl;
  }

}

//Pseudocode :
// Store the size of the array
// Store the position of the second number of the operator into = loc
// Compare array[loc] to array[loc - 1]
// If its inferior, switch
// Do this while loc != 0
