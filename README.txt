Explicarea codului implementat

Cerinta 1
Am implementat pentru ierarhiile Product, User si clasa ShoppingCart constructori cu parametri, de copiere si operator=, folosindu-ma de reutilizarea codului prin derivare
sau agregare. Am implementat getteri, setteri, dar si alte mici functii precum addProduct, raiseQuantity, etc din clasa ShoppingCart, folosindu-ma de functiile membre ale containerelor
(insert, erase, etc.).

Cerinta 2
Am implementat 3 getteri, 2 pentru a obtine listele de useri si produse, iar al treilea pentru a popula map-ul __UserID__ProductsCart__ cu id-ul unui user (cheia) si un cos de 
cumparaturi gol, folosindu-ma de functia insert, dar si de clasa pair.

Cerinta 3
a) Parcurg lista de produse folosindu-ma de instanta server si caut produsele care indeplinesc criteriile cerute, apoi le pun la sfarsitul unei liste cu ajutorul functiei push_back.
b) Parcurg lista de useri folosindu-ma de instanta server si caut userii care indeplinesc criteriile cerute, apoi ii pun la sfarsitul unei liste cu ajutorul functiei push_back.
c) Parcurg lista de produse, iar pentru a avea acces la metodele unui clase derivate folosesc sugestia din enuntul temei, dynamic_cast. Caut produsele care indeplinesc criteriile cerute
si le pun la sfarsitul unei liste. La final, ordonez lista dupa pret. 
d) Parcurg lista de produse, caut produsele care indeplinesc criteriul si le adaug la sfarsitul listei. La final, ordonez lista dupa nume, tara si pret.
e) Mai intai, pun toate judetele intr-un vector de string-uri. Apoi parcurg vectorul creat si caut string-ul (judetul) care apare de cele mai multe ori in vector.
Parcurg apoi lista de useri si caut userii care locuiesc in judetul cu cei mai multi utilizatori si care au adresele de facturare si livrare la casa, punandu-i la finalul unei liste.
Apoi ordonez lista dupa ID si o returnez.
f) Parcurg lista de useri, fac dynamic_cast pentru a avea acces la map-ul de reduceri. Parcurg apoi map-ul de reduceri, parcurg lista de produse si caut daca ID-ul unui produs
este egal cu cheia map-ul de reduceri (care reprezinta tot ID-ul unui produs) si daca produsul respectiv este telefon sau imprimanta. Pun utilizatorii premium intr-o lista si folosec
functia unique pentru a sterge duplicatele.

Pentru sortarea listelor, m-am folosit de clasa Utility si am folosit metoda de sortare prezentata in enuntul temei. De asemenea, am folosit dynamic_cast din nou pentru a avea acces la
metodele unei clase derivate.

Cerinta 4
Am implementat getterii si setterii corespunzator.
Pentru functia processRequests, folosesc un while pentru a introduce elementele vectorului, primit ca parametru, in LRU Cache-ul nostru. Daca elementul nu se afla in vector, il adaug 
la inceput. Daca elementul se afla in vector, adaug oricum noul element la inceput, apoi sterg elementul care se repeta, in asa fel incat sa ramana doar cel de la inceput. Pentru
a vedea daca elementul se afla sau nu in vector, folosesc functia find. Folosesc functia resize pentru a reduce dimensiunea vectorului la cea ceruta pentru a obtine stadiul final.

Nu am implementat Cerinta 5 (bonusul).

Consider ca tema este foarte utila deoarece te invata sa folosesti STL-ul, sa intelegi cum functioneaza derivarea, agregarea.
Consider ca implementarea este destul de buna, dar se putea mai bine pe partea de eficienta.

Nu am intampinat dificultati majore si am descoperit lucruri noi, interesante, precum dynamic_cast.