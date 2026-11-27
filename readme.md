# Cours de Dénombrement

## 3) Listes avec répétition

### Définition
Soit $E$ un ensemble fini à $n$ éléments et $p \ge 1$ un entier. Une **p-liste** (ou **p-uplet**) d'éléments de $E$ est une suite ordonnée $(x_1, x_2, \dots, x_p)$ où chaque élément $x_i$ appartient à $E$.

* **L'ordre compte** (la place de chaque élément est importante).
* **La répétition est autorisée** (un même élément peut apparaître plusieurs fois).
* On note cet ensemble $E^p = E \times E \times \dots \times E$ ($p$ fois), soit :
  $$E^p = \{(x_1, x_2, \dots, x_p) \mid x_i \in E \text{ pour tout } i \in \{1, \dots, p\}\}$$

### Cardinal
$$\text{Card}(E^p) = \text{Card}(E) \times \text{Card}(E) \times \dots \times \text{Card}(E) = n \times n \times \dots \times n = n^p$$

### Exemple : Code PIN à 4 chiffres (avec répétition)
On veut créer un code PIN de 4 chiffres, de $0$ à $9$, avec répétition autorisée :

* Il y a $n = 10$ chiffres possibles ($0, 1, 2, 3, 4, 5, 6, 7, 8, 9$) et $p = 4$ positions.
* Chaque position possède $10$ possibilités.
* La répétition des chiffres est autorisée et l'ordre est important.
* **Exemples valides :** `1111`, `1234`, `0000`, `5588`.

**Calcul du cardinal :**
$$\text{Card}(E^4) = 10^4 = 10 \times 10 \times 10 \times 10 = 10\,000$$

---

## 4) Listes sans répétition (Arrangements)

### Définition
Soit $E$ un ensemble fini à $n$ éléments (avec $n \ge p$) et $p \ge 1$ un entier. Une **p-liste sans répétition** (ou arrangement de $p$ éléments parmi $n$) est une suite ordonnée $(x_1, x_2, \dots, x_p)$ d'éléments de $E$ **deux à deux distincts**.

* **L'ordre compte**.
* **Il n'y a pas de répétition** (chaque élément ne peut être choisi qu'une seule fois).

### Cardinal (Formule)
On note ce nombre $A_n^p$ :
$$A_n^p = n \times (n - 1) \times (n - 2) \times \dots \times (n - p + 1) = \frac{n!}{(n - p)!}$$

### Exemple : Code PIN à 4 chiffres (sans répétition)
On veut créer un code PIN de 4 chiffres de $0$ à $9$, **sans répétition** :

* $10$ choix pour le premier chiffre.
* $9$ choix pour le deuxième chiffre.
* $8$ choix pour le troisième chiffre.
* $7$ choix pour le quatrième chiffre.

**Calcul du cardinal :**
$$\text{Card} = A_{10}^4 = 10 \times 9 \times 8 \times 7 = 5\,040$$

---

## 5) Permutations

### Définition
Une **permutation** est un arrangement de **tous** les éléments d'un ensemble fini $E$ à $n$ éléments, sans répétition et où l'ordre compte.

### Exemple
Soit $E = \{A, B, C\}$. Toutes les permutations possibles des 3 éléments sont :
* `ABC`
* `ACB`
* `BAC`
* `BCA`
* `CAB`
* `CBA`

Il y a donc **$6$ permutations**.

### Comment calculer ? (Formule)
Pour un ensemble à $n$ éléments :
* $n$ possibilités pour la $1^{\text{re}}$ position.
* $(n - 1)$ possibilités pour la $2^{\text{e}}$ position.
* ...
* $1$ possibilité pour la dernière position.

$$P_n = n! = n \times (n - 1) \times (n - 2) \times \dots \times 2 \times 1$$

*(Note : $n!$ se lit « factorielle $n$ ». Par exemple : $4! = 4 \times 3 \times 2 \times 1 = 24$).*

### Exemple d'utilisation
On veut placer $4$ étudiants sur $4$ chaises différentes. Combien de dispositions sont possibles ?
* Première chaise : $4$ choix.
* Deuxième chaise : $3$ choix.
* Troisième chaise : $2$ choix.
* Quatrième chaise : $1$ choix.

$$P_4 = 4! = 4 \times 3 \times 2 \times 1 = 24 \text{ possibilités}$$

## Ensemble des parties d'un ensemble

### 1. Définition
**Ensemble des parties :** L'ensemble des parties d'un ensemble $E$, noté $\mathcal{P}(E)$, est l'ensemble de tous ses sous-ensembles, y compris l'ensemble vide $\varnothing$ et l'ensemble $E$ lui-même.

---

### 2. Propriété (Cardinal)
Soit $E$ un ensemble fini à $n$ éléments. Le nombre total de sous-ensembles de $E$ est :
$$\text{Card}(\mathcal{P}(E)) = 2^n$$

