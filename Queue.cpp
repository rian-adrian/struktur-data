#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

  
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);


    std::cout << "Elemen pada depan antrian: " << myQueue.front() << std::endl;


    std::cout << "Elemen pada belakang antrian: " << myQueue.back() << std::endl;

 
    myQueue.pop();

    std::cout << "Isi antrian setelah pop: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}

