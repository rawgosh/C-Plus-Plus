#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>

using namespace std;

string get_word();
void print_board(int);
void print_blanks(string, string);
int generate_random_number();

bool flag = false;

int main()
{
   int user_lives = 7;
   cout << endl << endl << endl;
   string word = get_word();
   string letters_guessed = "";
   string guess;

   while(user_lives > 0)
   {
       flag = true;
       print_board(user_lives);
       cout << endl << endl;
       print_blanks(word, letters_guessed);

       if(flag == true)
       {
           break;
       }

       cout << "\n \n Letters Guessed: " << letters_guessed << endl;
       cout << "\n\nEnter a letter: ";
       cin >> guess;
       letters_guessed += guess;

       if(word.find(guess) != -1)
       {
           system("CLS");
           continue;
       }
       else
       {
           system("CLS");
           user_lives--;
       }

   }
   if ( user_lives == 0)
   {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|          /|\\" << endl;
            cout << "\t\t\t|           |" << endl;
            cout << "\t\t\t|          / \\" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
       cout << "\n\n\n YOU LOSE" << endl << endl;
       cout << "The word was: "<< word;
   }
   else if (user_lives > 0)
   {
       cout << "\n\n\n YOU WIN!" << endl << endl;
       cout << "The word was: "<< word;
   }
   
}

string get_word()
{
    //change wordlist size here.
    const int WORDLIST_SIZE = 10;
    string temp_word;
    string wordlist[WORDLIST_SIZE]={""};
    int index = 0;
    ifstream input_file("wordlist.txt");

    if (!input_file)
    {
        cout << "Error: Wordlist not found....\n\n";
    }

    input_file.ignore(255,'\n');
    input_file >> temp_word;
    //Pre-read

    while(!input_file.eof())
    {
        wordlist[index] = temp_word;
        index++;
        //post-read
        input_file >> temp_word;
    }
    return wordlist[generate_random_number()];
}

void print_board(int lives)
{
    switch(lives)
    {
        case 0:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|          /|\\" << endl;
            cout << "\t\t\t|           |" << endl;
            cout << "\t\t\t|          / \\" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 1:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|          /|\\" << endl;
            cout << "\t\t\t|           |" << endl;
            cout << "\t\t\t|            \\" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 2:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|          /|\\" << endl;
            cout << "\t\t\t|           |" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 3:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|          /|\\" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 4:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|           |\\" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 5:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|           |" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 6:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|           0" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
        case 7:
        {
            cout << "\t\t\t|-----------|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|" << endl;
            cout << "\t\t\t|_";
            break;
        }
    }

}

void print_blanks(string chosen_word, string letters_guessed)
{
    for(int i = 0; i < chosen_word.size(); i++)
    {
        if(letters_guessed.find(chosen_word.at(i))!=-1)
        {
            cout << chosen_word.at(i) << " ";
        }
        else
        {
            cout << "_ ";
            flag = false;
        }
    }
}

int generate_random_number()
{
    srand(time(NULL));
    int random_number = rand() % 10 + 1;
    return random_number;
}
