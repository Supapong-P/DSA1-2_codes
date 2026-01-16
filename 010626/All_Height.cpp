#include <iostream>
#include <vector>
#include <algorithm> // Required for std::copy (optional)
using namespace std;

int main()
{
    vector<int> R1 = {162, 165, 174, 175, 170, 180, 155, 155, 175, 178, 170, 163, 175};
    vector<int> R2 = {185, 180, 174, 172, 176, 170, 174, 170};
    vector<int> R3 = {180, 174, 176, 165, 171, 173, 185, 170, 185};
    vector<int> R4 = {163, 160, 169, 162, 168, 173};
    vector<int> RA = {};
    // Insert elements from arr1
    RA.insert(RA.end(), R1.begin(), R1.end());
    RA.insert(RA.end(), R2.begin(), R2.end());
    RA.insert(RA.end(), R3.begin(), R3.end());
    RA.insert(RA.end(), R4.begin(), R4.end());
    sort (RA.begin(), RA.end());
    for (int item : RA)
    {
        std::cout << item << " ";
    }

    return 0;
}
