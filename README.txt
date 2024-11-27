# LidarDriver

Questo è un progetto che implementa la gestione dei dati provenienti da un sensore LIDAR in C++.
## Descrizione

Il sensore LIDAR (Light Detection and Ranging) è utilizzato per raccogliere dati spaziali tramite il raggio laser. Questo progetto implementa la lettura dei dati in un buffer circolare.
Come inizio abbiamo creato il file lidar_driver.h il quale contiene la classe Lidar_Driver, insieme ai metodi pubblici e privati, e la variabile constante BufferDIM che controlla la dimensione massima del buffer.
Dove aver creato la classe, abbiamo creato il file lidar_driver.cpp nel quale implementiamo i metodi della clase lidar_driver.h, iniziando con new_scan il quale contiene il contenuto della nuova scansione, il metodo get_scan prende il primo contenuto del buffer lo salva e poi lo elimina, salvandolo possiamo usarlo per altre funzioni. Poi abbiamo il metodo get_distance, che dato un angolo specifico, stampa la distanza che il lidar ha rilevato, sempre se l'angolo e un multiplo della risoluzione angolare, se no stampa la misura piu vicina al angolo richiesto. Abbiamo anche fatto l'overload del operatore << per stampare i contenuti del buffer.
Dopo aver implementato tutte queste funzioni abbiamo terminato anche il main.cpp, dove viene eseguito il codice.

Abbiamo lavorato tutti insieme senza avere una parte specifica su cui uno lavorava.
Silvia Marcato
Giulia Girotto 
Samuele Caushaj
