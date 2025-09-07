#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main() {
    cout << "Current Path: " << fs::current_path() << endl;
}