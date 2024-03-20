#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    stack<int> indices;
    int max_area = 0;
    int index = 0;

    while (index < N) {
        if (indices.empty() || heights[index] >= heights[indices.top()]) {
            indices.push(index);
            index++;
        } else {
            int top_index = indices.top();
            indices.pop();
            int width = indices.empty() ? index : index - indices.top() - 1;
            max_area = max(max_area, heights[top_index] * width);
        }
    }

    while (!indices.empty()) {
        int top_index = indices.top();
        indices.pop();
        int width = indices.empty() ? index : index - indices.top() - 1;
        max_area = max(max_area, heights[top_index] * width);
    }

    cout << max_area << endl;

    return 0;
}