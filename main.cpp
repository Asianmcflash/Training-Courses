#include <iostream>
#include <string>
using namespace std;
int main() {
  cout << "We offer these courses: " << endl;
  string choice;
  string pick;
  string chose;
  do
  {
    choice = "";
    cout << "A: Science" << endl;
    cout << "A: Math" << endl;
    cout << "A: History" << endl;
    cout << "A: English" << endl;
    cout << "E: Finish" << endl;
    cout << "Pick the letter on which course you want to join: ";
    cin >> choice;
    if(choice == "A" || choice == "a")
    {
      pick += "Science ";
      cout << "You have picked: Science" << endl;
    }
    else if(choice == "B" || choice == "b")
    {
      pick += "Math ";
      cout << "You have picked: Math" << endl;
    }
    else if(choice == "C" || choice == "c")
    {
      pick += "History ";
      cout << "You have picked: History" << endl;
    }
    else if(choice == "D" || choice == "d")
    {
      pick += "English ";
      cout << "You have picked: English" << endl;
    }
    else if(choice == "E" || choice == "e")
    {
      break;
    }
    else
    {
      cout << "Must be a letter within the above menu" << endl;
      continue;
    }

    cout << "Would you like to pick another?(E or e to finish)" << endl;
    cin >> chose;
    if(chose != "e" || chose != "E")
    {
      break;
    }
  }while(choice != "e" || choice != "E");

  cout << "You have chosen: " << pick << endl;
  cout << "Welcome!" << endl;
}