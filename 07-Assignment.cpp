
#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    int n, time;

    // Input number of tasks
    cout << "Enter number of tasks: ";
    cin >> n;

    int task[n];
    
    // Input task durations
    cout << "Enter task durations: ";
    for (int i = 0; i < n; i++) {
        cin >> task[i];
    }

    // Input total available time
    cout << "Enter total time available: ";
    cin >> time;

    // Sort tasks (Greedy step)
    sort(task, task + n);

    int count = 0, sum = 0;

    // Pick tasks greedily
    for (int i = 0; i < n; i++) {
        sum += task[i];
        if (sum <= time) {
            count++;
        } else {
            break;
        }
    }

    cout << "Maximum tasks done: " << count << endl;

    return 0;
}
