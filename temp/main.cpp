#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int>> v) {
    vector<int> ans;
    int x = 0, y = 0;

    // XOR all x coordinates and y coordinates separately
    for (auto & i : v) {
        x ^= i[0];
        y ^= i[1];
    }

    // The remaining point's coordinates are (x, y)
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}

int main() {
    // Input: Coordinates of three points of the rectangle
    vector<vector<int>> input = {{1, 2}, {3, 4}, {1, 4}};

    // Find the remaining point
    vector<int> result = solution(input);

    // Display the remaining point's coordinates
    cout << "Remaining point: (" << result[0] << ", " << result[1] << ")" << endl;

    return 0;
}
