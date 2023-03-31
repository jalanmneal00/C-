//*Program by Jalan Nea;*//
#include <iostream>
#include <ctime>
using namespace std;

class NoOne
{
private:
    // data members
    string name;
    int totalScore;

public:
    // constructor
    NoOne(string name)
    {
        // initialize the name to the given parameter
        this->name = name;
        // initialize the total score to 0
        this->totalScore = 0;
        srand(time(NULL));
    }

    // method to play a round
    bool playRound()
    {
        // variable to store the player's choice of action
        char choice;
        // variable to store the round's score initialized to 0
        int roundScore = 0;
        cout << name << " playing with a score of " << totalScore << endl;
        while (true)
        {
            // input whether the player wants to roll
            cout << name << " roll (Y/N)? >";
            cin >> choice;
            // if the player chooses to play the round
            if (choice == 'Y' || choice == 'y')
            {
                // roll the dice
                int diceValue = rand() % 6 + 1;
                // display the current dice roll value
                cout << "You rolled a " << diceValue << endl;
                // end the round if the player rolled a one
                if (diceValue == 1)
                {
                    // display an appropriate message
                    cout << "Loss of your turn" << endl;
                    break;
                }
                // else add it to the round's score
                else
                {
                    roundScore += diceValue;
                    // display the current round's score
                    cout << "round total is " << roundScore << endl;
                }
            }
            // else the user chooses to not play the round anymore
            else if (choice == 'N' || choice == 'n')
            {
                // sum up the round's score to the total score
                totalScore += roundScore;
                break;
            }
            // else an invalid option is entered
            else
                cout << "Invalid choice!" << endl;
        }

        // display the player's total score
        cout << name << " has a score of " << totalScore << endl;

        // return true if the current player has won the game
        if (totalScore > 99)
        {
            cout << name << " wins the game!" << endl;
            return true;
        }

        // else return false
        return false;
    }
};

// main function
int main()
{
    // required variables
    string name1, name2;
    bool finished = false;

    // inpt the names of first & second player
    cout << "Enter the name of the first player >";
    cin >> name1;
    cout << "Enter the name of the second player >";
    cin >> name2;

    // create 2 objects of NoOne
    NoOne player1(name1), player2(name2);

    // start playing the game
    do
    {
        finished = player1.playRound();
        if (!finished)
            finished = player2.playRound();
    } while (!finished);

    return 0;
}