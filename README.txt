# LidarDriver

Questo è un progetto che implementa la gestione dei dati provenienti da un sensore LIDAR in C++.
## Descrizione

Il sensore LIDAR (Light Detection and Ranging) è utilizzato per raccogliere dati spaziali tramite un raggio laser. Questo progetto implementa la lettura dei dati in un buffer circolare.
Per iniziare abbiamo creato il file lidar_driver.h, che contiene la classe Lidar_Driver, insieme ai metodi pubblici e privati, e la variabile costante BUFFERDIM che controlla la dimensione massima del buffer.
Dopo aver creato la classe, abbiamo realizzato il file lidar_driver.cpp, nel quale implementiamo i metodi della classe definita in lidar_driver.h. Abbiamo iniziato con il metodo new_scan, che aggiunge il contenuto della nuova scansione. Il metodo get_scan preleva il primo contenuto del buffer, lo salva e poi lo elimina. Salvandolo, possiamo usarlo per altre funzioni. Il metodo clear_buffer elimina tutti i contenuti all'interno del buffer.

Inoltre, abbiamo il metodo get_distance, che, dato un angolo specifico, stampa la distanza rilevata dal LIDAR, sempre che l'angolo sia un multiplo della risoluzione angolare. In caso contrario, stampa la misura più vicina all'angolo richiesto. Abbiamo anche fatto l'overload dell'operatore << per stampare i contenuti del buffer.

Dopo aver implementato tutte queste funzioni, abbiamo completato anche il file main.cpp, dove viene eseguito il codice. La scansione comprende angoli da [0,180] gradi, ovvero la prima misura è relativa all'angolo 0, e l'ultima all'angolo 180.

Abbiamo lavorato tutti insieme senza avere una parte specifica su cui uno lavorava.

Silvia Marcato
Giulia Girotto
Samuele Caushaj
