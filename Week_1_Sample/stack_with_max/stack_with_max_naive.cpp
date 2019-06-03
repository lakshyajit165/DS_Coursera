#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using std::cin;
using std::string;
using std::vector;
using std::cout;
using std::max_element;

class StackWithMax {
    vector<int> stack;
    int max_ele;
  public:

    void Push(int value) {
        if(stack.empty()){
            stack.push_back(value);
            max_ele = value;
        }else if(value > max_ele){
            stack.push_back(2*value - max_ele);
            max_ele = value;
        }else
            stack.push_back(value);   
    }

    void Pop() {
        if(stack.empty())
            return;
        else{
            int t = vector.back();
            stack.pop_back();
            if(t > max_ele)
                max_ele = 2*max_ele - t;
        }    
       
    }

    int Max(){
        if(stack.empty())
            return;
        else
            return max_ele;
    }
};

int main() {
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    StackWithMax stack;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            stack.Push(std::stoi(value));
        }
        else if (query == "pop") {
            stack.Pop();
        }
        else if (query == "max") {
            cout << stack.Max() << "\n";
        }
        else {
            assert(0);
        }
    }
    return 0;
}