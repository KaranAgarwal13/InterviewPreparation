int pageCount(int n, int p) {
    int frontTurns = p/2;
    int backTurns = (n-p)/2 + (!(n%2) && p%2);
    return min(frontTurns,backTurns);
}
