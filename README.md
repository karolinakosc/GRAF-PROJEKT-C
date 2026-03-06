# Wizualizacja grafów planarnych

Celem projektu jest stworzenie dwóch aplikacji – pierwszej w języku C, a drugiej w języku Java – służących do wyznaczania współrzędnych węzłów w celu estetycznej wizualizacji grafu planarnego. Aplikacja napisana w C ma być programem konsolowym, sterowanym wyłącznie za pomocą argumentów i opcji z linii poleceń. Z kolei aplikacja w Javie będzie programem okienkowym (GUI), sterowanym zdarzeniami.

Wejściem dla programu będzie plik tekstowy zawierający definicję grafu w postaci listy krawędzi.

Głównym zadaniem aplikacji w C jest przetworzenie tych danych i obliczenie optymalnego położenia wierzchołków na płaszczyźnie. Z uwagi na to, że istnieje wiele metod wyznaczania współrzędnych, w ramach projektu zaimplementowane, przetestowane i porównane zostaną co najmniej dwa różne algorytmy (np. algorytm Fruchtermana–Reingolda, triangulacja czy twierdzenie Tutte’a).

Wynikiem działania programu ma być plik tekstowy lub binarny (wybór formatu zależy od użytkownika). Plik wyjściowy będzie zawierał wyliczoną listę współrzędnych (X, Y) przypisanych do poszczególnych wierzchołków.

## Dokumentacja projektu C

Z uwagi na podział prac, część realizowana w języku C musi zostać opatrzona szczegółową dokumentacją, w skład której wchodzą:

1. **Dokumentacja funkcjonalna** – opisująca sposób działania programu z perspektywy użytkownika.
2. **Dokumentacja implementacyjna** – przedstawiająca szczegóły techniczne, architekturę rozwiązania oraz ścisłe specyfikacje formatów wejścia i wyjścia.
3. **Końcowa dokumentacja projektu** – podsumowująca zrealizowane zadanie.

**Ważne:** Dokumentacja funkcjonalna oraz implementacyjna (punkty 1 i 2) zostanie przekazana innej grupie projektowej. Będzie ona stanowić podstawę do zaprogramowania przez nich aplikacji w języku Java, która musi poprawnie wczytywać wygenerowane przez nasz program pliki wynikowe.
