#include <cstdlib>
#include <vector>
#include "bst.hpp"
#include "node.hpp"
using namespace std;
#define SZ 100
#define MAX_POINTS 5

int main()
{
    BST<int> bst;
    Node<int> *result;
    vector<int> data;
    int i, points = 0;

    bst.insert(75);
    bst.insert(40);
    bst.insert(89);
    bst.insert(128);

    result = bst.search(3939399);
    if(result != NULL)
    {
        cout << "[-->] result should have returned NULL\n";
        cout << "[-->] test failed!\n";
        exit(0);
    }
    else
    {
        cout << "[-->] Test passed!\n";
        exit(MAX_POINTS);
    }
}