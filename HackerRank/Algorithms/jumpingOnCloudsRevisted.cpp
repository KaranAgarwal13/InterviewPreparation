int jumpingOnCloudsRevisited(vector<int> c, int k) {
    int loc = 0, energy = 100;
    do{
        energy--;
        loc = (loc+k)%c.size();
        //avoid if statement for branch prediction failure
        energy -= 2*c[loc];
    }while(loc);
    return energy;
}
