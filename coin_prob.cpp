#include <iostream>
#include <vector>

int countWaysToMakeChange(int N, const std::vector<int> &coins)
{
    int m = coins.size();

    // Create a table to store results of subproblems
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(N + 1, 0));

    // Base case: There is one way to make change for 0 rupees, i.e., by not selecting any coin
    for (int i = 0; i <= m; ++i)
        dp[i][0] = 1;

    // Fill the dp table in a bottom-up manner
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            // Count of ways including the current coin
            int includeCurrentCoin = (j >= coins[i - 1]) ? dp[i][j - coins[i - 1]] : 0;

            // Count of ways excluding the current coin
            int excludeCurrentCoin = dp[i - 1][j];

            // Total ways to make change for the current amount
            dp[i][j] = includeCurrentCoin + excludeCurrentCoin;
        }
    }

    // The result is stored in the bottom-right cell of the table
    return dp[m][N];
}

void printCoinCombinations(int N, const std::vector<int> &coins)
{
    int ways = countWaysToMakeChange(N, coins);

    if (ways == 0)
    {
        std::cout << "No combination found.\n";
        return;
    }

    std::cout << "Number of ways to make change: " << ways << "\n";
    std::cout << "Coin combinations:\n";

    int m = coins.size();
    int i = m;
    int j = N;
    std::vector<int> selectedCoins;

    // Reconstruct the coin combinations
    while (i > 0 && j > 0)
    {
        if (j >= coins[i - 1] && countWaysToMakeChange(j - coins[i - 1], coins) > 0)
        {
            selectedCoins.push_back(coins[i - 1]);
            j -= coins[i - 1];
        }
        else
        {
            --i;
        }
    }

    // Print the coin combinations
    for (int i = selectedCoins.size() - 1; i >= 0; --i)
    {
        std::cout << selectedCoins[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int N;
    std::cout << "Enter the desired sum: ";
    std::cin >> N;

    int numCoins;
    std::cout << "Enter the number of coin types: ";
    std::cin >> numCoins;

    std::vector<int> coins;
    std::cout << "Enter the coin types:\n";
    for (int i = 0; i < numCoins; ++i)
    {
        int coin;
        std::cin >> coin;
        coins.push_back(coin);
    }

    printCoinCombinations(N, coins);

    return 0;
}
