int equalizeArray(vector<int> arr) {
    /*unordered_map<int, int> frequencyTable;
    for(int const &i: arr)
        frequencyTable[arr[i]]++;//get frequency of all elements
    int count = 0;
    for(auto i: frequencyTable)
        if(i.second>count)
            count=i.second;//find max frequency*/
    sort(arr.begin(), arr.end());
    int count = 1, highestFreq = 1;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            if(count>highestFreq)
                highestFreq = count;
        }
        else
            count = 1;
    }
    return arr.size()-highestFreq;//return number of elements - most frequent element
}
