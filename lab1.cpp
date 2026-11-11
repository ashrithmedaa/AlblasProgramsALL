#include <iostream>
using namespace std;

int main()
{
    int finalscore;
    cout << "Enter the final score: ";
    cin >> finalscore;

    if (finalscore < 0) {
        cout << "Error: Invalid score." << endl;
    } else if (finalscore <= 499) {
        cout << "Rank: Rookie" << endl;
    } else if (finalscore <= 999) {
        cout << "Rank: Pro" << endl;
    } else {
        cout << "Rank: Legend" << endl;
    }

    return 0;

}