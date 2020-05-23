int squares(int a, int b) {
    //inverse the mathematical function and get lowestSquare and highestSquare in range
    //increment by 1 as long as in range highestSquare
    //timecomplexity is greatly reduced from O(b-a) to O(sqrt(b-a))
    int count = 0;
    int lowestSquare = ceil(sqrt(a));
    int highestSquare = floor(sqrt(b));
    while(lowestSquare<=highestSquare)
    {
        lowestSquare++;
        count++;
    }
    return count;
}
