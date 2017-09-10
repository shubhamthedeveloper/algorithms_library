#include<iostream>
#include <sys/time.h>
using namespace std;

long long fibonacci(int input){
    if (input == 0)
        return 0;
    if (input == 1)
        return 1;
    return fibonacci(input -1 ) + fibonacci(input -2);
}

long getTimeinMicroSeconds() {
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}

long long betterfibonacci(int input) {
    long long  first = 0;
    long long second = 1;
    for (int i= 0; i < input; i++) {
        long long  temp = second;
        second = first + second;
        first = temp;
    }
    return first;
}

int main() {
    int n;
    cout << "Please enter input";
    cin >> n;
    long starttime, endtime;
    starttime = getTimeinMicroSeconds();
    betterfibonacci(n);
    endtime = getTimeinMicroSeconds();
    cout << "time iterative = " <<endtime -starttime << endl;

    starttime = getTimeinMicroSeconds();
    fibonacci(n);
    endtime = getTimeinMicroSeconds();
    cout << "time recursive = " <<endtime -starttime << endl;
}
