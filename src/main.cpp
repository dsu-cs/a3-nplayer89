#include <fstream>  // Include to open files
#include <cstddef>  // Include to use NULL, otherwise use nullptr
#include <iostream> // Include to print to the screen
#include <iomanip>
#include <vector>
#include "bst.hpp"     // The header file for our custom linked list class
using namespace std;

int main(int argc, char** argv)
{
	BST<int> bst;
    Node<int> *searchResult;
	ifstream input;
	int cmd, argument, ret, i;
    vector<int> *traversal_data;

    if(argc < 2)
    {
        cout << "useage: ./a1.out <cmd file>\n";
        return 0;
    }

	input.open(argv[1]);

    // while there is something to read from the file, read
	while (input >> cmd)
	{
        // switch on the command we read from the file
		switch (cmd)
		{
        // if the cmd requires a parameter, read it from the file and call the 
        // associated function
		case 1:
			input >> argument;
			bst.insert(argument);
            cout << "Inserted " << argument << endl;
			break;
		case 2:
			input >> argument;
			bst.remove(argument);
            cout << "Removed " << argument << endl;
			break;
		case 3:
			traversal_data = bst.inorder();
            if(traversal_data != NULL)
            {
                cout << "inorder traveral: ";
                for (std::vector<int>::const_iterator i = traversal_data->begin(); 
                     i != traversal_data->end(); 
                     ++i)     
                {
                    std::cout << *i << ' ';
                }
                cout << endl;
            }
            else cout << "tree appears to be empty\n";
			break;
		case 4:
			traversal_data = bst.postorder();
            if(traversal_data != NULL)
            {
                cout << "postorder traveral: ";
                for (std::vector<int>::const_iterator i = traversal_data->begin(); 
                     i != traversal_data->end(); 
                     ++i)     
                {
                    std::cout << *i << ' ';
                }
                cout << endl;
            }
            else cout << "tree appears to be empty\n";
			break;
		case 5:
			traversal_data = bst.preorder();
            if(traversal_data != NULL)
            {
                cout << "preorder traveral: ";
                for (std::vector<int>::const_iterator i = traversal_data->begin(); 
                     i != traversal_data->end(); 
                     ++i)     
                {
                    std::cout << *i << ' ';
                }
                cout << endl;
            }
            else cout << "tree appears to be empty\n";
			break;
		case 6:
            input >> argument;
			searchResult = bst.search(argument);
            if(searchResult == NULL)
            {
                cout << "Did not find " << argument << endl;
            }
            else
            {
                cout << "Found " << searchResult->get_data() << endl;
            }
			break;
        case 7:
            i = bst.get_size();
            cout << "The tree has " << i <<  "nodes\n";
            break;
        }
	}
	input.close();

	return 0;
}
