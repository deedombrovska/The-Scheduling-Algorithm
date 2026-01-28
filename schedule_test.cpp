#include <iostream>
#include "schedule.h"
using namespace std;

int main()
{
    const int size = 11;

    Event* events = new Event[size];
    events[0] = {{1}, {1}, {4}};
    events[1] = {{2}, {3}, {5}};
    events[2] = {{3}, {0}, {6}};
    events[3] = {{4}, {5}, {7}};
    events[4] = {{5}, {3}, {9}};
    events[5] = {{6}, {5}, {9}};
    events[6] = {{7}, {6}, {10}};
    events[7] = {{8}, {8}, {11}};
    events[8] = {{9}, {8}, {12}};
    events[9] = {{10}, {2}, {14}};
    events[10] = {{11}, {12}, {16}};

    int comp_events_count = 0;
    Event* compatible_events = Greedy_Event_Selector(events, size, comp_events_count);

    cout << "\nOptimal solution:\n";

    for (int i = 0; i < comp_events_count; i++)
    {
        cout << compatible_events[i].index << "\t";
    }
    

    delete[] events;
    delete[] compatible_events;

    return 0;
}

//OUTPUT: 1  4  8  11
