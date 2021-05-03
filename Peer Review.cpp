/*********************************************************
BATTLESHIP PSEUDOCODE

Yevgeniya Crespo
David Levy
Robert Warden
George Frazier

*********************************************************/
#include <iostream>
using namespace std;

const int ROW = 8;
const int COL = 8;

enum TileType {OCEAN, SHIP};
enum TileStatus {HIDDEN, HIT, MISS};
enum Ships {DESTROYER = 1, SUBMARINE = 2, CRUISER = 3, BATTLESHIP = 4, CARRIER = 5};

struct Tile
{
    TileType type;
    TileStatus status;
};

// Generates an empty 8x8 game board
// Pre: inBoard declared
// Post: inBoard filled with hidden ocean tiles
void InitBoard (/*OUT*/ Tile inBoard[ROW][COL]);

// Places 5 ships randomly inside of inBoard
// Pre: inBoard contains an empty array of hidden ocean tiles
// Post: inBoard contains 5 ships randomly placed throughout
void SetShips (/*OUT*/ Tile inBoard[ROW][COL]);

// Prints the game board to the screen
// Pre: inBoard declared and contains info
// Post: inBoard printed to the screen
void PrintBoard (/*IN*/ Tile inBoard[ROW][COL]);

// Attacks a specific tile in the game board
// Pre: inBoard declared and contains info
//	x and y point to a location on game board
// Post: If the target specified is a ship, change tile status to HIT
//	 Otherwise, change tile status to MISS
void AttackTile (/*INOUT*/ Tile inBoard[ROW][COL], /*IN*/ int x, /*IN*/ int y);

// Checks if there are any hidden ship pieces left on the board
// Pre: inBoard contains a valid generated game board
// Post: returns true if no hidden ship pieces remain
//       otherwise, return false
bool VictoryAchieved (/*IN*/ Tile inBoard[ROW][COL]);

int main()
{
	// Declare a gameboard, using an 2D array of Tiles
	Tile gameBoard[ROW][COL];

	// Initialize the gameboard

	// Place the ships

	// Do
		// Prompt the user to guess a position on the board

		// Attack that position
			// If a ship is attacked, change tile to hit
			// Else, change tile to miss

		// Print out the board
	// Loop while there are still ship pieces on the board


	// Once there are no pieces remaining, print a victory message

	// End
}

void InitBoard (/*OUT*/ Tile inBoard[ROW][COL]){

    // Loop from row = 0....row = 9
    for(int row = 0; row < ROW; row++)
    {
        // Loop from col = 0....col = 9
        for(int col = 0; col < COL; col++)
        {
            // Fill each location with the character '~'
            inBoard[row][col].type = OCEAN;
            inBoard[row][col].status=HIDDEN;
        }
    }

}

void PrintBoard (/*IN*/ Tile inBoard[ROW][COL]){
    // Loop through each row
    for (int row = 0; row < ROW; row++){

        // Loop through each column
        for (int col = 0; col < COL; col++){
            cout << inBoard[row][col].type << " ";     // Print out each element with spacing
            cout<<inBoard[row][col].status<<" ";
        }
        cout << endl;   // At the end of each row, print a new line
    }
}

