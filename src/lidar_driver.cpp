#include "LidarDriver.h"
#include <iostream>

LidarDriver::LidarDriver(int res):resolution(res){
    //
}

void LidarDriver::new_scan(const std::vector<double>& scan){
    //se il buffer è pieno sovrascrivo la scansione più vecchia
    if(buffer.size()==BUFFER_DIM) //...
}

std::vector<double> new_scan=scan;      //aggiungo la nuova scansione

int val_max=1+180/resolution;       //numero di valori massimi per ciascuna scansione

if(new_scan.size()<val_max){
    new_scan.resize(val_max, 0.0);  //completo con 0
}else if(new_scan.size()>val_max){
    new_scan.resize(val_max);   //taglio al valore massimo
}
buffer.push_back(new_scan);

std::vector<double>LidarDriver::get_scan(){
    if(buffer.empty()) return{};    //se non ci sono scansioni, restituisce un vector vuoto

    //rimuovo la scansione più vecchia
    //...
}

void LidarDriver::clear_buffer(){
    buffer.clear()      //rimuove tutte le scansioni dal buffer
}

double LidarDriver::get_distance(double angle)const{

}


//overloading di <<
//...