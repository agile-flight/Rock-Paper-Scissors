#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main() {

    int score = 0;
    string ans;

    srand(time(0));

    cout << "\nRock Paper Scissors" << endl;
    cout << "-------------------" << endl;

    for ( int i = 1; i <= 3; i++ ) {

        int rand_num = (rand() % 3) + 1; // Generates A Random Integer So The Computer For Rock Paper Scissors

        /*
        1 : Rock
        2 : Paper 
        3 : Scissors
        */
        
        cout << "Trial #" << i << ": ";
        cin >> ans;
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);  // Changes The Input To Lowercase To Prepare It For Validation

        while ( ans != "rock" && ans != "paper" && ans != "scissors" ) {

            cout << "Invalid Input: " << ans << endl;
            cout << "Trial #" << i << ": ";
            cin >> ans;

        }

        if ( (ans == "rock" && rand_num == 3) || (ans == "paper" && rand_num == 1) || (ans == "scissors" && rand_num == 2) ) {  // Stringy Conditional I Don't Like
            
            ++score;
            cout << "Round Won" << endl;
            cout << "Score: " << score << endl;
            cout << "-------------------" << endl;

        } else {

            cout << "Round Lost" << endl;
            cout << "Score: " << score << endl;
            cout << "-------------------" << endl;

        }

        if ( i == 2 && score < 2 ) {

            break;

        }

    }

    if ( score >= 2 ){

        cout << "You Win" << endl;

    } else {

        cout << "You Lose\n" << endl;

    }

    return 0;
    
}
