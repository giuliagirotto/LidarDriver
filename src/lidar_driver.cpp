#include "LidarDriver.h"
#include <iostream>

LidarDriver::LidarDriver(int res):resolution(res){
    if(res <=0){ //caso in cui la risoluzione risulta negativa
        throw stf::invalid_argument("La risoluzione deve essere positiva");
}

void LidarDriver::new_scan(const std::vector<double>& scan){
    //se il buffer è pieno sovrascrivo la scansione più vecchia
    if(buffer.size()==BUFFER_DIM) {
        buffer.erase(buffer.begin());
    }
}

std::vector<double> new_scan=scan;      //aggiungo la nuova scansione

int val_max=1+180/resolution;       //numero di valori massimi per ciascuna scansione

if(new_scan.size()<val_max){
    new_scan.resize(val_max, 0.0);  //completo con 0 se il valore è più piccolo
}else if(new_scan.size()>val_max){
    new_scan.resize(val_max);   //taglio se è il valore massimo
}
buffer.push_back(new_scan); //aggiungo il nuovo scanner al buffer

std::vector<double>LidarDriver::get_scan(){ //recupero e rimuovo la scansione più vecchia
    if(buffer.empty()) return{};    //se non ci sono scansioni, restituisce un vector vuoto
    }
    std::vector<double>oldest_scan = buffer.front();
    buffer.erase(buffer.begin()); //rimuovo la scansione più vecchia
    return oldest_scan;
}

//rimuove tutte le scansioni dal buffer
void LidarDriver::clear_buffer(){
    buffer.clear()      
}

//stampa la distanza di un angolo specifico in base alla scansione più recente
double LidarDriver::get_distance(double angle)const{
    if (buffer.empty()){ //caso in cui il buffer sia vuoto
        throw std::runtime_error("Non ci sono scansioni disponibili");
    }

    if(angle < -180.0 || angle > 180.0){ //caso in cui l'angolo non sia compreso nel range [-180,180]
        throw std::out_of_range("L'angolo deve essere compreso tra -180 e 180 gradi"); 
    }

    //...
}

//overloading di <<
//stampa il contenuto di "LidarDriver Buffer" 
std :: ostream& operator <<(std::osteam& os, const LidarDriver& driver){
    os << "LidarDriver Buffer:\n";
    for (size_t i = 0; i < driver.buffer.size(); ++i){
        os << "Scan " << i + 1;
        for (const double& value : driver.buffer[i]){
            os << value << " ";
        }
        os << "\n";
    }
    return os;
} 
