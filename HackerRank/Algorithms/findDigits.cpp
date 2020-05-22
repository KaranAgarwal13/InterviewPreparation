int findDigits(int n) {
    int remainingNum = n;
    int digit;
    int count = 0;
    while(remainingNum)
    {
        digit = remainingNum%10;
        remainingNum /= 10;
        //converting conditional statement to expression to avoid false branch prediction
        count += (digit && (n%digit==0));
    }
    return count;
}
