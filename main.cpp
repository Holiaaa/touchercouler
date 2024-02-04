#include <iostream>

using namespace std;

int main()
{
    // Touché coulé en CPP.

    bool cardBoard[4][4] = {
        { 0, 0, 0, 0},
        { 1, 0, 1, 0},
        { 0, 0, 0, 1},
        { 1, 0, 0, 0}
    };

    int score = 0;
    int remaining = 4;

    while (1) {
        cout << "Bateau restant : " << remaining << endl;
        cout << "Votre score actuelle : " << score << endl;

        cout << "-------------------------" << endl;
        cout << "Mettre la ligne Y : " << endl;
        int y;
        cin >> y;

        cout << "Mettre la ligne X : " << endl;
        int x;
        cin >> x;

        if (cardBoard[y][x]) {
            score++;
            cout << "Bravo! Vous avez toucher un bateau !" << endl;
            remaining--;
            cardBoard[y][x] = 0;
        }
        else {
            cout << "Oh non ! Vous avez toucher de l'eau !" << endl;
        }

        if (score == 4) {
            break;
        }
    }

    cout << "Bravo ! Vous avez couler tous les bateau !";

    return 0;
}
