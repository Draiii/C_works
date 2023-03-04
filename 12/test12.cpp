#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Define the graph node struct
struct Node {
    int x, y;           // Coordinates of the node
    int g, h, f;        // g = cost so far, h = heuristic cost, f = total cost
    Node* parent;       // Pointer to the parent node
};

// Define the comparison function for the priority queue
struct CompareNodes {
    bool operator()(Node* a, Node* b) {
        return a->f > b->f;
    }
};

// Define the heuristic function
int heuristic(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

// Define the A* search function
void a_star(vector<vector<int>> grid, int start_x, int start_y, int end_x, int end_y) {
    // Create the start and end nodes
    Node* start = new Node{start_x, start_y, 0, 0, 0, nullptr};
    Node* end = new Node{end_x, end_y, 0, 0, 0, nullptr};

    // Create the open and closed lists
    priority_queue<Node*, vector<Node*>, CompareNodes> open_list;
    vector<Node*> closed_list;

    // Add the start node to the open list
    start->h = heuristic(start_x, start_y, end_x, end_y);
    start->f = start->g + start->h;
    open_list.push(start);

    // Loop until the open list is empty
    while (!open_list.empty()) {
        // Get the node with the lowest f value from the open list
        Node* current = open_list.top();
        open_list.pop();

        // If we have reached the end node, reconstruct the path and return
        if (current->x == end->x && current->y == end->y) {
            vector<Node*> path;
            while (current != nullptr) {
                path.push_back(current);
                current = current->parent;
            }
            reverse(path.begin(), path.end());
            for (Node* node : path) {
                cout << "(" << node->x << "," << node->y << ")" << endl;
            }
            return;
        }

        // Generate the neighbors of the current node
        vector<Node*> neighbors;
        if (current->x > 0) neighbors.push_back(new Node{current->x - 1, current->y, 0, 0, 0, current});
        if (current->x < grid.size() - 1) neighbors.push_back(new Node{current->x + 1, current->y, 0, 0, 0, current});
        if (current->y > 0) neighbors.push_back(new Node{current->x, current->y - 1, 0, 0, 0, current});
        if (current->y < grid[0].size() - 1) neighbors.push_back(new Node{current->x, current->y + 1, 0, 0, 0, current});

        // Loop through the neighbors
        for (Node* neighbor : neighbors) {
            // Check if the neighbor is in the closed list
            if (find(closed_list.begin(), closed_list.end(), neighbor) != closed_list.end()) {
                continue;
            }

            // Calculate the tentative g value for the neighbor
            int tentative_g = current->g + 1
