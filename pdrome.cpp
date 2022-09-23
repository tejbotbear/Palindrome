/*
Tej Hiremath
This program checks a users input to see if it is a palindrome when only letters are considered.
9/23/2022
*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {

  // Initialize all necessary Variables
  int Length;
  int PalindromeChecker;
  int TempLength;
  char checker1;
  char checker2;
  char Temp[80];
  char Input[80];
  // Get input and set length
  cin.getline(Input, 80/*, '\n'*/);
  Length = strlen(Input);

  // Clear memory for the length of the temporary array
  for (int i = 0; i < Length; i++) {
    Temp[i] = '\0';
  }

  int t = 0;
  // Get length of filtered text
  for (int i = 0; i < Length; i++) {
    if (isalpha(Input[i])) {
      Temp[t] = Input[i];
      t++;
    }
    else {
      //keep going  
    }
  }
  // Check to see if it is a palindrome
  TempLength = strlen(Temp);
  for (int r = TempLength - 1, i = 0; r >= 0; r--, i++) {
    checker1 = Temp[r];
    checker2 = Temp[i];
    if (checker1 != checker2) {
      r = 0; // Confirmed not a palindrome, stop checking.
      PalindromeChecker = 0;
    }
    else {
      PalindromeChecker = 1;
    }
  }
  if (PalindromeChecker == 1) {
    cout << "Palindrome." << endl;
  }
  else {
   cout << "Not a palindrome." << endl;
  }
}
