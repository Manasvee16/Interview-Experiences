int bagSum(int target, int nbags, int n, int V[]) {
    function<int(int, int, int)> countWays = [&](int index, int remWeight, int remBags) {
        if (remWeight == 0 && remBags == 0)
            return 1;
        if (index == n || remWeight < 0 || remBags < 0)
            return 0;
        int include = countWays(index + 1, remWeight - V[index], remBags - 1);
        int exclude = countWays(index + 1, remWeight, remBags);
        return include + exclude;
    };

    int sum = countWays(0, target, nbags);
    return sum;
}
