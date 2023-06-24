#include "MeticRegister.h"
#include <iostream>

void test() {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        int resp_t = i + 1;
        int wait_t = i + 2;

        MetricRegister::instance().add_metr(resp_t, wait_t);

        int result = MetricRegister::instance().count_cometr(i);

        if (result == resp_t + wait_t) {
            count += 1;
        } else {
            std::cout << "Test failed for key " << i <<  std::endl;
        }
        if (count == 10) {std::cout << "All tests passed" << std::endl;}

    }
}

int main() {
    test();

    MetricRegister::instance().add_metr(1, 3);
    MetricRegister::instance().add_metr(4, 11);
    MetricRegister::instance().add_metr(2, 9);
    MetricRegister::instance().add_metr(3, 22);
    MetricRegister::instance().add_metr(12, 18);


    std::cout << "Count_metric for key 10: "
              << MetricRegister::instance().count_cometr(10) << std::endl;
    std::cout << "Count_metric for key 11: "
              << MetricRegister::instance().count_cometr(11) << std::endl;
    std::cout << "Count_metric for key 12: "
              << MetricRegister::instance().count_cometr(12) << std::endl;
    std::cout << "Count_metric for key 13: "
              << MetricRegister::instance().count_cometr(13) << std::endl;
    std::cout << "Count_metric for key 14: "
              << MetricRegister::instance().count_cometr(14) << std::endl;

    return 0;
}
