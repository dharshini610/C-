#include <iostream>
#include <memory>
using namespace std;
class FileHandler {
public:
    FileHandler(const std::string& filename) {
        file = fopen(filename.c_str(), "r");
        if (!file) {
            throw std::runtime_error("Failed to open file");
        }
    }
    ~FileHandler() {
        if (file) {
            fclose(file);
        }
    }
    void readFile() {
        char buffer[1024];
        while (fgets(buffer, 1024, file)) {
            std::cout << buffer;
        }
    }
private:
    FILE* file;
};
int main() {
    try {
        FileHandler fileHandler("example.txt");
        fileHandler.readFile();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}