//1.Notify other thread
//2.waiting for some condition

#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

std::condition_variable cv;
std::mutex m;
long balance = 0;

void addMoney(int money){
    std::lock_guard<mutex> lg(m);
    balance += money;
    cout<< "Amount added current balance: "<<balance<<endl;
    cv.notify_one();
}

void withdrowMoney(int money){
    
}