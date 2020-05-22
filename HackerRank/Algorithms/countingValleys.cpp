int countingValleys(int n, string s) {
    int elevation = 0;
    int numberOfValleys=0;
    for(char c: s)
    {
        //we are only interested in counting number of times we climber to sea level
        if(c == 'U')
        {
            //since it is up, we increment elevation and check if we reached sea level
            if(++elevation== 0)
                numberOfValleys++;
        }
        else
            //since we went down
            elevation--;
    }
    return numberOfValleys;
}
