#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

// //join
// void run(int count){
//     while(count-- >0){
//         cout<<"TradingMrity"<<endl;
//     }
//     std::this_thread::sleep_for(chrono::seconds(5));
// }

// int main(){
//     std::thread t1(run, 10);
//     cout<<"main()"<<endl;

//     t1.join();
//     if(t1.joinable()){
//         t1.join();
//     }
//     cout<<"main() after"<<endl;
//     return 0;
// }


//Detach 
void run(int count){
    while(count-- >0){
        cout<<count<<"TradingMrity"<<endl;
    }
    cout<< "thread finished" <<endl;
}

int main(){
    std::thread t1(run, 10);
    cout<<"main()"<<endl;

    t1.detach();
    // if(t1.joinable()){
    //     t1.detach();
    // }

    cout<<"main() after"<<endl;
    //std::this_thread::sleep_for(chrono::seconds(5));
    return 0;
}