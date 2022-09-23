#include <iostream>
#include <cstring>
using namespace std;

int main() {

  int Length;
  int TempLength;
  int Remainder;
  int Division;
  int two = 2;
  char checker1;
  char checker2;
  char Temp[100];
  char Temp2[100];
  char Input[100];
  char Reverse[100];
  cin.getline(Input, 100/*, '\n'*/);
  Length = strlen(Input);


  for (int i = 0; i < Length; i++) {
    Temp[i] = '\0';
  }

  int t = 0;
  for (int i = 0; i < Length; i++) {
    if (isalpha(Input[i])) {
      Temp[t] = Input[i];
      t++;
      //cout << Input << endl;
      //cout << Temp << endl;
    }
    else if (Input[i] == ' ') {
      //cout << "there would be a space here" << endl;
    }
    else {
      //cout << "else has been hit" << endl;  
    }
  }
  TempLength = strlen(Temp);
  cout << TempLength;
  Remainder = TempLength % two;
  if (Remainder != 0); {
    TempLength = TempLength - 1;
    cout << TempLength;
  }
  else {
    //Division = TempLength / two;

    Temp2 = Temp;
    for (int r = Length; r >= 0; r--) {
      for (int i = 0; i < Length; i++) {
	checker1 = getchar(Temp[r]);
	checker2 = getchar(Temp2[i]);
	if (checker1 == checker2) {
	  // do nothing -> Keep going
	}
	else {
	  cout << "error" << endl;
	}
      }
    }
  }
}
