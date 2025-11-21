# InertialDriver
Progetto intermedio ing. informatica 2025/2026
gruppo: Try, catch and throw
-21/11 Laboratorio in presenza:
Inizio il ragionamento sulla struttura del progetto, e di come si vogliono salvare le informazioni all'interno delle "letture" e "misure". 
Idea iniziale: scrivere due classi Lettura e scrittura, entrambe dotate di file header e file cpp con costruttori e un solo metodo.
Revisione del pomeriggio: Dopo aver scritto la classe Lettura e Misura ci rendiamo conto che ha piu' senso dichiare i due oggetti come struct e non come classi; questo semplifica
sia l'accesso hai dati (perche' public) e inoltre permette l'accesso diretto all'array stile C misura. Piu' efficiente sia per l'accesso e sia per la mole di lavoro perche' non 
bisogna scrivere metodi che risulterebbero piu' macchinosi.
