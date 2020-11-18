#include "tic_tac_toe.h"
#include<limits>

using std::cout; using std::cin;

int main() 
{	
	TicTacToe tic_tac_toe;
	std::string player;
	
	char choice;

	do
	{
		while(player != "X" && player != "x" && player != "O" && player != "o")
		{
			cout<<"Enter X or O: ";
			cin>>player;
		}
		
		tic_tac_toe.start_game(player);

		do
		{
			int position;
			cout<<"Enter position from 1 to 9: ";
			cin>>position;

			while(!cin.good() && (position < 1 || position > 9))
			{
				cin.clear();
				cin.ignore(5, '\n');
				
				cout<<"Enter position from 1 to 9: ";
				cin>>position;
			}

			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();

		} while (tic_tac_toe.game_over() == false);

		player = "";
		cout<<"Game over the winner is: "<<tic_tac_toe.get_winner()<<"\n";

		cout<<"Continue enter y or Y: ";
		cin>>choice;
	
	}while(choice == 'Y' || choice == 'y');

	return 0;
}