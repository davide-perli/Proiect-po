# Comanda magazin inghetata Pufic

## Descriere :
Comanda unui client procesata de angajat, cu evidentierea unor constructori
cu/fara parametri initializati, getteri, setteri, virtualizare

Comentariile care contin cod sau inlocuiri sunt acolo pentru ca aveam 
warning-uri si a trebuit sa modific codul, dar pentru orice eventualitate
am vrut sa vad ce am modificat, impreuna cu warinig-urile primite

Am un mesaj de bun venit cu functia void salutare() unde folosesc functia
sleep_for(std::chrono::milliseconds(valoare)) din biblioteca thread pentru a crea o animatie simpatica asupra
mesajului de bun venit

Un enum cu 10 arome disponibile

Variabilele din clase declarate in private conform cerintei

Clasa Client

Constructori cu parametri, de copiere si supraincarcare operatorului =

Getteri si setteri pentru toate  variabilele, le apelez in main, pentru 
a fi vazuta functionalitatea lor([[maybe_unused]] ->daca nu-l folosesc
sa nu apara warning , [[nodiscard]] -> sa evidentiez ca e important ce e in
acel getter, dar in principiu tot din cauza warning-urilor)

Supraincarcare << , >> pentru citire si afisare, impreuna cu virtualizare
(asa am o functie care face  ceva diferit in alte clase, pun  override la
a doua, in principal ca sa nu se creeze probleme de suprapuneri sau lucruri
asemanatoare pentru ca vine folosita in mai multe clase, dar asta e o problema
la compilatoare mai vechi)

Supraincarcare == pentru stl (legat de libraria STL<vector>) pentru citirea
a n obiecte

Destructor ~comanda setat la default

Clasa Magazin

Acceseaza aromele din enum, initializeaza arome cu prima 
valoare din enum(Fistic)

Se va selecta aroma dorita alegand numarul corespunzator aromei prin variabila
optiuneEnum (am facut putina stilizare la afisarea optiunilor de arome)

Dupa se verifica aroma aleasa prin optiuneEnum si se va afisa pe ecran optiunea
aleasa precum si numele aromei(citiri, afisari valori prin operatorii de 
supraincarcare istream/ostream << , >>). Getter si setter pentru aroma, precum
si o conversie la string a aromei

Destructor virtual ~Magazin setat la default

Clasa Angajati

pointer nume initializat cu valoare vida prin nullptr si stringul telefon gol

Constructor copiere pentru nume si telefon

Inca un constructor de copiere ca dadea warning pe github dintr-un anumit motiv...

Supraincarcare << , >>, pentru citiri si afisari ale datelor, am utilizat un 
buffer pentru pointer-ul nume, pentru ca pointerii sunt sensibile si le e teama
ca vor fi modificati

Setteri, getteri si destructori

Clasa listaComenzi

Folosesc o lista sub forma de vector

Setez listaComenzi() la default

Supraincarcare << in STL vector pt afisarea listei de obiecte/comenzi

Supraincarcare += / -= pentru a adauga / sterge din lista

Supraincarcarea operatorului [], pentru citirea unui element din vector de la o pozitie data

In main creez obiectele claselor cu valori implicite sau 
citite de la tastatura , apelez setteri si getteri, am posibilitatea de a crea n obiecte
