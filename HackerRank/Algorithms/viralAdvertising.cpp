int viralAdvertising(int n) {
    //initialize values for n is 1
    int numberOfLikes = 2, totalLikes = 2;
    for(int i = 2; i <= n; i++)
    {
        //multiply bt 3 and floor of /2
        numberOfLikes = (3*numberOfLikes)>>1;
        //track total
        totalLikes += numberOfLikes;
    }
    return totalLikes;
}
