#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string name;

int main(){
  cout << "Please enter your name, or leave blank for one of two standard greetings. ->";
  cin >> name;
  if(name == ""){
    int rndNum = rand() % 100;
    if(rndNum <= 49){
      cout << "Hello, World!";
    } else {
      cout << "Hello, User!";
    }
  } else {
    cout << "Hello, " << name;
  }
  return 0;
}
