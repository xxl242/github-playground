#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);
    const int target = dist(gen);

    std::cout << "我想了个 1 到 100 的数，你猜。\n";

    int guess = 0;
    int tries = 0;
    while (std::cin >> guess) {
        ++tries;
        if (guess < target) {
            std::cout << "小了。\n";
        } else if (guess > target) {
            std::cout << "大了。\n";
        } else {
            std::cout << "中了！用了 " << tries << " 次。\n";
            break;
        }
    }
    return 0;
}
