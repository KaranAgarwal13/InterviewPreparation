int sockMerchant(int n, vector<int> ar) {
    //Using Bitset to reduce runtime substantially
    bitset<100> sockDrawer(0);
    int pairs = 0;
    for(int color : ar)
    {
        if(sockDrawer.test(color))  pairs++;
        sockDrawer.flip(color);
    }
    return pairs;
/*
    int pairs = 0;
    //Implementing HashTable
    int a[101]= {0};
    for(int i = 0; i < n; i++)
        a[ar[i]]++;
    for(int i = 1; i < 101; i++)
        pairs += a[i]/2;
    return pairs;*/
}
