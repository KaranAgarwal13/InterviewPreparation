vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width) {
    vector<int> largestVehicle(n);
    for(int i = 0; i < n; i++)
    {
        if(cases[i][0]==i)
            largestVehicle[i] = width[i];
        if(cases[i][0]<i && cases[i][1]>=i && largestVehicle[i]>width[i])
            largestVehicle[i] = width[i];
    }
    return largestVehicle;
}
//complete