* $n$ : nombre d'éléments de $E$.
* $2^n$ : nombre total de sous-ensembles de $E$.

---

### 3. Exemple
Soit l'ensemble :
$$E = \{2, 7, 4, 9\}$$

Cet ensemble contient $4$ éléments, donc $n = 4$. Voici tous ses sous-ensembles classés par taille :

1. **Sous-ensemble à $0$ élément :**
   $$\varnothing$$

2. **Sous-ensembles à $1$ élément :**
   $$\{2\}, \; \{7\}, \; \{4\}, \; \{9\}$$

3. **Sous-ensembles à $2$ éléments :**
   $$\{2, 7\}, \; \{2, 4\}, \; \{2, 9\}, \; \{7, 4\}, \; \{7, 9\}, \; \{4, 9\}$$

4. **Sous-ensembles à $3$ éléments :**
   $$\{2, 7, 4\}, \; \{2, 7, 9\}, \; \{2, 4, 9\}, \; \{7, 4, 9\}$$

5. **Sous-ensemble à $4$ éléments :**
   $$\{2, 7, 4, 9\}$$

---

### 4. Calcul du cardinal
$$\text{Card}(\mathcal{P}(E)) = 2^4 = 16$$

## 6 Les combinaisons

### 1. Définition
Une **combinaison** de $p$ éléments parmi $n$ éléments (avec $0 \le p \le n$) est le choix simultané (ou successif sans remise) de $p$ éléments **distincts** d'un ensemble à $n$ éléments, **sans tenir compte de l'ordre**.

* **L'ordre ne compte pas** : choisir $\{A, B\}$ ou $\{B, A\}$ correspond au même sous-ensemble ($\{A, B\} = \{B, A\}$).
* **La répétition est interdite** : chaque élément de l'ensemble ne peut être choisi qu'une seule fois.

---

### 2. Exemple
Soit l'ensemble :
$$E = \{A, B, C\}$$

On veut choisir $2$ éléments parmi $3$ ($n = 3$, $p = 2$). Les combinaisons possibles sont :
$$\{A, B\}, \; \{A, C\}, \; \{B, C\}$$

Il y a donc **$3$ combinaisons** ($\text{Card} = 3$).

**Pourquoi $\{B, A\}$ n'est pas comptée séparément ?**
Parce que dans un ensemble, l'ordre des éléments n'a aucune importance : $\{B, A\}$ représente exactement la même paire que $\{A, B\}$.

---

### 3. La formule (Cardinal)
Le nombre de combinaisons de $p$ éléments parmi $n$, noté $C_n^p$ ou $\binom{n}{p}$, est donné par :
$$C_n^p = \binom{n}{p} = \frac{n!}{p!(n - p)!} = \frac{A_n^p}{p!}$$

* $n$ : nombre total d'éléments de l'ensemble.
* $p$ : nombre d'éléments à choisir.
* $!$ : symbole de la factorielle ($k! = k \times (k-1) \times \dots \times 1$, avec $0! = 1$).

---

### 4. Exemple d'utilisation
Dans une classe de $12$ étudiants, on souhaite former un comité de $3$ délégués (tous ont le même rôle, donc l'ordre ne compte pas et un même étudiant ne peut pas être choisi deux fois). Combien de comités différents peut-on former ?

Ici, $n = 12$ et $p = 3$ :
$$C_{12}^3 = \frac{12!}{3!(12 - 3)!} = \frac{12!}{3! \times 9!} = \frac{12 \times 11 \times 10}{3 \times 2 \times 1} = \frac{1\,320}{6} = 220$$

On peut donc former **$220$ comités différents**.
# Résumé des méthodes de dénombrement

Voici un tableau de synthèse pour vous aider à choisir la bonne méthode :

<br>

![Tableau de synthèse des méthodes de dénombrement](./TABLE%20SYNTRHAS.jpg)

<br>
*Figure 1 : Arbre décisionnel pour le choix de la méthode de dénombrement.*


## Exercice d'application : Dénombrement

*Énoncé : Pour chaque situation, justifier puis calculer.*

---

### 1. Ranger 7 personnes dans une file d'attente
* **Justification :** On place **tous** les éléments ($n = 7$ personnes), l'ordre compte (la place dans la file est importante) et il n'y a pas de répétition (une même personne ne peut pas occuper deux places en même temps). Il s'agit donc d'une **permutation** de $7$ éléments.
* **Calcul du cardinal :**
  $$\text{Card} = P_7 = 7! = 7 \times 6 \times 5 \times 4 \times 3 \times 2 \times 1 = \mathbf{5\,040}$$

---

### 2. Choisir 2 délégués (sans fonction particulière) dans une classe de 30
* **Justification :** On choisit $p = 2$ éléments parmi $n = 30$, l'ordre **ne compte pas** (les deux délégués ont le même rôle) et il n'y a pas de répétition (on ne choisit pas deux fois la même personne). Il s'agit donc d'une **combinaison**.
* **Calcul du cardinal :**
  $$\text{Card} = C_{30}^2 = \binom{30}{2} = \frac{30 \times 29}{2 \times 1} = \mathbf{435}$$

---

### 3. Choisir un délégué et un suppléant dans une classe de 30
* **Justification :** On choisit $p = 2$ éléments parmi $n = 30$, l'ordre **compte** (être délégué est différent d'être suppléant) et il n'y a pas de répétition (une même personne ne peut pas cumuler les deux fonctions). Il s'agit donc d'une **liste sans répétition** (ou arrangement).
* **Calcul du cardinal :**
  $$\text{Card} = A_{30}^2 = 30 \times 29 = \mathbf{870}$$

