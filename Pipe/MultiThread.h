#include <iostream>
#include <thread>
#include <mutex>

/*
create multiple threads which spin in a while loop
each will be able to run and do computations

add a mutex : lock it so that it creates a 



*/

std::vector<double> vec;
std::vector<double>::iterator it;

double variance(){
    double mean, variance;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        mean += *it;
    }
    mean /= vec.size();
    for (it = vec.begin(); it != vec.end(); it++)
    {
        *it -= mean;
        *it = *it ** 2;
    }
    for (it = vec.begin(); it != vec.end(); it++)
    {
        variance += *it;
    }
    variance /= vec.size();

    return variance;

}

class MultiThread {

private:

public:
 Pipe();
 ~Pipe();

};