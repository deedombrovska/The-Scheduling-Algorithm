struct Event 
{
	int index;
	int start;
	int finish;
};


Event* Greedy_Event_Selector(Event* set, int n, int& count)
{
    Event* subset = new Event[n];
    subset[0] = set[0]; 
    int k = 0;
    count = 1; 

    for (int m = 1; m < n; m++)
    {
        if (set[m].start >= set[k].finish) //if activities are compatible
        {
            subset[count] = set[m];
            k = m;
            count++;
        }
    }

    return subset;
}
