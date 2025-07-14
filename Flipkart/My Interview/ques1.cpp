#include <iostream>
#include <vector>
using namespace std;
int countWays(vector<int>& sacks, int index, int remainingWeight, int remainingBags) {
    // Base case: if exact weight and exact number of bags matched
    if (remainingWeight == 0 && remainingBags == 0)
        return 1;
    // Base case: if no bags left or weight exceeded
    if (remainingWeight < 0 || remainingBags < 0 || index >= sacks.size())
        return 0;
    // Option 1: Include current sack
    int include = countWays(sacks, index + 1, remainingWeight - sacks[index], remainingBags - 1);
    // Option 2: Exclude current sack
    int exclude = countWays(sacks, index + 1, remainingWeight, remainingBags);
    return include + exclude;
}
int main() {
    int W; // Standardised weight
    cin >> W;
    int N, X;
    cin >> N >> X;
    vector<int> sacks(X);
    for (int i = 0; i < X; ++i)
        cin >> sacks[i];
    int result = countWays(sacks, 0, W, N);
    cout << result << endl;
    return 0;
}
