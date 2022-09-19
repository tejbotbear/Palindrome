#include <iostream>
#include <cstring>
using namespace std;

int main() {

  int Length;
  
  char Input[100];
  cin.getline(Input, 100, '\n');
  Length = strlen(Input);
  //cout << Input << endl;

  for (int i = 0; i < Length; i++) {

    if (isalpha(Input[i])) {

	cout << "hello" << endl;
      
    }
  }
}
