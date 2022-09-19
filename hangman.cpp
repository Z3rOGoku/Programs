#include<bits/stdc++.h>
#include<conio.h>
#include<unistd.h>
#include<windows.h>

using namespace std;

void changeColor(int desiredColor)
{ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
}

string PickRandom()
{
    srand(time(NULL));
    int random = rand() % 30 +1;

    string RandomWord[200]={"Battery","treasure","krishna","rockets","superman","forests","Bedroom","Between","Chamber","Chicken",
    "Diamond","Nervous","legends","Passage","samsung","russian","america","oneplus","romance","dolphin","giraffe","jackass","sunrise",
    "protons","austria","vietnam","denmark","gangtok","ukraine","amazing","puzzled","disgust","comfort","catgirl","vampire", "kaylana","samsung"};

    string Picked(RandomWord[random]);
    
    cout<<Picked<<" ";
    return Picked;

}
void welcomeScreen()
{
    cout.width(60);
    changeColor(10);

  std::cout << "=====================\n";
  cout.width(60);
  std::cout << "Hangman By Zero\n";
  cout.width(60);
  std::cout << "=====================\n";
  cout.width(60);
  std::cout << "Instructions: Save your friend from being hanged by guessing the letters in the codeword 🙈🙈🙈.\n";
}

void end_game(string answer, string codeword)
{
  if(answer==codeword)
  {
    cout<<"Hooray! You saved the person from being hanged and earned a medal of honor!\n";
    cout<<"Congratulations!\n";
  }
  else
  {
    cout<<"On no! The man is hanged!\n";
  }
}

int main()
{
  int wrong = 0;
  vector<char> incorrect;
  bool guess = false;
  char letter;
    
  welcomeScreen();

  string word =PickRandom();
  int n =word.length();
  string answer="_______";

  
  changeColor(9);

 
  
  
  


  while(answer!=word && wrong < 7)
  {
    cout<<"\n\nPlease enter your guess: ";
    cin>>letter;

    for(int i = 0; i<word.length(); i++)
    {
      if(letter==word[i])
      {
        answer[i] = letter;
        cout<<answer;
        guess = true;
      }
    }
    if(guess)
    {
      cout<<"\nCorrect!\n";
    }
    else
    {
      cout<<"\nIncorrect! Try Again\n";
      incorrect.push_back(letter);
      wrong++;
    }
    guess = false;
  }

  end_game(answer, word);
  return 0;
}