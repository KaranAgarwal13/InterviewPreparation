long repeatedString(string s, long n) {
    vector<int> locations;
    for(char& c: s)
        if(c=='a')  locations.push_back(&c - &s[0]);
    if(!locations.size())//if a is not at all present
        return 0;
    //multiply number of a's * string repetition
    long count = locations.size()*(n/s.length());
    int charCount = n%s.length();//track remaining partial string length 
    if(charCount)//skip if no partial string
    {
        int index = locations.size()-1;//get index for locations of a
        while(locations[index]>charCount-1)//search how many a's come
            index--;
        if(index>=0)//if a's are present
            count += index+1;
    }
    return count;
}
