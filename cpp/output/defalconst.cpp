#include <iostream>

class Rect {
private:
    static int st;
    int a;
    int b;
public:
    Rect() : a(0), b(0) {
        st++;
        std::cout << "Static variable st: " << st << std::endl;
    }

    ~Rect() {
        std::cout << "Destructor is called\n";
        st--;
        std::cout << "Static variable st: " << st << std::endl;
    }

    void area() {
        std::cout << "Area = " << a * b << std::endl;
    }

    void show() {
        std::cout << "Dimensions: " << a << " " << b << std::endl;
        std::cout << "Static variable st: " << st << std::endl;
    }
};

// Initialize static variable outside the class
int Rect::st ;

int main() {
    Rect A;
    

    Rect A2;
    

    
}
