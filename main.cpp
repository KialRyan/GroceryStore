// Kial Leite Ryan
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string>list; 
  int numItems = 0;
  char input;
  string itemInput;
  bool myFlag = false;
  int listNum=1;
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
     if(numItems=0)
      {
      cout<<"No items to buy!";
      }
     else
     {
       myFlag = true;
       cout<<"==ITEMS TO BUY=="<<endl;
       for(int counter=0;counter<numItems;counter++)
       {
       cout<<listNum<<" "<<list[counter]<<endl;
       listNum++;
       }
     }
    }

    else if (input == 'A' || input == 'a')
    {
        cout <<"What is the item?"<< endl;
        cin >> itemInput;
        
            list.push_back(itemInput);
            numItems++;
        
    }
   } while (myFlag== false);  
  return 0;
}
