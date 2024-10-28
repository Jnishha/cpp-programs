#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
private:
    std::vector<T> data;
public:
    void push(const T& value) {
        data.push_back(value);
    }
    void pop() {
        if (data.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        data.pop_back();
    }
    T top() const {
        if (data.empty()) {
            throw std::out_of_range("Stack<>::top(): empty stack");
        }
        return data.back();
    }
    bool isEmpty() const {
        return data.empty();
    }
    size_t size() const {
        return data.size();
    }
};

int main() {
    Stack<int> intStack;

    intStack.push(25);
    intStack.push(57);
    intStack.push(89);
    std::cout << "Top element: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;
    intStack.push(89);
	std::cout << "Top element after push: " << intStack.top() << std::endl;	
    std::cout << "Is the stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << std::endl;
	return 0;
}

