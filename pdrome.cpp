#include <iostream>
#include <cstring>
using namespace std;

int main() {

  int Length;
  char Temp[100];
  char Input[100];
  cin.getline(Input, 100/*, '\n'*/);
  Length = strlen(Input);


  for (int i = 0; i < Length; i++) {
    Temp[i] = '\0';
  }

  
  //  /*
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
  cout << Temp << endl;
  }

