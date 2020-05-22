vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> values;
    for(int i = 0; i < queries.size(); i++)
    {
        //move left k times to get required value
        int index = queries[i]-(k%a.size());
        //move index left from end if negative
        if(index < 0)   index = a.size()+index;
        values.push_back(a[index]);
    }
    return values;
}
