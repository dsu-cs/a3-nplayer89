#include <cstdlib>
#include <vector>
#include "bst.hpp"
using namespace std;
#define SZ 100
#define MAX_POINTS 5

int main()
{
    BST<int> bst;
    vector<int> data;
    vector<int> *ret_data;
    int i, points = 0;
    int inorder_data[] = {1, 2, 4, 7, 9, 12, 27, 35, 36, 40, 55, 66, 75, 89, 99, 128};

    data.push_back(75);
    data.push_back(40);
    data.push_back(89);
    data.push_back(128);
    data.push_back(12);
    data.push_back(9);
    data.push_back(1);
    data.push_back(2);
    data.push_back(7);
    data.push_back(3);
    data.push_back(99);
    data.push_back(35);
    data.push_back(36);
    data.push_back(4);
    data.push_back(27);
    data.push_back(66);
    data.push_back(55);


    for(i = 0; i < data.size(); i++)
    {
        bst.insert(data[i]);
    }

    bst.remove(3);
    data.erase(data.begin()+10);

    ret_data = bst.inorder();
    if(ret_data == NULL)
    {
        cout << "[-->] Inorder returned NULL when it should have returned a vector\n";
        exit(points);
    }

    if(ret_data->size() != data.size())
    {
        cout <<"[-->] vector returned from function is not the right length\n";
        exit(points);
    }


    i = 0;
    for (std::vector<int>::iterator it = ret_data->begin(); it != ret_data->end(); ++it)
    {
        if(*it != inorder_data[i])
        {
            cout << "[-->] Expected " << inorder_data[i] << " but got " << *it <<"\n";
            exit(points);          
        }
        i++;
    }

    cout << "[-->] Test passed!\n";
    return MAX_POINTS;
}
