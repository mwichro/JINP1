# JINP1
![](https://github.com/mwichro/JINP1/blob/main/image_2020-11-19_030127.png)

Projekt demonstrujący kolejne elementy języka C++, rozbudowywany w czasie trwania ćwiczeń
Webowy interface GitHub psuje formatowanie, widać to w ostatnim akapicie. Polecam wyświetlać surowy plik readme.

Ćwiczenia 16.11.2020
Uzupełnienia:
+ https://infotraining.bitbucket.io/cpp-11/move.html
+ Operator konwersji: http://cpp0x.pl/dokumentacja/standard-C++/Przeciazanie-operatorow/operator-konwersji/1661
+ Przeciążanie opertatora = https://www.learncpp.com/cpp-tutorial/9-14-overloading-the-assignment-operator/
+ pod koniec zajęc (tzn chwilę po 14:00)  pojawiło się słowo mutable, jest demonstracja w implementacji metody klasy a 

Ćwiczenia 26.10.2020:

Użyteczne narzędzia:

Ja używam Ecipse CDT, zapewnia on dobrą integrację z CMake, Git. Do pobrania tutaj:
https://www.eclipse.org/cdt/ , jest tez w repozytorium wielu systemów linux, chciaż zwykle wersja tam jest nieco starsza.

clang-format : niesamowicie pomocne narzędzie do indentacji kodu. Reguluje wcięcia, puste linie, położenie nawiasów, dodaje niektóre komentarze. 
W przypadku ubuntu instalacja sprowadza się do:
 sudo apt-get install clang-format
 
 Integracja clang-format z Eclipse:
Help-> Eclipse Marketpalace -> wyszukujemy CppStyle i instalujemy. Ctrl+Shift+F formatuje nam kod. Clang opiera się na pliku konfiguracyjnym.clang-format, przykładowy jest w tym repozytorium.
Klikajac prawym przyciskiem na projekt wybieramy Project Properties, z lewej zakładka CppStyle. Polecam włączyć formatowanie clang przy zapisaniu.
 
 CMake: Podobno Państwo to znają, zresztą plik CMakeLists.txt powinien być samowyjaśniający. Dodam tylko, że istnieją takie użyteczne narzędzia jak ccmake(konsola) czy cmake-gui, które umożliwiają przejrzenie wszystkich opcji cmake i edytowanie ich.  Przydatne gdy konfigurujemy duży projekt szczególnie gdy wymaga on  innych bibliotek.
 
 Pomocne materiały:
Polecam zapoznać się z tym:https://www.dealii.org/current/doxygen/deal.II/CodingConventions.html
Biblioteka Deal.II jest jedną z najpopularniejszych bibiotek do rozwiązywania równań różniczkowych cząstkowych. Domyślam się, że Państwa to średnio interesuje, (chociaż czasem generuje ładne obrazki: https://www.youtube.com/watch?v=N74xb7rWnXs). To na co chcę zwrócić Państwa uwagę to styl programowania, uporządkowany sposób pisania kodu jest jednym z głównych pododów, dlaczego ona stałą się popularne (w świecie metod numerycznych).
Drugim powodem jest bardzo rozbudowana dokumentacja. Akurat tutoriale dot. nie przydadzą się Państwu do szczęscia (aczkolwiek warto zajrzeć po wiecej ładnych obrazków), ale powstały także wykłady video, w tym parę o programowaniu i narzędziach ułatwiających pracę z kodem:

https://www.math.colostate.edu/~bangerth/videos.html
Polecam:
+ Lecture 24:	Best programming practices: Defensive programming and other ways to avoid bugs    
+ Lecture 32.5	Learning to use modern tools, part 5a: Version control systems (VCSs), Subversion
+ Lecture 32.55	Learning to use modern tools, part 5a1: Version control systems (VCSs), Subversion – undoing, branching and merging
+ Lecture 32.75	Learning to use modern tools, part 5b: Version control systems (VCSs), git
+ Lecture 32.8	Learning to use modern tools, part 5b1: Version control systems (VCSs), Using git and github in practice

Wykłady dotyczące Eclipse wykrorzystują kod zwiazany z biblioteką, więc mogą nie być dla Państwa tak przejrzyste:
+ Lecture 7	Learning to use modern tools, part 1 – Eclipse: an Integrated Development Environment (IDE), fragment 1
+ Lecture 8	Learning to use modern tools, part 1 – Eclipse: an Integrated Development Environment (IDE), fragment 2
+ Lecture 8.01	Learning to use modern tools, part 1 – Eclipse: an Integrated Development Environment (IDE). Update: Direct project setup via CMake

O szablonach w C++, chociaż jeden przykład opiera się na metodach numerycznych to wyklad powinien być zrozumiały
+ Lecture 12	A little bit of C++: Templates

To niestety opiera się na tutorialu deal.II, ale być może się przyda:
+ Lecture 25	More on debugging using Eclipse's built-in debugger

