#ifndef LIDAR_DRIVER_H
#define LIDAR_DRIVER_H

#include <iostream>
#include <vector>

const int BUFFER_DIM=10;    //definisco la dimensione del buffer (es. 10 scansioni)

class LidarDriver{
public:
    LidarDriver(int res);       //costruttore che imposta risoluzione angolare
    
    void new_scan(const std::vector<double>& scan);     //aggiunge nuova scansione al buffer
    
    std::vector<double> get_scan();             //recupera scansione più vecchia

    double get_distance(double angle)const;     //dà valore della distanza per un certo angolo
    
    void clear_buffer();    //cancella tutte le scansioni nel buffer

    friend std::ostream& operator<<(std::ostream& os, const LidarDriver& driver); //overloading dell'operatore << che stampa la scansione più recente


private:
    std::vector<std::vector<double>> buffer;   //buffer con scansioni
    int resolution; //risoluzione angolare in gradi
};

#endif #LIDAR_DRIVER_H
