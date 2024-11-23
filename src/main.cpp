#include <iostream>
#include <vector>
#include "LidarDriver.h"

int main(){
    //oggetto LidarDriver con risoluzione angolare di 1°
    LidarDriver lidar(1);

    //aggiungo scansione
    std::vector<double>scan={1.01, 1.10, 1.65, 1.45, 1.3, 0.98, 0.9, 0.88, 0.75};
    liadr.new_scan(scan); 

    //stampo ultima scansione
    std::cout<<"Ultima scansione: "<<lidar;

    //lettura di un angolo specificato
    double distance=lidar

    //una scansione
    std::vector<double>scan={0.1, 0.15, 0.13, 0.22, 0.76, 0.99};
    liadr.new_scan(scan); 

    //stampo ultima scansione
    std::cout<<"Ultima scansione: "<<lidar;

    }