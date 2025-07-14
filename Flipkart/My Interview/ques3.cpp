typedef long long llint;

llint findMoves(int n, llint a[], llint b[]) {
    llint moves = 0;
    for (llint i = 0; i < n; i++) {
        moves += abs(a[i] - b[i]);
    }
    return moves;
}