---

### 4. Lancer un dé 4 fois et noter la suite des résultats
* **Justification :** On effectue $p = 4$ tirages successifs parmi $n = 6$ faces ($\{1, 2, 3, 4, 5, 6\}$), l'ordre **compte** (on note la suite des résultats) et la **répétition est autorisée** (on peut obtenir le même chiffre plusieurs fois). Il s'agit donc d'une **liste avec répétition** ($4$-liste).
* **Calcul du cardinal :**
  $$\text{Card} = 6^4 = 6 \times 6 \times 6 \times 6 = \mathbf{1\,296}$$


  # Chapitre 2 : Notion de probabilité

## Expérience aléatoire

### Définition
Une **expérience aléatoire** est une expérience dont on connaît l'ensemble des issues (résultats) possibles à l'avance, mais dont on ne peut pas prédire avec certitude quel résultat se réalisera avant de l'effectuer.

> **Explication orale :** « Une expérience aléatoire est une expérience où on connaît les résultats possibles, mais on ne sait pas lequel va se réaliser. Par exemple, lorsqu'on lance un dé, on sait qu'on peut obtenir un nombre entre 1 et 6, mais on ne sait pas quel nombre va apparaître. »

### Exemple : Lancer d'un dé cubique équilibré
* On connaît les résultats possibles : $1, 2, 3, 4, 5$ ou $6$.
* Avant le lancer, il est impossible de savoir avec certitude quelle face va sortir.

## Univers des possibles

### Définition
L'**univers** (ou ensemble fondamental), généralement noté $\Omega$, est l'ensemble de toutes les issues (résultats) possibles d'une expérience aléatoire. Chaque élément $\omega \in \Omega$ est appelé une **issue** (ou éventualité).

### Exemples
* **Lancer d'une pièce de monnaie** (pile $\text{P}$, face $\text{F}$) :
  $$\Omega = \{\text{P}, \text{F}\}, \quad \text{Card}(\Omega) = 2$$
* **Lancer d'un dé cubique** :
  $$\Omega = \{1, 2, 3, 4, 5, 6\}, \quad \text{Card}(\Omega) = 6$$

---

## Événement et ensemble des événements

### 1. Événement
Un **événement** $A$ est un sous-ensemble de l'univers $\Omega$ ($A \subset \Omega$). On dit que l'événement $A$ est **réalisé** si l'issue obtenue lors de l'expérience appartient à $A$.

* **Événement élémentaire :** événement composé d'une seule issue (ex. : $\{6\}$).
* **Événement certain :** événement toujours réalisé, égal à l'univers entier $\Omega$ (ex. : « obtenir un entier entre $1$ et $6$ »).
* **Événement impossible :** événement qui ne peut jamais se réaliser, noté $\varnothing$ (ex. : « obtenir $7$ avec un dé cubique »).

**Exemple :** Pour le lancer d'un dé cubique ($\Omega = \{1, 2, 3, 4, 5, 6\}$), soit l'événement $A$ : « obtenir un nombre pair ».
$$A = \{2, 4, 6\}$$

### 2. Ensemble des événements
L'**ensemble des événements** d'une expérience aléatoire d'univers $\Omega$ est l'ensemble de toutes les parties de $\Omega$, noté $\mathcal{P}(\Omega)$.

* Chaque élément de $\mathcal{P}(\Omega)$ est un événement possible.
* Si $\text{Card}(\Omega) = n$, alors le nombre total d'événements est :
  $$\text{Card}(\mathcal{P}(\Omega)) = 2^n$$

**Exemple :** Pour le lancer d'une pièce ($\Omega = \{\text{P}, \text{F}\}$, donc $n = 2$), l'ensemble des événements contient $2^2 = 4$ événements :
$$\mathcal{P}(\Omega) = \big\{\varnothing, \; \{\text{P}\}, \; \{\text{F}\}, \; \{\text{P}, \text{F}\}\big\}$$