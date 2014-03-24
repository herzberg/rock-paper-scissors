//J Herzberg
//Rock, Paper, Scissors... and shoot.
//Made game while first learning c++ for fun.

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;
int main()
{
	string player1, player2, move1, move2, exit, winner, tie, retest, replay;
	int total1 = 0;
    int total2 = 0;
    string comp[3] = {"r", "p", "s"};
    cout << "Are you ready to ROCK...Paper...Scissors\n";
    replay = "y";
    tie = "Nobody... Boring it is a Tie";
    retest = "y";
    cout <<"\nPlease enter player name:\n";
    cin>> player1;
   	getchar();
   	cout <<"Welcome: " + player1 + "\n";
   	player2 = "computer";
	while (replay == "y")
    {
       	cout <<player1 + " please select rock 'r' paper 'p' or scissors 's':\n";
       	cin>> move1;
       	getchar();
       	//make random computer thing
       	move2 = comp[rand() % 2];
       	retest = "y";
        while (retest == "y")
        {
            retest = "no";
        	// cout << move1 + move2;
        	// determin who won
        	if(move1 == "r")
        	{
                     if(move2 == "s")
                     {
                          winner = player1;
                     }
                     else if(move2 == "p")
                     {
                          winner = player2;  
                     }
                     else if(move2 == "r")
                     {
                          winner = tie;
                     }
                     else
                     {
                         cout<<"Player 2, please chose only valid moves:(r,p, or s)" <<endl;
                         cout <<"please select rock 'r' paper 'p' or scissors 's': " <<endl;
        	             cin>> move2;
        	             getchar();
        	             retest = "y";
                     }
            }
            else if(move1 == "s")
        	{
                     if(move2 == "s")
                     {
                          winner = tie;
                     }
                     else if(move2 == "p")
                     {
                          winner = player1;  
                     }
                     else if(move2 == "r")
                     {
                          winner = player2;
                     }
                     else
                     {
                         cout<<"Player 2, please chose only valid moves:(r,p, or s)\n";
                         cout <<"please select rock 'r' paper 'p' or scissors 's':\n";
        	             cin>> move2;
        	             getchar();
        	             retest = "y";
                     }
             }
             else if(move1 == "p")
        	 {
                     if(move2 == "s")
                     {
                          winner = player2;
                     }
                     else if(move2 == "p")
                     {
                          winner = tie;  
                     }
                     else if(move2 == "r")
                     {
                          winner = player1;
                     }
                     else
                     {
                         cout<<"Player 2, please chose only valid moves:(r,p, or s)\n";
                         cout <<"please select rock 'r' paper 'p' or scissors 's':\n";
        	             cin>> move2;
        	             getchar();
        	             retest = "y";
                     }
            }
            else 
            {
               cout<<"Player 1, please chose only valid moves:(r,p, or s)\n";
               cout <<"please select rock 'r' paper 'p' or scissors 's':\n";
               cin>> move1;
               getchar();
               retest = "y";
            }
        }
        cout<< player1 + " chose " + move1 + " and " + player2 + " chose " + move2 << endl;
    	cout<< "winner is " + winner;
    	if (winner == player1)
    	{
              total1++;
         }
         else if(winner == player2)
         {
              total2++;
         }
        cout << "\n" + player1 +"'s total is " << total1 << endl;
        cout << player2 +"'s total is " << total2 << endl;
  	    cout<< "__________\nDo you want to play again? (y for yes)\n";
        cin>> replay;
        getchar();
        }
    return 0;
}
