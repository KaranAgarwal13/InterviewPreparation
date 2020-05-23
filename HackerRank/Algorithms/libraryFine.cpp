int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    //if year is late
    if(y1 > y2)
        return 10000;
    if(y1 == y2)//if return on same year not earlier
    {
        if(m1 > m2)//if returned months late
            return 500*(m1-m2);
        if(m1 == m2 && d1 > d2)//if returned in same month but late date
            return 15*(d1-d2);
    }
    return 0;
}
