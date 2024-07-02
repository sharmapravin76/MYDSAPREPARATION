#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a struct for box types to hold the number of boxes and units per box
struct boxType {
    int numberOfBoxes;
    int unitsPerBox;
};

// Custom comparator to sort box types based on units per box in descending order
bool cmp(boxType b1, boxType b2) {
    return b1.unitsPerBox > b2.unitsPerBox;
}

// Function to calculate the maximum units that can be loaded onto the truck
int maximumUnits(vector<boxType>& boxes, int truckSize) {
    // Sort the boxes based on units per box in descending order
    sort(boxes.begin(), boxes.end(), cmp);

    int totalUnits = 0;

    // Iterate through the sorted boxes
    for (const auto& box : boxes) {
        if (truckSize <= 0) break;
        if (box.numberOfBoxes <= truckSize) {
            // If the truck can carry all the boxes of this type
            totalUnits += box.numberOfBoxes * box.unitsPerBox;
            truckSize -= box.numberOfBoxes;
        } else {
            // If the truck can only carry a part of the boxes of this type
            totalUnits += truckSize * box.unitsPerBox;
            truckSize = 0;
        }
    }

    return totalUnits;
}

int main() {
    int n, truckSize;
    cout << "Enter the number of box types: ";
    cin >> n;
    cout << "Enter the truck size: ";
    cin >> truckSize;

    vector<boxType> boxes(n);
    cout << "Enter the number of boxes and units per box for each type:\n";
    for (int i = 0; i < n; ++i) {
        cin >> boxes[i].numberOfBoxes >> boxes[i].unitsPerBox;
    }

    int result = maximumUnits(boxes, truckSize);
    cout << "Maximum units that can be loaded onto the truck: " << result << endl;

    return 0;
}
