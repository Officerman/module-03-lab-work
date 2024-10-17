#include <iostream>
#include <string>

// применение принципа DRY
class OrderService {
private:
    double getTotal(int qty, double price) {
        return qty * price;
    }

    void printOrder(const std::string& name, double total, const std::string& action) {
        std::cout << action << " for " << name << ". Total: " << total << std::endl;
    }

public:
    void createOrder(const std::string& name, int qty, double price) {
        double total = getTotal(qty, price);
        printOrder(name, total, "Order created");
    }

    void updateOrder(const std::string& name, int qty, double price) {
        double total = getTotal(qty, price);
        printOrder(name, total, "Order updated");
    }
};

// применение принципа KISS
class Car {
public:
    void start() {
        std::cout << "Car is starting" << std::endl;
    }

    void stop() {
        std::cout << "Car is stopping" << std::endl;
    }
};

class Truck : public Car {
public:
    void start() {
        std::cout << "Truck is starting" << std::endl;
    }

    void stop() {
        std::cout << "Truck is stopping" << std::endl;
    }
};

// Применение принципа YAGNI
class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }
};

// Основная функция для демонстрации
int main() {
    // Демонстрация работы
    OrderService orderService;
    orderService.createOrder("Book", 2, 15.5);
    orderService.updateOrder("Pen", 5, 1.2);

    // Демонстрация работы Car и Truck
    Car car;
    car.start();
    car.stop();

    Truck truck;
    truck.start();
    truck.stop();

    // Демонстрация MathOperations
    MathOperations mathOps;
    int sum = mathOps.add(10, 5);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
