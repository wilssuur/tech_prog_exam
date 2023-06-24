#include <map>
#include <utility>

class MetricRegister {
public:
    static MetricRegister &instance();

    bool add_metr(int resp_t, int wait_t);
    bool show_mert();
    int count_cometr(int key);

private:
    std::map<int, std::pair<int, int>> metrics;
    int nextKey;

    MetricRegister();
    MetricRegister(const MetricRegister &) = delete;
    void operator=(const MetricRegister &) = delete;
};
