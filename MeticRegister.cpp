#include "MeticRegister.h"
#include <iostream>

MetricRegister &MetricRegister::instance() {
    static MetricRegister instance;
    return instance;
}

bool MetricRegister::add_metr(int resp_t, int wait_t) {
    metrics[nextKey++] = std::make_pair(resp_t, wait_t);
    return true;
}

bool MetricRegister::show_mert() {
    if (metrics.empty())
        return false;


    return true;
}

int MetricRegister::count_cometr(int key) {
    if (metrics.find(key) == metrics.end())
        return -1;

    return metrics[key].first + metrics[key].second;
}

MetricRegister::MetricRegister() : nextKey(0) {}
