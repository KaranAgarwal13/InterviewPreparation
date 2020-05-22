int hurdleRace(int k, vector<int> height) {
    int highest = 0;
    for(int i : height)
        highest = max(highest, i);
    int lowestDose = highest - k;
    if(lowestDose<0)
        return 0;//if lowestDose is negative return 0
    return lowestDose;
}
