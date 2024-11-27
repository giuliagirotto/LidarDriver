# LidarDriver

Questo è un progetto che implementa la gestione dei dati provenienti da un sensore LIDAR in C++.
## Descrizione

Il sensore LIDAR (Light Detection and Ranging) è utilizzato per raccogliere dati spaziali tramite un raggio laser. Questo progetto implementa la lettura dei dati in un buffer circolare.
Per iniziare abbiamo creato il file lidar_driver.h, che contiene la classe Lidar_Driver, insieme ai metodi pubblici e privati, e la variabile costante BUFFERDIM che controlla la dimensione massima del buffer.
Dopo aver creato la classe, abbiamo realizzato il file lidar_driver.cpp, nel quale implementiamo i metodi della classe definita in lidar_driver.h. Abbiamo iniziato con il metodo new_scan, che aggiunge il contenuto della nuova scansione. Il metodo get_scan preleva il primo contenuto del buffer, lo salva e poi lo elimina. Salvandolo, possiamo usarlo per altre funzioni. Il metodo clear_buffer elimina tutti i contenuti all'interno del buffer.

Inoltre, abbiamo il metodo get_distance, che, dato un angolo specifico, stampa la distanza rilevata dal LIDAR, sempre che l'angolo sia un multiplo della risoluzione angolare. In caso contrario, stampa la misura più vicina all'angolo richiesto. Abbiamo anche fatto l'overload dell'operatore << per stampare i contenuti del buffer.

Dopo aver implementato tutte queste funzioni, abbiamo completato anche il file main.cpp, dove viene eseguito il codice. La scansione comprende angoli da [0,180] gradi, ovvero la prima misura è relativa all'angolo 0, e l'ultima all'angolo 180.


Il progetto è stato così suddiviso:
Silvia Marcato ha lavorato sulla creazione del file lidar_driver.h, definendo la classe Lidar_Driver con i relativi metodi pubblici e privati, e implementando la variabile costante BUFFERDIM, utilizzata per controllare la dimensione massima del buffer.

Giulia Girotto ha curato l’implementazione dei metodi della classe all’interno del file lidar_driver.cpp. Tra i metodi sviluppati ci sono: new_scan, per aggiungere nuove scansioni al buffer; get_scan, per prelevare il primo contenuto del buffer e usarlo in altre funzioni; e clear_buffer, per eliminare tutti i contenuti presenti nel buffer. Inoltre, ha realizzato il metodo get_distance, che, dato un angolo specifico, calcola la distanza rilevata dal LIDAR, gestendo anche gli angoli non multipli della risoluzione angolare, e ha effettuato l’overload dell’operatore << per stampare i contenuti del buffer.

Samuele Caushaj si è occupato dello sviluppo del file main.cpp, nel quale è stato scritto il codice eseguibile. Qui sono state configurate le scansioni che comprendono angoli da [0,180] gradi, con la prima misura relativa all’angolo 0 e l’ultima all’angolo 180, e sono stati integrati e testati i metodi sviluppati.

Dopo aver completato ciascuna delle parti, abbiamo rivisto il lavoro insieme, verificando l’integrazione tra i file e garantendo il corretto funzionamento del progetto nel suo complesso.
