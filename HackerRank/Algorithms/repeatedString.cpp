long (string s, long n) {
    vector<int> locations;
    for(char& c: s)
        if(c=='a')  locations.push_back(&c - &s[0]);
    long count = locations.size()*(n/s.length());
    int charCount = n%s.length();
    int index = locations.size()-1;
    while(locations[index])
    return count;
}
