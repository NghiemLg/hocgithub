#include <iostream>
#include <cmath>

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Hàm nhập/xuất
    friend std::istream& operator>>(std::istream& in, Complex& c);
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);

    // Các toán tử +, -, *, +=, -=, *=
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex& operator+=(const Complex& other) {
        real += other.real;
        imag += other.imag;
        return *this;
    }

    Complex& operator-=(const Complex& other) {
        real -= other.real;
        imag -= other.imag;
        return *this;
    }

    Complex& operator*=(const Complex& other) {
        float new_real = real * other.real - imag * other.imag;
        imag = real * other.imag + imag * other.real;
        real = new_real;
        return *this;
    }

    // Các toán tử so sánh ==, !=, >, <
    bool operator==(const Complex& other) const {
        return real == other.real && imag == other.imag;
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    bool operator>(const Complex& other) const {
        return std::sqrt(real * real + imag * imag) > std::sqrt(other.real * other.real + other.imag * other.imag);
    }

    bool operator<(const Complex& other) const {
        return std::sqrt(real * real + imag * imag) < std::sqrt(other.real * other.real + other.imag * other.imag);
    }
};

std::istream& operator>>(std::istream& in, Complex& c) {
    std::cout << "Enter real part: ";
    in >> c.real;
    std::cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1, c2;

    std::cout << "Enter first complex number:\n";
    std::cin >> c1;

    std::cout << "Enter second complex number:\n";
    std::cin >> c2;

    std::cout << "First complex number: " << c1 << "\n";
    std::cout << "Second complex number: " << c2 << "\n";

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";

    if (c1 == c2) {
        std::cout << "The two complex numbers are equal.\n";
    } else {
        std::cout << "The two complex numbers are not equal.\n";
    }

    if (c1 > c2) {
        std::cout << "The first complex number is greater.\n";
    } else {
        std::cout << "The second complex number is greater.\n";
    }

    return 0;
}
0.....