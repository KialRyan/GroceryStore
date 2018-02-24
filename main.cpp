// Kial Leite Ryan
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string itemInput;
  bool myFlag = false;
  
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>> input;

    if (input == 'Q' || input == 'q')
    {
       myFlag = true;
    }

    else if (input == 'A' || input == 'a')
    {
        cout <<"What is the item?"<< endl;
        cin >> itemInput;

        if (numItems >=5 || numItems < 0)
            cout << "You'll need a bigger list" << endl;

        else if (numItems < 5)
        {
            list[numItems] = itemInput;
            numItems++;
        }
      }
   } while (myFlag== false);  
  return 0;
}
