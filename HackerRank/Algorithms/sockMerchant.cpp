int sockMerchant(int n, vector<int> ar) {
    int res = 0;
    int a[101]= {0};
    for(int i = 0; i < n; i++)
        a[ar[i]]++;
    for(int i = 1; i < 101; i++)
        res += a[i]/2;
    return res;
}
