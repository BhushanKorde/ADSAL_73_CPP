#include<iostream>
using namespace std;

void sortShops(int start[], int end[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(end[i] > end[j]) {
                int tempEnd = end[i];
                end[i] = end[j];
                end[j] = tempEnd;

                int tempStart = start[i];
                start[i] = start[j];
                start[j] = tempStart;
            }
        }
    }
}

int main() {
    int k, n;
    int start[10], end[10];
    int personEnd[10];

    cout << "Enter number of persons: ";
    cin >> k;

    cout << "Enter number of shops: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter Start Time of shop " << i+1 << ": ";
        cin >> start[i];
    }

    for(int i = 0; i < n; i++) {
        cout << "Enter End Time of shop " << i+1 << ": ";
        cin >> end[i];
    }

    sortShops(start, end, n);

    for(int i = 0; i < k; i++) personEnd[i] = -1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            if(personEnd[j] <= start[i]) {
                personEnd[j] = end[i];
                cout << "Shop " << i+1 << " visited by Person " << j+1 << endl;
                break;
            }
        }
    }

    return 0;
}
