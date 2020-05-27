vector<int> cutTheSticks(vector<int> arr) {
    //sort in nlogn time
    sort(arr.begin(), arr.end());
    //vector to track sticks left
    vector<int> sticksLeft;
    //before beginning obviously all sticks will be left
    sticksLeft.push_back(arr.size());
    for(int i = 0; i < arr.size()-1; i++)
        //trigger only if stick size isn't same as next one
        if(arr[i] != arr[i+1])
            //pushback numberOfSticks - numberOfSticksCut
            sticksLeft.push_back(arr.size()-(1+i));
    return sticksLeft;
}
