/*********************************************************
 *
 * Tic tac toe
 *
 * Version 1.0
 *
 * Created by Dmytro Ostapenko 2019.06.11
 *
 * Created in 2 days
 *
 * The final project
 *
 *********************************************************/

// Connecting libraries and setting namespace
// WARNING: DO NOT ENTER STRING VALUES TO AVOID LAGS

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Declare prototype of functions Game session (gamesession) and Check choice (intro)

void gamesession (int type);
void intro (void);

int main (void) {
    // Show main menu

    cout << "" << endl;
    cout << "                          ┌───┬───┬───┐" << endl;
    cout << "                          │ X │ O │ O │" << endl;
    cout << "                          ├───┼───┼───┤" << endl;
    cout << "                          │ O │ X │   │" << endl;
    cout << "                          ├───┼───┼───┤" << endl;
    cout << "                          │   │   │ X │" << endl;
    cout << "                          └───┴───┴───┘" << endl;
    cout << "" << endl;
    cout << "                         ┏━━━━━━━━━━━━━┓" << endl;
    cout << "                         ┃ TIC TAC TOE ┃" << endl;
    cout << "                         ┗━━━━━━━━━━━━━┛" << endl;
    cout << "" << endl;
    cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
    cout << "" << endl;
    cout << "   please select function" << endl;
    cout << "" << endl;
    cout << "       [1] Play with player" << endl;
    cout << "       [2] Play with bot" << endl;
    cout << "       [3] Instruction" << endl;
    cout << "       [4] Exit" << endl;
    cout << "" << endl;
    cout << "   Enter your choice: ";
    intro();
}

