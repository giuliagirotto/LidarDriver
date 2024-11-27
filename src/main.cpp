#include <iostream>
#include <vector>
#include "lidar_driver.h"

int main(){
    //oggetto LidarDriver con risoluzione angolare di 1°
    LidarDriver lidar(1);

    //aggiungo scansione
    std::vector<double>scan={1.01, 1.10, 1.65, 1.45, 1.3, 0.98, 0.9, 0.88, 0.75};
    lidar.new_scan(scan); 

    //stampo ultima scansione
    std::cout<<"Ultima scansione: "<<lidar;

    //lettura di un angolo specificato
    //double distance=lidar


    //stampo ultima scansione
    std::cout<<"Ultima scansione: "<<lidar;

    }
