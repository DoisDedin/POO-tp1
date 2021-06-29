#include <iostream>
#include "../Utils/layout.hpp"

using namespace std;

int main() {
    int result;
    Layout layout = Layout();
    layout.resizeConsole();
    result = layout.layoutPrincipal();
    cout << result << endl;
    system("pause");
    return 0;
}