void gamesession (int type) {
    if (type == 1) {
        // Play with player

        // Game area

        int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
        cout << "Chose the player: 1 - X, 2 - O, X - default: ";
        int ch;
        cin >> ch;
        int player;
        if (ch == 2) {
            player = 2;
        }

        else {
            player = 1;
        }
        cout << "enter 10 to exit" << endl;

        // Game loop
        // If player exit the game or error occurs this loop break

        for( ; ; ) {
            int first = 0;
            int second = 0;

            // Check: if Player X goes variable 'player' equals 1, if Player O goes variable 'player' equals 2, else show error

            if (player == 1) {
                // Player X

                cout << "Player X" << endl;
            }

            else if(player == 2) {
                // Player O

                cout << "Player O" << endl;
            }

            else {
                // Internal error: invalid player id

                cout << "" << endl;
                cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                cout << "" << endl;
                cout << "Game error: Invalid player id";
                cout << "" << endl;
                cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                cout << "" << endl;

                break;
            }

            cout << "X position: ";
            cin >> first;

            // Exit: if positions equals 10 close the game

            if (first == 10) {
                // Exit

                break;
            }

            else {
                // Do nothing
            }

            cout << "Y position: ";
            cin >> second;
            int fa = first - 1;
            int sa = second - 1;

            // If positions entered corectly contionue game, else show error and restart loop

            if (fa >= 0 && fa < 3 && sa >= 0 && sa < 3) {
                if (arr[sa][fa] == 1 || arr[sa][fa] == 2) {
                    cout << "Please enter correct positions" << endl;
                }

                else {
                    // Check players IDs: if variable 'player' equals 1 Player X goes, if variable 'player' equals 2 Player O, else show error

                    if (player == 1) {
                        arr[sa][fa] = 1;
                    }

                    else if(player == 2) {
                        arr[sa][fa] = 2;
                    }

                    else {
                        // Internal error: invalid player id

                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;
                        cout << "Game error: Invalid player id";
                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;

                        break;
                    }

                    // Draw a table
                    // If Player X goes variable arr[position x][position y] equals 1 and printing 'X', if Player O goes variable
                    // arr[position x][position y] equals 2 and printing 'O', else printing ' '

                    cout << "┌───┬───┬───┐" << endl;
                    cout << "│";

                    if (arr[0][0] == 1) {
                        cout << " X ";
                    }

                    else if (arr[0][0] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[0][1] == 1) {
                        cout << " X ";
                    }

                    else if (arr[0][1] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[0][2] == 1) {
                        cout << " X ";
                    }

                    else if (arr[0][2] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│" << endl;
                    cout << "├───┼───┼───┤" << endl;
                    cout << "│";

                    if (arr[1][0] == 1) {
                        cout << " X ";
                    }

                    else if (arr[1][0] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[1][1] == 1) {
                        cout << " X ";
                    }

                    else if (arr[1][1] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[1][2] == 1) {
                        cout << " X ";
                    }

                    else if (arr[1][2] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│" << endl;
                    cout << "├───┼───┼───┤" << endl;
                    cout << "│";

                    if (arr[2][0] == 1) {
                        cout << " X ";
                    }

                    else if (arr[2][0] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[2][1] == 1) {
                        cout << " X ";
                    }

                    else if (arr[2][1] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[2][2] == 1) {
                        cout << " X ";
                    }

                    else if (arr[2][2] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│" << endl;
                    cout << "└───┴───┴───┘" << endl;

                    if (player == 1) {
                        player = 2;
                    }

                    else if(player == 2) {
                        player = 1;
                    }

                    else {
                        // Internal error: invalid player id

                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;
                        cout << "Game error: Invalid player id";
                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;

                        break;
                    }

                    // Check game area: if player win show message

                    /*
                     * ┌───┬───┬───┐      ┌───┬───┬───┐      ┌───┬───┬───┐
                     * │ X │   │   │      │ O │ O │ O │      │   │ X │   │
                     * ├───┼───┼───┤      ├───┼───┼───┤      ├───┼───┼───┤
                     * │   │ X │   │  or  │   │   │   │  or  │   │ X │   │  or more
                     * ├───┼───┼───┤      ├───┼───┼───┤      ├───┼───┼───┤
                     * │   │   │ X │      │   │   │   │      │   │ X │   │
                     * └───┴───┴───┘      └───┴───┴───┘      └───┴───┴───┘
                     */

                    /*
                     * Win positions:
                     *
                     * 1 1 and 1 2 and 1 3;
                     * 2 1 and 2 2 and 2 3;
                     * 3 1 and 3 2 and 3 3;
                     * 1 1 and 2 1 and 3 1;
                     * 1 2 and 2 2 and 3 2;
                     * 1 3 and 2 3 and 3 3;
                     * 1 1 and 2 2 and 3 3;
                     * 1 3 and 3 3 and 3 1;
                     */

                    if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player X win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃ Player O win ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    // If no player won game is over

                    else if (arr[0][0] != 0 && arr[0][1] != 0 && arr[0][2] != 0 && arr[1][0] != 0 && arr[1][1] != 0 && arr[1][2] != 0 && arr[2][0] != 0 && arr[2][1] != 0 && arr[2][2] != 0) {
                        cout << "┏━━━━━━━━━━━┓" << endl;
                        cout << "┃ Game over ┃" << endl;
                        cout << "┗━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);
                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else {
                        // Do nothing
                    }
                }
            }

            else if (fa == 9 || sa == 9) {
                // Close game

                break;
            }

            else {
                cout << "Please enter correct positions" << endl;
            }
        }
    }

    else if (type == 2) {
        // Play with bot

        int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
        cout << "Select difficulty: 1 - Easy, 2 - Medium, 3 - Hard, 4 Very hard (Medium - default): ";
        int dif;
        cin >> dif;
        cout << "Chose the player: 1 - X (Player), 2 - O (Bot), X - default: ";
        int ch;
        cin >> ch;

        int player;
        if (ch == 2) {
            player = 2;
        }

        else {
            player = 1;
        }
        cout << "enter 10 to exit" << endl;

        // Game loop
        // If player exit the game or error occurs this loop break

        for( ; ; ) {

            int first = 0;
            int second = 0;

            // Check: if Player X goes variable 'player' equals 1, if Player O goes variable 'player' equals 2, else show error

            if (player == 1) {
                // Player X

                cout << "Player goes" << endl;
            }

            else if(player == 2) {
                // Player O

                cout << "Bot goes" << endl;
            }

            else {
                // Internal error: invalid player id

                cout << "" << endl;
                cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                cout << "" << endl;
                cout << "Game error: Invalid player id";
                cout << "" << endl;
                cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                cout << "" << endl;

                break;
            }

            int fa;
            int sa;
            int sr;
            int sr2;

            // Player move

            if (player == 1) {
                cout << "X position: ";
                cin >> first;

                // Exit: if positions equals 10 close the game

                if (first == 10) {
                    // Exit

                    break;
                }

                else {
                    // Do nothing
                }

                cout << "Y position: ";
                cin >> second;
                fa = first - 1;
                sa = second - 1;
            }

            // Bot move

            else if(player == 2) {
                if (dif == 2 || dif == 3 || dif == 4) {
                    //Medium, hard , very hard difficulty

                    if (arr[1][1] == 0) {
                        sa = 1;
                        fa = 1;
                    }

                    else if (arr[1][1] == 1) {
                        for ( ; ; ) {
                            // Hard difficulty

                            if (dif == 3 || dif == 4) {
                                if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][0] == 0 && arr[2][0] == 2) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 2 && arr[2][0] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 0) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 2 && arr[1][1] == 0 && arr[2][1] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 0 && arr[1][1] == 2 && arr[2][1] == 2) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][0] == 0 && arr[2][0] == 2) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 2 && arr[2][0] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 2 && arr[1][2] == 0 && arr[2][2] == 2) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 0 && arr[1][2] == 2 && arr[2][2] == 2) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[0][1] == 0 && arr[0][2] == 2) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[0][1] == 2 && arr[0][2] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 0) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[1][0] == 2 && arr[1][1] == 0 && arr[1][2] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[1][0] == 0 && arr[1][1] == 2 && arr[1][2] == 2) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[2][1] == 0 && arr[2][2] == 2) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[2][1] == 2 && arr[2][2] == 2) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][1] == 0 && arr[2][2] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][1] == 2 && arr[2][2] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[1][1] == 2 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[1][1] == 0 && arr[0][2] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[1][1] == 2 && arr[0][2] == 2) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }
                            }

                            if (dif == 4) {
                                // Very hard

                                if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][0] == 0 && arr[2][0] == 1) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 1 && arr[2][0] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 0) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 1 && arr[1][1] == 0 && arr[2][1] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 0 && arr[1][1] == 1 && arr[2][1] == 1) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][0] == 0 && arr[2][0] == 1) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 1 && arr[2][0] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 1 && arr[1][2] == 0 && arr[2][2] == 1) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 0 && arr[1][2] == 1 && arr[2][2] == 1) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[0][1] == 0 && arr[0][2] == 1) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[0][1] == 1 && arr[0][2] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 0) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[1][0] == 1 && arr[1][1] == 0 && arr[1][2] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[1][0] == 0 && arr[1][1] == 1 && arr[1][2] == 1) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[2][1] == 0 && arr[2][2] == 1) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[2][1] == 1 && arr[2][2] == 1) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][1] == 0 && arr[2][2] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][1] == 1 && arr[2][2] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[1][1] == 1 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[1][1] == 0 && arr[0][2] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[1][1] == 1 && arr[0][2] == 1) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }
                            }

                            srand(time(NULL));
                            sr = rand() % 7;

                            if (sr == 0) {
                                if (arr[0][0] == 0) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 1) {
                                if (arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 2) {
                                if (arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 3) {
                                if (arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 4) {
                                if (arr[1][0] == 0) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 5) {
                                if (arr[0][1] == 0) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 6) {
                                if (arr[2][1] == 0) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 7) {
                                if (arr[1][2] == 0) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                else {

                                }
                            }

                            else {

                            }
                        }
                    }

                    else if (arr[1][1] == 2) {
                        for ( ; ; ) {
                            // Hard difficulty

                            if (dif == 3 || dif == 4) {
                                if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][0] == 0 && arr[2][0] == 2) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 2 && arr[2][0] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 0) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 2 && arr[1][1] == 0 && arr[2][1] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 0 && arr[1][1] == 2 && arr[2][1] == 2) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][0] == 0 && arr[2][0] == 2) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 2 && arr[2][0] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 2 && arr[1][2] == 0 && arr[2][2] == 2) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 0 && arr[1][2] == 2 && arr[2][2] == 2) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[0][1] == 0 && arr[0][2] == 2) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[0][1] == 2 && arr[0][2] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 0) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[1][0] == 2 && arr[1][1] == 0 && arr[1][2] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[1][0] == 0 && arr[1][1] == 2 && arr[1][2] == 2) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[2][1] == 0 && arr[2][2] == 2) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[2][1] == 2 && arr[2][2] == 2) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 2 && arr[1][1] == 0 && arr[2][2] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][1] == 2 && arr[2][2] == 2) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[1][1] == 2 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 2 && arr[1][1] == 0 && arr[0][2] == 2) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[1][1] == 2 && arr[0][2] == 2) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }
                            }

                            if (dif == 4) {
                                // Very hard

                                if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][0] == 0 && arr[2][0] == 1) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 1 && arr[2][0] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 0) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 1 && arr[1][1] == 0 && arr[2][1] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][1] == 0 && arr[1][1] == 1 && arr[2][1] == 1) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][0] == 0 && arr[2][0] == 1) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][0] == 1 && arr[2][0] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 1 && arr[1][2] == 0 && arr[2][2] == 1) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][2] == 0 && arr[1][2] == 1 && arr[2][2] == 1) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[0][1] == 0 && arr[0][2] == 1) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[0][1] == 1 && arr[0][2] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 0) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                if (arr[1][0] == 1 && arr[1][1] == 0 && arr[1][2] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[1][0] == 0 && arr[1][1] == 1 && arr[1][2] == 1) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[2][1] == 0 && arr[2][2] == 1) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[2][1] == 1 && arr[2][2] == 1) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                if (arr[0][0] == 1 && arr[1][1] == 0 && arr[2][2] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[0][0] == 0 && arr[1][1] == 1 && arr[2][2] == 1) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[1][1] == 1 && arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                    break;
                                }

                                if (arr[2][0] == 1 && arr[1][1] == 0 && arr[0][2] == 1) {
                                    sa = 1;
                                    fa = 1;

                                    break;
                                }

                                if (arr[2][0] == 0 && arr[1][1] == 1 && arr[0][2] == 1) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }
                            }

                            srand(time(NULL));
                            sr = rand() % 7;

                            if (sr == 0) {
                                if (arr[0][0] == 0) {
                                    sa = 0;
                                    fa = 0;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 1) {
                                if (arr[0][2] == 0) {
                                    sa = 0;
                                    fa = 2;

                                   break;
                                }

                                else {

                                }
                            }

                            else if (sr == 2) {
                                if (arr[2][0] == 0) {
                                    sa = 2;
                                    fa = 0;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 3) {
                                if (arr[2][2] == 0) {
                                    sa = 2;
                                    fa = 2;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 4) {
                                if (arr[1][0] == 0) {
                                    sa = 1;
                                    fa = 0;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 5) {
                                if (arr[0][1] == 0) {
                                    sa = 0;
                                    fa = 1;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 6) {
                                if (arr[2][1] == 0) {
                                    sa = 2;
                                    fa = 1;

                                    break;
                                }

                                else {

                                }
                            }

                            else if (sr == 7) {
                                if (arr[1][2] == 0) {
                                    sa = 1;
                                    fa = 2;

                                    break;
                                }

                                else {

                                }
                            }

                            else {

                            }
                        }
                    }
                }

                else if (dif == 1) {
                    // Easy difficulty

                    if (arr[1][1] == 0) {
                        sa = 1;
                        fa = 1;
                    }

                    else if (arr[1][1] == 1) {
                        if (arr[0][0] == 0) {
                            sa = 0;
                            fa = 0;
                        }

                        else if (arr[0][2] == 0) {
                            sa = 0;
                            fa = 2;
                        }

                        else if (arr[2][0] == 0) {
                            sa = 2;
                            fa = 0;
                        }

                        else if (arr[2][2] == 0) {
                            sa = 2;
                            fa = 2;
                        }

                        else if (arr[1][0] == 0) {
                            sa = 1;
                            fa = 0;
                        }

                        else if (arr[0][1] == 0) {
                            sa = 0;
                            fa = 1;
                        }

                        else if (arr[2][1] == 0) {
                            sa = 2;
                            fa = 1;
                        }

                        else if (arr[1][2] == 0) {
                            sa = 1;
                            fa = 2;
                        }

                        else {

                        }
                    }

                    else if (arr[1][1] == 2) {
                        if (arr[0][0] == 0) {
                            sa = 0;
                            fa = 0;
                        }

                        else if (arr[0][2] == 0) {
                            sa = 0;
                            fa = 2;
                        }

                        else if (arr[2][0] == 0) {
                            sa = 2;
                            fa = 0;
                        }

                        else if (arr[2][2] == 0) {
                            sa = 2;
                            fa = 2;
                        }

                        else if (arr[1][0] == 0) {
                            sa = 1;
                            fa = 0;
                        }

                        else if (arr[0][1] == 0) {
                            sa = 0;
                            fa = 1;
                        }

                        else if (arr[2][1] == 0) {
                            sa = 2;
                            fa = 1;
                        }

                        else if (arr[1][2] == 0) {
                            sa = 1;
                            fa = 2;
                        }

                        else {

                        }
                    }
                }

                else {

                }
            }

            // If positions entered corectly contionue game, else show error and restart loop

            if (fa >= 0 && fa < 3 && sa >= 0 && sa < 3) {
                if (arr[sa][fa] == 1 || arr[sa][fa] == 2) {
                    cout << "Please enter correct positions" << endl;
                }

                else {
                    // Check players IDs: if variable 'player' equals 1 Player X goes, if variable 'player' equals 2 Player O, else show error

                    if (player == 1) {
                        arr[sa][fa] = 1;
                    }

                    else if(player == 2) {
                        arr[sa][fa] = 2;
                    }

                    else {
                        // Internal error: invalid player id

                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;
                        cout << "Game error: Invalid player id";
                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;

                        break;
                    }

                    // Draw a table
                    // If Player X goes variable arr[position x][position y] equals 1 and printing 'X', if Player O goes variable
                    // arr[position x][position y] equals 2 and printing 'O', else printing ' '

                    cout << "┌───┬───┬───┐" << endl;
                    cout << "│";

                    if (arr[0][0] == 1) {
                        cout << " X ";
                    }

                    else if (arr[0][0] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[0][1] == 1) {
                        cout << " X ";
                    }

                    else if (arr[0][1] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[0][2] == 1) {
                        cout << " X ";
                    }

                    else if (arr[0][2] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│" << endl;
                    cout << "├───┼───┼───┤" << endl;
                    cout << "│";

                    if (arr[1][0] == 1) {
                        cout << " X ";
                    }

                    else if (arr[1][0] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[1][1] == 1) {
                        cout << " X ";
                    }

                    else if (arr[1][1] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[1][2] == 1) {
                        cout << " X ";
                    }

                    else if (arr[1][2] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│" << endl;
                    cout << "├───┼───┼───┤" << endl;
                    cout << "│";

                    if (arr[2][0] == 1) {
                        cout << " X ";
                    }

                    else if (arr[2][0] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[2][1] == 1) {
                        cout << " X ";
                    }

                    else if (arr[2][1] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│";

                    if (arr[2][2] == 1) {
                        cout << " X ";
                    }

                    else if (arr[2][2] == 2) {
                        cout << " O ";
                    }

                    else {
                        cout << "   ";
                    }

                    cout << "│" << endl;
                    cout << "└───┴───┴───┘" << endl;

                    if (player == 1) {
                        player = 2;
                    }

                    else if(player == 2) {
                        player = 1;
                    }

                    else {
                        // Internal error: invalid player id

                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;
                        cout << "Game error: Invalid player id";
                        cout << "" << endl;
                        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
                        cout << "" << endl;

                        break;
                    }

                    // Check game area: if player win show message

                    /*
                     * ┌───┬───┬───┐      ┌───┬───┬───┐      ┌───┬───┬───┐
                     * │ X │   │   │      │ O │ O │ O │      │   │ X │   │
                     * ├───┼───┼───┤      ├───┼───┼───┤      ├───┼───┼───┤
                     * │   │ X │   │  or  │   │   │   │  or  │   │ X │   │  or more
                     * ├───┼───┼───┤      ├───┼───┼───┤      ├───┼───┼───┤
                     * │   │   │ X │      │   │   │   │      │   │ X │   │
                     * └───┴───┴───┘      └───┴───┴───┘      └───┴───┴───┘
                     */

                    /*
                     * Win positions:
                     *
                     * 1 1 and 1 2 and 1 3;
                     * 2 1 and 2 2 and 2 3;
                     * 3 1 and 3 2 and 3 3;
                     * 1 1 and 2 1 and 3 1;
                     * 1 2 and 2 2 and 3 2;
                     * 1 3 and 2 3 and 3 3;
                     * 1 1 and 2 2 and 3 3;
                     * 1 3 and 3 3 and 3 1;
                     */

                    if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃  Player win  ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2) {
                        cout << "┏━━━━━━━━━━━━━━┓" << endl;
                        cout << "┃   Bot win    ┃" << endl;
                        cout << "┗━━━━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);

                            break;
                        }

                        else {
                            break;
                        }
                    }

                    // If no player won game is over

                    else if (arr[0][0] != 0 && arr[0][1] != 0 && arr[0][2] != 0 && arr[1][0] != 0 && arr[1][1] != 0 && arr[1][2] != 0 && arr[2][0] != 0 && arr[2][1] != 0 && arr[2][2] != 0) {
                        cout << "┏━━━━━━━━━━━┓" << endl;
                        cout << "┃ Game over ┃" << endl;
                        cout << "┗━━━━━━━━━━━┛" << endl;
                        cout << "" << endl;
                        cout << "██████████████████████████████████████████████████████████████" << endl;
                        cout << "" << endl;
                        int r;
                        cout << "Play again? (1 = play, another = exit): ";
                        cin >> r;

                        if (r == 1) {
                            gamesession(type);
                            break;
                        }

                        else {
                            break;
                        }
                    }

                    else {
                        // Do nothing
                    }
                }
            }

            else if (fa == 9 || sa == 9) {
                // Close game

                break;
            }

            else {
                cout << "Please enter correct positions" << endl;
            }
        }
    }

    else {

    }
}

