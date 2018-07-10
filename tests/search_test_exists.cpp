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

    result = bst.search(89);
    if(result == NULL)
    {
        cout << "[-->] result should have returned a node pointer\n";
        cout << "[-->] test failed!\n";
        exit(points);
    }
    else
    {
        points += 2;
        if(result->get_data() == 89)
        {
            cout << "[-->] Test passed!\n";
            exit(MAX_POINTS);    
        }
        else
        {
            cout << "[-->] Search() returned a node but it did not have the right value\n";
            cout << "[-->] Test failed!\n";
            exit(points);
        }
    }
}