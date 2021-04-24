
const int MAX_SIZE = 10;

// Initializes the 2D array board and sets ships at random locations.
// Pre:  board defined by struct that contains 5 ships
// Post: game board created with 5 ships in random locations
void InitBoard();

// prints out the player board with player guesses.
// Pre: 2D array board and player guesses.
// Post: 2D array board that is updated with Hits or misses.
void PrintBoard();


// Checks the location on the game board then updates display board with results.
// Pre: valid guess and coordinates on board.
// Post: checks location.  Outputs text with hit or miss and updates game board and player board.
bool CheckLocation();


struct BoardType {
   int values[MAX_SIZE][MAX_SIZE];
   int numCount;
};


int main(){

    BoardType gameBoard;                     // Define board with integers
    BoardType playerBoard;                   // Define board to display guesses

    int xPos, yPos;                         // Coordinates of generated number in array
    int xGuess, yGuess;                     // Coordinates guessed by user

    // iInitBoard();

    // Do loop

        // PrintBoard();

        // prompt player for coordinates

        // CheckLocation(xguess, yguess);

    // while not EXIT.

}

void InitBoard(){
    cout << "Inside InitBoard();"
}

void PrintBoard(){
    cout << "Inside PrintBoard();"
}

void CheckLocation(){
    cout << "Inside CheckLocation();"
}
