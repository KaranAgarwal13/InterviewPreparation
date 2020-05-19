void sort_by_area(triangle* tr, int n) {
    int relativeArea[n];
    for(int i = 0; i < n; i++)
    {
        //using a modified version of Heron's formula as only relativeArea is needed
        int p = tr[i].a + tr[i].b + tr[i].c;
        relativeArea[i] = p*(p-2*tr[i].a)*(p-2*tr[i].b)*(p-2*tr[i].c);
    }
    //bubble sort implemented
    //upgrade to qsort() for nlogn
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(relativeArea[i]>relativeArea[j])
            {
                int tmp = relativeArea[i];
                relativeArea[i] = relativeArea[j];
                relativeArea[j] = tmp;
                triangle temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
            }
}