void intro (void) {
    // Check choice

    int f;
    cin >> f;

    if (f == 1) {
        gamesession(1);
    }

    else if (f == 2) {
        gamesession(2);
    }

    else if (f == 3) {
        // Show instruction

        cout << "" << endl;
        cout << "┌─────────────────────────────────────────────────────────────┐" << endl;
        cout << "│                          How to play                        │" << endl;
        cout << "├─────────────────────────────────────────────────────────────┤" << endl;
        cout << "│ X position - horizontally                                   │" << endl;
        cout << "│ Y position - vertically                                     │" << endl;
        cout << "│                                                             │" << endl;
        cout << "│ For example:                                                │" << endl;
        cout << "│                                                             │" << endl;
        cout << "│ ┌───┬───┬───┐                                               │" << endl;
        cout << "│ │1 1│2 1│3 1│                                               │" << endl;
        cout << "│ ├───┼───┼───┤                                               │" << endl;
        cout << "│ │1 2│2 2│3 2│                                               │" << endl;
        cout << "│ ├───┼───┼───┤                                               │" << endl;
        cout << "│ │1 3│2 3│3 3│                                               │" << endl;
        cout << "│ └───┴───┴───┘                                               │" << endl;
        cout << "└─────────────────────────────────────────────────────────────┘" << endl;
        int a;
        cout << "Enter any number to back to main menu: ";
        cin >> a;

        // Back to main menu (restart game)

        cout << "" << endl;
        cout << "                          ┌───┬───┬───┐" << endl;
        cout << "                          │ X │ O │ O │" << endl;
        cout << "                          ├───┼───┼───┤" << endl;
        cout << "                          │ O │ X │   │" << endl;
        cout << "                          ├───┼───┼───┤" << endl;
        cout << "                          │   │   │ X │" << endl;
        cout << "                          └───┴───┴───┘" << endl;
        cout << "" << endl;
        cout << "                         ┏━━━━━━━━━━━━━┓" << endl;
        cout << "                         ┃ TIC TAC TOE ┃" << endl;
        cout << "                         ┗━━━━━━━━━━━━━┛" << endl;
        cout << "" << endl;
        cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
        cout << "" << endl;
        cout << "   please select function" << endl;
        cout << "" << endl;
        cout << "       [1] Play with player" << endl;
        cout << "       [2] Play with bot" << endl;
        cout << "       [3] Instruction" << endl;
        cout << "       [4] Exit" << endl;
        cout << "" << endl;
        cout << "   Enter your choice: ";
        intro();
    }

    else if (f == 4) {

    }

    // If choice not correct show error
    // WARNING: DO NOT ENTER STRING VALUES TO AVOID LAGS

    else {
        cout << "Please enter correct choice (1 ~ 4): ";
        intro();
    }
}