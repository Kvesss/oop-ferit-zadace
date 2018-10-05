# OOP FERIT Zadaće

Početni projekt za rješavanje domaćih zadaća na kolegiju Objektno orijentirano progamiranje na FERIT-u.

## Git

Git je besplatan sustav otvorenog koda namijenjen distribuiranom upravljanju verzijama izvornog koda. Danas je on standard i podrazumijeva se barem osnovno poznavanje rada s gitom (ili, eventualno, drugim sličnim sustavom) u svim razvojnim timovima na projektima svih veličina. 

Kako biste započeli raditi s gitom, potrebno ga je preuzeti i instalirati. To je moguće napraviti na: [Git preuzimanje](https://www.git-scm.com). Iako ga je moguće koristiti i kroz grafičko sučelje, pune mogućnosti i dublje razumijevanje u svakom se slučaju dobivaju njegovom uporabom kroz konzolu. Na windowsima uz instalaciju gita dolazi mogućnost instalacije _git bash_ alata (_shella_) što je svakako preporučeno. Također, zgodno je dodati git bash u kontekstualni izbornik prilikom instalacije kako bi se on pokretao odmah u željenom direktoriju. Nakon instalacije gita, potrebno je podesiti korisničko ime i e-mail adresu, a to se postiže naredbama
```
git config --global user.name "YOUR_USERNAME"
git config --global user.email "your_email_address@example.com"
```

## Osnove gita

Git je moguće rabiti odmah nakon instalacije, a jednostavne upute moguće je pronaći (s obzirom da će se kasnije rabiti Gitlab) na [Git basics](https://docs.gitlab.com/ee/gitlab-basics/). Osim ovoga, dobar resurs predstavlja i knjiga [Pro git](https://git-scm.com/book/en/v2).

Kako biste testirali instalaciju i upoznali se s gitom, kreirajte prazan direktorij naziva "Projekt", u njemu korištenjem 
```
git init
```
inicijalizirajte prazan repozitorij. Zatim, korištenjem
```
git status
```
provjerite trenutno stanje repozitorija. Trebao bi biti prazan. Ako ga otvorite u file exploreru s uključenim prikazom skrivenih datoteka, onda bi trebao biti vidljiv samo skriveni direktorij .git. U direktoriju "Projekt" kreirajte tekstualnu datoteku "info.txt" s vlastitim imenom i prezimenom zapisanim unutra. Nakon toga, provjerite stanje repozitorija.

Git prati stanje svih datoteka u direktoriju koje nisu ignorirane. Crvenom bojom teksta označene su datoteke koje su izmijenjene (dodane, obrisane, promijenjenog sadržaja). Ono što git omogućuje je kreiranje slike (_snapshota_) cjelokupnog sadržaja direktorija i njene pohrane (stvara se točka u vremenu na koju se moguće vratiti). Da bi točka mogla biti stvorena, datoteke je potrebno dodati u tzv. _staging_ područje. Ovo se postiže naredbom
```
git add --all
git status
```

Kada su željene datoteke dodane u _staging_ područje, moguće je snimiti sliku naredbom 

```
git commit -m "Initial commit. Added info.txt"
git status
```
Oznaka -m govori da će uz tu sliku biti naveden i opis koji slijedi iza nje. Ovo je jako korisno jer će olakšati kasnije baratanje slikama. Poruke uvijek trebaju biti smislene!



## Gitlab

## Korištenje projekta