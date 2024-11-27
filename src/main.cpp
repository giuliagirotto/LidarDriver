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

    lidar.clear_buffer();

    //stampo ultima scansione
    std::cout<<"Ultima scansione: "<<lidar;

    scan={1.01, 1.10, 1.65, 1.45, 1.3, 0.98, 0.9, 0.88, 0.75};
    lidar.new_scan(scan); 

    //lettura di un angolo specificato
    double angle=2;
    std::cout<<"distanza associata all'angolo"<<angle<<"->"<<lidar.get_distance(angle);  
    



    }
