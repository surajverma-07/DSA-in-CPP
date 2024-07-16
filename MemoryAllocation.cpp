#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to implement First Fit allocation
void firstFit(vector<int>& blockSizes, vector<int>& processSizes) {
    vector<int> allocation(processSizes.size(), -1);

    for (int i = 0; i < processSizes.size(); i++) {
        for (int j = 0; j < blockSizes.size(); j++) {
            if (blockSizes[j] >= processSizes[i]) {
                allocation[i] = j;
                blockSizes[j] -= processSizes[i];
                break;
            }
        }
    }

    cout << "First Fit Allocation:\n";
    cout << "Process No.\tProcess Size\tBlock No.\n";
    for (int i = 0; i < processSizes.size(); i++) {
        cout << i + 1 << "\t\t" << processSizes[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1 << "\n";
        else
            cout << "Not Allocated\n";
    }
}

// Function to implement Best Fit allocation
void bestFit(vector<int>& blockSizes, vector<int>& processSizes) {
    vector<int> allocation(processSizes.size(), -1);

    for (int i = 0; i < processSizes.size(); i++) {
        int bestIdx = -1;
        for (int j = 0; j < blockSizes.size(); j++) {
            if (blockSizes[j] >= processSizes[i]) {
                if (bestIdx == -1 || blockSizes[j] < blockSizes[bestIdx]) {
                    bestIdx = j;
                }
            }
        }

        if (bestIdx != -1) {
            allocation[i] = bestIdx;
            blockSizes[bestIdx] -= processSizes[i];
        }
    }

    cout << "Best Fit Allocation:\n";
    cout << "Process No.\tProcess Size\tBlock No.\n";
    for (int i = 0; i < processSizes.size(); i++) {
        cout << i + 1 << "\t\t" << processSizes[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1 << "\n";
        else
            cout << "Not Allocated\n";
    }
}

// Function to implement Worst Fit allocation
void worstFit(vector<int>& blockSizes, vector<int>& processSizes) {
    vector<int> allocation(processSizes.size(), -1);

    for (int i = 0; i < processSizes.size(); i++) {
        int worstIdx = -1;
        for (int j = 0; j < blockSizes.size(); j++) {
            if (blockSizes[j] >= processSizes[i]) {
                if (worstIdx == -1 || blockSizes[j] > blockSizes[worstIdx]) {
                    worstIdx = j;
                }
            }
        }

        if (worstIdx != -1) {
            allocation[i] = worstIdx;
            blockSizes[worstIdx] -= processSizes[i];
        }
    }

    cout << "Worst Fit Allocation:\n";
    cout << "Process No.\tProcess Size\tBlock No.\n";
    for (int i = 0; i < processSizes.size(); i++) {
        cout << i + 1 << "\t\t" << processSizes[i] << "\t\t";
        if (allocation[i] != -1)
            cout << allocation[i] + 1 << "\n";
        else
            cout << "Not Allocated\n";
    }
}

int main() {
    vector<int> blockSizes = {100, 500, 200, 300, 600};
    vector<int> processSizes = {212, 417, 112, 426};

    // Copy block sizes for each method since they modify the block sizes
    vector<int> blockSizesFF = blockSizes;
    vector<int> blockSizesBF = blockSizes;
    vector<int> blockSizesWF = blockSizes;

    firstFit(blockSizesFF, processSizes);
    cout << "\n";
    bestFit(blockSizesBF, processSizes);
    cout << "\n";
    worstFit(blockSizesWF, processSizes);

    return 0;
}
