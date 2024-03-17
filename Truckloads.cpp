#include "Truckloads.h"
#include <iostream>
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    // Base case: If the number of crates is less than or equal to the load size, only one truck is needed
    if (numCrates <= loadSize) {
        return 1;
    } else {
        // Divide the crates into two halves
        int leftHalf = numCrates / 2;
        int rightHalf = numCrates - leftHalf;
        
        // Recursively calculate the number of trucks needed for each half
        int trucksInLeftHalf = numTrucks(leftHalf, loadSize);
        int trucksInRightHalf = numTrucks(rightHalf, loadSize);
        
        // Return the sum of trucks needed for both halves
        return trucksInLeftHalf + trucksInRightHalf;
    }
}
