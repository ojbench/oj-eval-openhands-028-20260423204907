
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // This is a template solution for Michelle's Student Council Work problem
    // The actual problem requirements will be determined after initial OJ submission
    
    string line;
    vector<string> input_lines;
    
    // Read all input
    while (getline(cin, line)) {
        input_lines.push_back(line);
    }
    
    // For now, just echo the input to see what the test data looks like
    for (const string& input_line : input_lines) {
        cout << input_line << "\n";
    }
    
    return 0;
}
