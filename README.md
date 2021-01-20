# Egzaminui
Programa susideda iš trijų dalių. Visur yra darbas su failais
## 1 Dalis
Pirmoje dalyje iš failo nuskaitomi visi elementai po vieną žodį ir jei yra simboliai, jie yra pašalinami, taip, kad kiekvienas žodis būtų "švarus".
Tai įdedama į [map](https://en.cppreference.com/w/cpp/container/map) struktūrą ir skaičiuojama kiek kartų pasikartoja žodis - tokia yra key reikšmė.
Tada duomenys kiekvienam (atskiram) žodžiui su jo pasikartojimų skaičiumi išvedama į naują failą.
## 2 Dalis
URL ieškojimas. Nuskaitant kiekvieną žodį iš failo, yra tikrinama ar jame yra adresams būdingų dalių (t.y frazė www., .com, arba http) ir žodžiai kuriuose tai yra išvedami į naują failą.
## 3 Dalis 
Lentelė. Jei key yra didesnis už 1, tikrinama, ar žodis yra eilutėje (failas nuskaitomas jau po eilutę) ir, jei toks žodis yra, eilutės reikšmė patalpinama į vektorių.
Duomenys surašomi į failą lentelės pavidalu, tačiau ne cross-reference.

## Instrukcija
Naudotojui nereikia įvesti nieko papildomo, tik, jei jis norėtų tikrinti kitą tekstą, pakeisti failo, kuris nuskaitomas, pavadinimą, bei į projekto direktoriją įkelti norimą failą su tekstu.
