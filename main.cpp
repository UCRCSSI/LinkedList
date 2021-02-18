#include "IntList.h"

int main() {
    // This Code will be used to auto-run/grade. Make sure this is only code in main at submission
    IntList List;
    List.pop_back();
    List.push_back(5);
    List.push_back(3);
    List.PrintList();
    List.pop_back();
    List.PrintList();
    List.push_back(4);
    List.push_back(-3);
    List.remove(1);
    List.PrintList();
    // Write your own cases below here
}
