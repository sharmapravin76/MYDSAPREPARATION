// #include <iostream>
// #include <cmath>
 
// using namespace std;
 
// // Function to find the minimum days
// int minimumDays(int S, int N, int M)
// {
//     // Food required to survive S days
//     double req = S * M;
 
//     // If buying all possible days except Sundays, but can't
//     // provide sufficient food. If total can't provide,
//     // then each week also can't provide.
//     if ((S - S / 7) * N < req) {
//         return -1;
//     }
//     else {
//         return ceil(req / N);
//     }
// }
 
// // Function to display the menu and get user input
// void displayMenu(int& S, int& N, int& M)
// {
//     cout << "Enter the following values:" << endl;
//     cout << "Number of days to survive: ";
//     cin >> S;
//     cout << "Food consumption per day: ";
//     cin >> N;
//     cout << "Food units per purchase: ";
//     cin >> M;
//     cout << "===================================" << endl;
// }
 
// // Function to execute the program
// void runProgram()
// {
//     int S, N, M;
//     displayMenu(S, N, M);
 
//     int days = minimumDays(S, N, M);
//     if (days != -1) {
//         cout << "Yes, you can survive for " << S << " days." << endl;
//         cout << "Minimum days to buy food: " << days << endl;
//     }
//     else {
//         cout << "No, you cannot survive for " << S << " days." << endl;
//     }
// }
 
// // Driver code
// int main()
// {
//     runProgram();
//     return 0;
// }



#include <iostream>
#include <cmath>

using namespace std;

// Function to find the minimum days to buy food
int minimumDays(int S, int N, int M) {
    // Calculate total food required for S days
    int totalFoodRequired = S * M;

    // Calculate total days we can buy food (excluding Sundays)
    int buyingDays = S - S / 7;

    // Calculate total food that can be bought in available days
    int totalFoodCanBuy = buyingDays * N;

    // Check if survival is possible
    if (totalFoodCanBuy < totalFoodRequired) {
        return -1; // Not possible to survive
    } else {
        // Calculate minimum days needed to buy the required food
        return ceil((double)totalFoodRequired / N);
    }
}

int main() {
    int S, N, M;

    cout << "Enter number of days to survive: ";
    cin >> S;
    cout << "Enter food units per purchase: ";
    cin >> N;
    cout << "Enter food consumption per day: ";
    cin >> M;

    int result = minimumDays(S, N, M);
    if (result == -1) {
        cout << "No, you cannot survive for " << S << " days." << endl;
    } else {
        cout << "Yes, you can survive for " << S << " days." << endl;
        cout << "Minimum days to buy food: " << result << endl;
    }

    return 0;
}
